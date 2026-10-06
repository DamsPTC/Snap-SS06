/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107562720; end: 107562747;  */

void FUN_107562720(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107562898();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bd5c0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107562748; end: 107562767;  */

void FUN_107562748(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bd5c0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107562768; end: 1075627af;  */

void FUN_107562768(void)

{
  func_0x0001075628e4();
  func_0x0001075628f0();
  func_0x00010756294c();
  func_0x0001077b4e9c();
  func_0x00010756290c();
  func_0x000107562914();
  return;
}



/* Entry: 1075627b0; end: 1075627d7;  */

void FUN_1075627b0(undefined8 param_1)

{
  func_0x000107562928();
  func_0x000107562904(param_1,&PTR_DAT_1109bd620);
  func_0x0001075628a4();
  return;
}



/* Entry: 1075627d8; end: 1075627eb;  */

undefined ** FUN_1075627d8(void)

{
  return &PTR_DAT_1109bd620;
}



/* Entry: 1075627ec; end: 107562813;  */

void FUN_1075627ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107562898();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109bd640;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107562814; end: 10756283b;  */

void FUN_107562814(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109bd640;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10756283c; end: 107562863;  */

void FUN_10756283c(undefined8 param_1)

{
  func_0x000107562928();
  func_0x000107562904(param_1,&PTR_DAT_1109bd6a0);
  func_0x0001075628a4();
  return;
}



/* Entry: 107562864; end: 107562957;  */

undefined ** FUN_107562864(void)

{
  return &PTR_DAT_1109bd6a0;
}



/* Entry: 107562958; end: 107562c23;  */

undefined8 **
FUN_107562958(undefined8 **param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined1 auStack_318 [56];
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [112];
  undefined1 uStack_228;
  undefined1 auStack_220 [400];
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  lVar6 = param_5;
  func_0x0001075643b0();
  uVar4 = *(int *)(lVar6 + 0x70) == 1;
  uStack_58 = extraout_x8;
  if ((bool)uVar4) {
    FUN_1074dcb44(param_5);
    func_0x000107564384(uStack_58);
    if ((bool)uVar4) {
      *(undefined4 *)param_1 = 0;
      func_0x000104c2fe00(param_1 + 1,param_5);
      return param_1;
    }
  }
  else {
    uVar4 = *(int *)(lVar6 + 0x70) == 2;
    if ((bool)uVar4) {
      uStack_2d8 = 1;
      puVar5 = (undefined8 *)0xa8;
      __Znwm();
      plVar7 = puVar5 + 1;
      *plVar7 = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_1109bd7d0;
      puStack_2d0 = puVar5;
      func_0x00010732478c(auStack_220,param_3);
      func_0x0001073247cc(auStack_298,param_4);
      puVar5[9] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 8) = 0x3f800000;
      puVar5[3] = &PTR_FUN_1109bd820;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = param_2;
      func_0x00010732478c(puVar5 + 0xd,auStack_220);
      func_0x0001073247cc(puVar5 + 0x11,auStack_298);
      FUN_107324894(auStack_298);
      func_0x0001073248c8(auStack_220);
      puStack_2d0 = (undefined8 *)0x0;
      puStack_328 = puVar5 + 3;
      puStack_320 = puVar5;
      func_0x000107564268(auStack_2e0);
      uVar4 = *(int *)(param_5 + 0x70) == 2;
      if (!(bool)uVar4) goto LAB_107562b78;
      func_0x000107751284(auStack_220);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      auStack_298[0] = 0;
      uStack_228 = 0;
      puStack_338 = puVar5 + 3;
      puStack_330 = puVar5;
      func_0x000107751444(auStack_220,&puStack_338,auStack_298);
      auStack_2e0[0] = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      func_0x000104c2f64c(auStack_318);
      FUN_1073393c0(auStack_90,param_5 + 8,auStack_220,auStack_2e0,auStack_318);
      func_0x0001072d8a90(param_1,auStack_90);
      func_0x000104c2f714(auStack_90);
      func_0x000104c2f714(auStack_318);
      func_0x00010724b3d8(auStack_2e0);
      func_0x000107267e8c(auStack_298);
      func_0x000107267e44(&puStack_338);
      func_0x000107267da8(auStack_220);
      param_2 = &puStack_328;
      FUN_107562c24(param_2);
    }
    else {
      *(undefined4 *)param_1 = 4;
    }
    func_0x000107564384(uStack_58);
    if ((bool)uVar4) {
      return param_2;
    }
  }
  ___stack_chk_fail();
LAB_107562b78:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107562b80);
  (*pcVar3)();
}



/* Entry: 107562c24; end: 107562c4b;  */

long FUN_107562c24(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107562c4c; end: 10756395b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107562c4c(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  float fVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 in_ZR;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar17;
  ulong uStack_2e8;
  undefined **ppuStack_2e0;
  byte bStack_2d8;
  undefined ***pppuStack_2d0;
  byte bStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 auStack_2a8 [56];
  byte bStack_270;
  undefined1 auStack_268 [16];
  byte bStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  char cStack_240;
  byte bStack_218;
  byte bStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined1 uStack_1b8;
  undefined **ppuStack_1b0;
  ulong uStack_1a8;
  ulong *puStack_1a0;
  undefined ***pppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  byte bStack_130;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  ulong *puStack_110;
  undefined ***pppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  byte bStack_b0;
  long alStack_a0 [2];
  byte bStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  byte bStack_78;
  undefined8 uStack_70;
  
  plVar12 = param_3;
  func_0x0001075643b0();
  plVar10 = plVar12 + 1;
  uStack_70 = extraout_x8;
  (**(code **)(*plVar12 + 0x30))();
  if (((ulong)plVar10 & 1) == 0) {
    func_0x0001075643a8();
    func_0x000107564444();
  }
  else {
    func_0x0001075643c0();
    func_0x0001075643a0(auStack_268);
    if ((bStack_258 & 1) == 0) {
      func_0x0001075643a8();
      func_0x000107564444();
    }
    else {
      func_0x00010756440c(auStack_2a8);
      if ((bStack_270 & 1) == 0) {
        func_0x0001075643a8();
        func_0x000107564444();
      }
      else {
        pppuStack_2d0 = (undefined ***)((ulong)pppuStack_2d0 & 0xffffffffffffff00);
        bStack_2c8 = 0;
        func_0x000107564424();
        if ((int)plVar10 == 0) {
          func_0x000107564424();
          if ((int)plVar10 != 0) {
            func_0x0001075643f8();
            if ((bStack_130 & 1) == 0) {
              ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff00);
              ppuStack_1c8 = (undefined **)((ulong)ppuStack_1c8 & 0xffffffffffffff00);
            }
            else {
              func_0x0001075643c0();
              func_0x0001075643a0(&ppuStack_250);
              in_ZR = cStack_240 == '\x01';
              if ((bool)in_ZR) {
                func_0x0001075643cc(ppuStack_250[0xb]);
                if (((ulong)plVar10 >> 0x20 & 1) != 0) {
                  fVar1 = SUB84(plVar10,0);
                  bVar6 = false;
                  in_ZR = false;
                  bVar7 = false;
                  if (0.0 <= fVar1) {
                    bVar6 = false;
                    in_ZR = false;
                    bVar7 = true;
                    if (!NAN(fVar1)) {
                      bVar6 = fVar1 < 255.0;
                      in_ZR = fVar1 == 255.0;
                      bVar7 = false;
                    }
                  }
                  if ((bool)in_ZR || bVar6 != bVar7) goto LAB_107563190;
                }
                func_0x0001075643a8();
                ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff00);
                ppuStack_1c8 = (undefined **)((ulong)ppuStack_1c8 & 0xffffffffffffff00);
              }
              else {
LAB_107563190:
                func_0x0001075643c0();
                func_0x0001075643a0(&ppuStack_120);
                in_ZR = (char)puStack_110 == '\x01';
                if ((bool)in_ZR) {
                  func_0x0001075643cc(ppuStack_120[0xb]);
                  if (((ulong)plVar10 >> 0x20 & 1) != 0) {
                    fVar1 = SUB84(plVar10,0);
                    bVar6 = false;
                    in_ZR = false;
                    bVar7 = false;
                    if (0.0 <= fVar1) {
                      bVar6 = false;
                      in_ZR = false;
                      bVar7 = true;
                      if (!NAN(fVar1)) {
                        bVar6 = fVar1 < 255.0;
                        in_ZR = fVar1 == 255.0;
                        bVar7 = false;
                      }
                    }
                    if ((bool)in_ZR || bVar6 != bVar7) goto LAB_107563250;
                  }
                  func_0x0001075643a8();
                  uVar16 = 0;
                  ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff00);
                }
                else {
LAB_107563250:
                  ppuVar11 = (undefined **)0xe8;
                  __Znwm();
                  func_0x0001077c2910();
                  uVar16 = 1;
                  ppuStack_1d0 = ppuVar11;
                }
                ppuStack_1c8 = (undefined **)CONCAT71(ppuStack_1c8._1_7_,uVar16);
                func_0x00010756447c();
              }
              func_0x000107564468();
            }
            func_0x000107564484();
            FUN_107563b6c(&pppuStack_2d0,&ppuStack_1d0);
            pppuVar13 = &ppuStack_1d0;
            goto LAB_10756338c;
          }
          func_0x000107564424();
          iVar8 = (int)plVar10;
          if (iVar8 != 0) {
            func_0x0001075643c0();
            func_0x0001075643a0(&lStack_88);
            if ((bStack_78 & 1) == 0) {
              func_0x0001075643a8();
LAB_1075632a8:
              func_0x000107564494();
            }
            else {
              func_0x0001077b77a8(&ppuStack_c0);
              uStack_d8 = 0;
              uStack_d0 = 0;
              ppuStack_250 = (undefined **)((ulong)ppuStack_250 & 0xffffffffffffff00);
              cStack_240 = '\0';
              ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff00);
              ppuStack_1c0 = (undefined **)((ulong)ppuStack_1c0 & 0xffffffffffffff00);
              ppuStack_120 = (undefined **)((ulong)ppuStack_120 & 0xffffffffffffff00);
              pppuStack_108 = (undefined ***)((ulong)pppuStack_108 & 0xffffffffffffff00);
              FUN_1075375e8(&ppuStack_1b0,&uStack_d8,&ppuStack_250,&ppuStack_1d0,&ppuStack_120);
              func_0x0001001148fc(&ppuStack_120);
              func_0x000107323f70(&ppuStack_1d0);
              FUN_107323ef8(&ppuStack_250);
              FUN_107323f90(&uStack_d8);
              FUN_10754a964(&ppuStack_250,&ppuStack_1d0,param_3,param_4,&ppuStack_1b0);
              in_ZR = bStack_218 == 1;
              if ((bool)in_ZR) {
                FUN_107563c48(&ppuStack_1d0,1);
                ppuStack_1c0[2] = (undefined *)0x0;
                *ppuStack_1c0 = (undefined *)&PTR_FUN_1109bd898;
                ppuStack_1c0[1] = (undefined *)0x0;
                func_0x00010754afd0(ppuStack_1c0 + 3,&ppuStack_250);
                ppuVar11 = ppuStack_1c0;
                ppuStack_1c0 = (undefined **)0x0;
                func_0x000107563cd4(&ppuStack_1d0);
                ppuStack_2b8 = ppuVar11;
                ppuStack_1d0 = (undefined **)0x0;
                ppuStack_1c8 = (undefined **)0x0;
                ppuStack_2c0 = ppuVar11 + 3;
                FUN_107563ce4(&ppuStack_1d0);
                ppuVar3 = ppuStack_2b8;
                ppuVar11 = ppuStack_2c0;
                ppuStack_2c0 = (undefined **)0x0;
                ppuStack_2b8 = (undefined **)0x0;
                alStack_a0[0] = 0;
                alStack_a0[1] = 0;
                ppuStack_1c8 = ppuStack_b8;
                ppuStack_1d0 = ppuStack_c0;
                ppuStack_b8 = ppuVar3;
                ppuStack_c0 = ppuVar11;
                func_0x000107563d0c(&ppuStack_1d0);
                func_0x000107563d0c(alStack_a0);
                FUN_107563ce4(&ppuStack_2c0);
              }
              func_0x000107563d34(&ppuStack_250);
              ppuVar11 = (undefined **)0xa8;
              __Znwm();
              ppuStack_248 = ppuStack_b8;
              ppuStack_250 = ppuStack_c0;
              ppuStack_c0 = (undefined **)0x0;
              ppuStack_b8 = (undefined **)0x0;
              func_0x0001077b787c();
              ppuStack_1d0 = ppuVar11;
              func_0x000107563d0c(&ppuStack_250);
              iVar8 = (int)auStack_80;
              (**(code **)(lStack_88 + 0x30))();
              if (iVar8 == 0) {
                func_0x00010756445c();
                func_0x0001075643f0();
                in_ZR = bStack_218 == 1;
                if ((bool)in_ZR) {
                  func_0x00010756445c();
                  func_0x0001077b7a14(ppuVar11,&ppuStack_250);
                  func_0x0001075643f0();
                  goto LAB_107563310;
                }
                func_0x0001075643a8();
                bStack_2d8 = 0;
                ppuStack_2e0 = (undefined **)((ulong)ppuStack_2e0 & 0xffffffffffffff00);
              }
              else {
                (**(code **)(lStack_88 + 0x78))(&ppuStack_250,auStack_80,param_4);
                if ((bStack_1d8 & 1) == 0) {
                  func_0x000107564494();
                }
                else {
                  func_0x0001077b7a80(ppuVar11,&ppuStack_250);
                }
                FUN_107362064(&ppuStack_250);
                if ((bStack_1d8 & 1) != 0) {
LAB_107563310:
                  ppuStack_1d0 = (undefined **)0x0;
                  bStack_2d8 = 1;
                  ppuStack_2e0 = ppuVar11;
                }
              }
              func_0x000107563d64(&ppuStack_1d0);
              func_0x00010756441c();
              func_0x000107563d0c(&ppuStack_c0);
            }
LAB_107563378:
            func_0x00010756448c();
            FUN_107563b6c(&pppuStack_2d0,&ppuStack_2e0);
            pppuVar13 = &ppuStack_2e0;
            goto LAB_10756338c;
          }
          func_0x000107564424();
          if (iVar8 != 0) {
            func_0x0001075643c0();
            func_0x0001075643a0(&lStack_88);
            if ((bStack_78 & 1) == 0) {
              func_0x0001075643a8();
              goto LAB_1075632a8;
            }
            func_0x00010756440c(&ppuStack_250);
            if ((bStack_218 & 1) == 0) {
              func_0x0001075643a8();
              func_0x000107564494();
            }
            else {
              func_0x0001075643c0();
              func_0x0001075643a0(alStack_a0);
              if ((bStack_90 & 1) == 0) {
                func_0x0001075643a8();
LAB_10756336c:
                func_0x000107564494();
              }
              else {
                plVar12 = alStack_a0 + 1;
                (**(code **)(alStack_a0[0] + 0x18))();
                if ((int)plVar12 == 0) {
LAB_107563360:
                  func_0x0001075643a8();
                  goto LAB_10756336c;
                }
                func_0x0001075643cc(*(undefined8 *)(alStack_a0[0] + 0x20));
                in_ZR = plVar12 == (long *)0x4;
                if (!(bool)in_ZR) goto LAB_107563360;
                lVar17 = 0;
                uStack_f8 = 0;
                uStack_100 = 0;
                uStack_e8 = 0;
                uStack_f0 = 0;
                ppuStack_118 = (undefined **)0x0;
                ppuStack_120 = (undefined **)0x0;
                pppuStack_108 = (undefined ***)0x0;
                puStack_110 = (ulong *)0x0;
                pppuVar13 = &ppuStack_120;
                uStack_2e8 = (ulong)CONCAT14(ppuStack_2e0._0_1_,(uint)bStack_2d8);
                do {
                  in_ZR = lVar17 == 4;
                  if ((bool)in_ZR) {
                    ppuVar11 = (undefined **)0x98;
                    __Znwm();
                    uStack_1a8 = (ulong)ppuStack_118;
                    ppuStack_1b0 = ppuStack_120;
                    pppuStack_198 = pppuStack_108;
                    puStack_1a0 = puStack_110;
                    uStack_188 = uStack_f8;
                    uStack_190 = uStack_100;
                    uStack_178 = uStack_e8;
                    uStack_180 = uStack_f0;
                    func_0x0001077bee28();
                    ppuStack_c0 = ppuVar11;
                    func_0x0001077bef94(ppuVar11,&ppuStack_250);
                    ppuStack_c0 = (undefined **)0x0;
                    bStack_2d8 = 1;
                    ppuStack_2e0 = ppuVar11;
                    FUN_107563db4(&ppuStack_c0);
                    goto LAB_107563370;
                  }
                  ppuStack_2c0 = (undefined **)0x0;
                  ppuStack_2b8 = (undefined **)0x0;
                  ppuStack_c0 = (undefined **)((ulong)ppuStack_c0 & 0xffffffffffffff00);
                  bStack_b0 = 0;
                  uStack_d8 = uStack_d8 & 0xffffffffffffff00;
                  uStack_c8 = uStack_c8 & 0xffffffffffffff00;
                  ppuStack_1d0 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff00);
                  uStack_1b8 = 0;
                  FUN_1075375e8(&ppuStack_1b0,&ppuStack_2c0,&ppuStack_c0,&uStack_d8,&ppuStack_1d0);
                  func_0x0001001148fc(&ppuStack_1d0);
                  func_0x000107323f70(&uStack_d8);
                  FUN_107323ef8(&ppuStack_c0);
                  FUN_107323f90(&ppuStack_2c0);
                  (**(code **)(alStack_a0[0] + 0x28))(&uStack_d8,alStack_a0 + 1,lVar17);
                  FUN_107563d94(&ppuStack_c0,&uStack_d8,param_4,&ppuStack_1b0);
                  func_0x0001072f5f6c(&uStack_d8);
                  bVar4 = bStack_b0;
                  ppuVar11 = ppuStack_c0;
                  if ((bStack_b0 & 1) == 0) {
                    uStack_2e8 = 0;
                  }
                  else {
                    pppuVar13[1] = ppuStack_b8;
                    *pppuVar13 = ppuVar11;
                  }
                  func_0x00010756441c();
                  lVar17 = lVar17 + 1;
                  pppuVar13 = pppuVar13 + 2;
                } while ((bVar4 & 1) != 0);
                bStack_2d8 = (byte)uStack_2e8;
                ppuStack_2e0 = (undefined **)CONCAT71(ppuStack_2e0._1_7_,(char)(uStack_2e8 >> 0x20))
                ;
              }
LAB_107563370:
              func_0x000107564414();
            }
            func_0x0001075643f0();
            goto LAB_107563378;
          }
          func_0x0001075643a8();
LAB_1075635c4:
          func_0x000107564444();
        }
        else {
          func_0x0001075643f8();
          if ((bStack_130 & 1) == 0) {
            ppuStack_120 = (undefined **)((ulong)ppuStack_120 & 0xffffffffffffff00);
            ppuStack_118 = (undefined **)((ulong)ppuStack_118 & 0xffffffffffffff00);
          }
          else {
            func_0x0001075643c0();
            func_0x0001075643a0(&ppuStack_250);
            in_ZR = cStack_240 == '\x01';
            if ((bool)in_ZR) {
              func_0x0001075643cc(ppuStack_250[0xb]);
              fVar1 = SUB84(plVar10,0);
              in_ZR = fVar1 == 65535.0;
              if (((fVar1 <= 65535.0) && (((ulong)plVar10 >> 0x20 & 1) != 0)) &&
                 (in_ZR = fVar1 == 0.0, 0.0 <= fVar1)) goto LAB_107562fd4;
              func_0x0001075643a8();
              uVar16 = 0;
              ppuStack_120 = (undefined **)((ulong)ppuStack_120 & 0xffffffffffffff00);
            }
            else {
LAB_107562fd4:
              ppuVar11 = (undefined **)0xd8;
              __Znwm();
              func_0x0001077bf904();
              uVar16 = 1;
              ppuStack_120 = ppuVar11;
            }
            ppuStack_118 = (undefined **)CONCAT71(ppuStack_118._1_7_,uVar16);
            func_0x000107564468();
          }
          func_0x000107564484();
          FUN_107563b6c(&pppuStack_2d0,&ppuStack_120);
          pppuVar13 = &ppuStack_120;
LAB_10756338c:
          func_0x000107563c28();
          pppuVar2 = pppuStack_2d0;
          if ((bStack_2c8 & 1) == 0) goto LAB_1075635c4;
          func_0x0001075643c0();
          func_0x0001075643a0(&ppuStack_120);
          if (((char)puStack_110 == '\x01') &&
             (func_0x0001075643cc(ppuStack_120[0xb]), ((ulong)pppuVar13 >> 0x20 & 1) != 0)) {
            fVar1 = SUB84(pppuVar13,0);
            pppuVar13 = pppuVar2;
            func_0x0001077b5568(pppuVar2,(int)fVar1 | 0x100);
          }
          func_0x0001075643c0();
          func_0x0001075643a0(&ppuStack_1d0);
          if (((char)ppuStack_1c0 == '\x01') &&
             (func_0x0001075643cc(ppuStack_1d0[0xb]), ((ulong)pppuVar13 >> 0x20 & 1) != 0)) {
            fVar1 = SUB84(pppuVar13,0);
            pppuVar13 = pppuVar2;
            func_0x0001077b55e4(pppuVar2,(int)fVar1);
          }
          func_0x0001075643c0();
          func_0x0001075643a0(&lStack_88);
          if (bStack_78 == 1) {
            func_0x0001075643cc(*(undefined8 *)(lStack_88 + 0x58));
            fVar1 = SUB84(pppuVar13,0);
            if (((fVar1 <= 65535.0) && (((ulong)pppuVar13 >> 0x20 & 1) != 0)) && (0.0 <= fVar1)) {
              func_0x0001077b5694(pppuVar2,(int)fVar1 | 0x10000);
            }
          }
          func_0x0001075643c0();
          func_0x0001075643a0(alStack_a0);
          if (bStack_90 == 1) {
            uVar9 = (int)alStack_a0 + 8;
            (**(code **)(alStack_a0[0] + 0x50))();
            if ((uVar9 >> 8 & 1) != 0) {
              func_0x0001077b563c(pppuVar2,uVar9 & 1);
            }
          }
          func_0x0001075643c0();
          func_0x0001075643a0(&ppuStack_c0);
          if (bStack_b0 == 1) {
            uVar14 = 0;
            (*(code *)ppuStack_c0[6])();
            if ((uVar14 & 1) != 0) {
              uStack_d8 = 0;
              uStack_d0 = 0;
              uStack_c8 = 0;
              ppuStack_1b0 = &PTR_FUN_1109bd6d0;
              puStack_1a0 = &uStack_d8;
              pppuStack_198 = &ppuStack_1b0;
              uStack_1a8 = param_5;
              (*(code *)ppuStack_c0[8])(&ppuStack_250,&ppuStack_b8,&ppuStack_1b0);
              FUN_1073249ac(&ppuStack_250);
              FUN_1073249cc(&ppuStack_1b0);
              if (uStack_d8 != uStack_d0) {
                func_0x0001077b5770(pppuVar2,&uStack_d8);
              }
              func_0x0001072c9240(&uStack_d8);
            }
          }
          func_0x0001075643c0();
          func_0x0001075643a0(&uStack_d8);
          if ((char)uStack_c8 == '\x01') {
            func_0x00010756440c(&ppuStack_1b0);
            if ((char)uStack_178 == '\x01') {
              pppuVar13 = &ppuStack_1b0;
              func_0x000107278484(pppuVar13,"none");
              if (((ulong)pppuVar13 & 1) == 0) {
                if ((uStack_178 & 1) == 0) goto LAB_1075636e0;
                pppuVar13 = &ppuStack_1b0;
                func_0x000107278484(pppuVar13,&UNK_10f40a38b);
                if ((int)pppuVar13 == 0) goto LAB_1075635f4;
                uVar15 = 1;
              }
              else {
                uVar15 = 0;
              }
              func_0x0001077b5718(pppuVar2,uVar15);
            }
LAB_1075635f4:
            func_0x00010724b3d8(&ppuStack_1b0);
          }
          func_0x0001072f5f4c(&uStack_d8);
          func_0x0001072f5f4c(&ppuStack_c0);
          func_0x000107564414();
          func_0x00010756448c();
          func_0x0001072f5f4c(&ppuStack_1d0);
          func_0x00010756447c();
          func_0x000107564444(bStack_2c8);
          pppuVar13 = pppuStack_2d0;
          in_ZR = extraout_w8 == 1;
          if ((bool)in_ZR) {
            pppuStack_2d0 = (undefined ***)0x0;
            *param_1 = (long)pppuVar13;
            *(undefined1 *)(param_1 + 1) = 1;
          }
        }
        func_0x000107563c28(&pppuStack_2d0);
      }
      func_0x00010724b3d8(auStack_2a8);
    }
    func_0x0001072f5f4c(auStack_268);
  }
  func_0x000107564384(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1075636e0:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1075636e8);
  (*pcVar5)();
}



/* Entry: 10756395c; end: 107563ab7;  */

void FUN_10756395c(undefined1 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 extraout_x8;
  undefined1 auStack_c8 [56];
  byte bStack_90;
  byte bStack_58;
  undefined1 auStack_50 [16];
  byte bStack_40;
  undefined8 uStack_38;
  
  plVar2 = param_2;
  func_0x0001075643b0();
  uStack_38 = extraout_x8;
  (**(code **)(*plVar2 + 0x38))(auStack_50,plVar2 + 1,"url");
  if ((bStack_40 & 1) == 0) {
    FUN_107563ab8(auStack_c8,param_2,param_3,param_4);
    bVar1 = (bStack_58 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_10750fed8(param_1 + 8,auStack_c8);
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
    param_1[0x80] = !bVar1;
    FUN_10750fcb8(auStack_c8);
  }
  else {
    func_0x00010756440c(auStack_c8);
    bVar1 = (bStack_90 & 1) == 0;
    if (bVar1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (param_3,&UNK_10f41771f);
      *param_1 = 0;
    }
    else {
      func_0x000104c2fe00(param_1 + 8,auStack_c8);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    param_1[0x80] = !bVar1;
    func_0x00010724b3d8(auStack_c8);
  }
  func_0x0001072f5f4c(auStack_50);
  func_0x000107564384(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_c8);
  func_0x0001072f5f4c(auStack_50);
  func_0x0001075643e8();
  func_0x0001075644a0();
  FUN_1075644b4();
  return;
}



/* Entry: 107563ab8; end: 107563ad7;  */

void FUN_107563ab8(void)

{
  func_0x0001075644a0();
  FUN_1075644b4();
  return;
}



/* Entry: 107563ad8; end: 107563b07;  */

long FUN_107563ad8(long param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_107563b08(param_1 + 8);
  }
  return param_1;
}



/* Entry: 107563b08; end: 107563b5b;  */

void FUN_107563b08(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x70) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109bd6b0)[*(uint *)(param_1 + 0x70)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}



/* Entry: 107563b5c; end: 107563b6b;  */

void FUN_107563b5c(undefined8 param_1,long param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_2 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107eb090)[*(uint *)(param_2 + 0x28)])(&uStack_21,param_2);
  }
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 107563b6c; end: 107563b8f;  */

undefined8 FUN_107563b6c(undefined8 param_1)

{
  FUN_107563b90();
  return param_1;
}



/* Entry: 107563b90; end: 107563bc7;  */

long * FUN_107563b90(long *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == (char)param_2[1]) {
    if (cVar1 != '\0') {
      lVar3 = *param_2;
      *param_2 = 0;
      plVar2 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      return param_1;
    }
  }
  else {
    if (cVar1 != '\0') {
      if ((char)param_1[1] == '\x01') {
        func_0x000107529620();
        *(undefined1 *)(param_1 + 1) = 0;
      }
      return param_1;
    }
    lVar3 = *param_2;
    *param_2 = 0;
    *param_1 = lVar3;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}



/* Entry: 107563bc8; end: 107563c03;  */

long * FUN_107563bc8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  plVar1 = (long *)*param_1;
  *param_1 = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 107563c04; end: 107563c47;  */

void FUN_107563c04(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107529620();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107563c48; end: 107563c6f;  */

long FUN_107563c48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107563c70();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107563c70; end: 107563c9b;  */

void FUN_107563c70(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109bd898;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107563c9c; end: 107563c9f;  */

void FUN_107563c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd898;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107563ca0; end: 107563cb3;  */

void FUN_107563ca0(void)

{
  func_0x000107563cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107563cb4; end: 107563ce3;  */

long FUN_107563cb4(long param_1)

{
  FUN_10754af60(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  return param_1 + 0x38;
}



/* Entry: 107563ce4; end: 107563d93;  */

long FUN_107563ce4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107563d94; end: 107563db3;  */

void FUN_107563d94(void)

{
  func_0x0001075644a0();
  FUN_1075376ec();
  return;
}



/* Entry: 107563db4; end: 107563de3;  */

long * FUN_107563db4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001077bef44();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107563de4; end: 107563deb;  */

void FUN_107563de4(void)

{
  return;
}



/* Entry: 107563dec; end: 107563e1f;  */

void FUN_107563dec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_1109bd6d0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 107563e20; end: 107563e47;  */

void FUN_107563e20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109bd6d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107563e48; end: 107563fff;  */

void FUN_107563e48(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar4;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [112];
  undefined1 auStack_200 [56];
  undefined1 auStack_1c8 [56];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [120];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [112];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_2;
  func_0x0001075643b0();
  uVar3 = *param_3;
  uVar1 = param_3[1];
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  auStack_f0[0] = 1;
  auStack_278[0] = 0;
  uStack_58 = extraout_x8;
  FUN_107323db4(auStack_170,extraout_x9,&uStack_290,*(undefined8 *)(lVar2 + 8),auStack_f0,
                auStack_278);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000104c302a4(auStack_200,uVar3,uVar1);
  FUN_1073243b8(auStack_270,auStack_168);
  func_0x000104c318bc(auStack_1c8,auStack_200);
  FUN_1073244ec(auStack_e8,auStack_270);
  uStack_60 = 0;
  uVar3 = 0x80;
  __Znwm();
  func_0x000107564434();
  FUN_1073244ec();
  uStack_60 = uVar3;
  func_0x0001073248fc(auStack_190,auStack_78);
  func_0x0001072c92ec(auStack_78);
  FUN_10732442c(auStack_e8);
  func_0x000107323fb4(uVar4,auStack_1c8);
  func_0x0001072c92c8(auStack_1c8);
  func_0x00010756442c();
  func_0x000104c2f714(auStack_200);
  func_0x00010732493c(auStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_290);
  *param_1 = 0;
  param_1[0x18] = 0;
  func_0x000107564384(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c92c8(auStack_1c8);
  func_0x00010756442c();
  func_0x000104c2f714(auStack_200);
  func_0x00010732493c(auStack_170);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_290);
    func_0x0001075643e8();
  } while( true );
}



/* Entry: 107564000; end: 107564037;  */

long FUN_107564000(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109bd7b0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107564038; end: 107564043;  */

undefined ** FUN_107564038(void)

{
  return &PTR_DAT_1109bd7b0;
}



/* Entry: 107564044; end: 107564067;  */

undefined8 FUN_107564044(undefined8 param_1)

{
  func_0x000107564434();
  FUN_10732442c();
  return param_1;
}



/* Entry: 107564068; end: 10756407b;  */

void FUN_107564068(void)

{
  FUN_107564044();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756407c; end: 1075640bf;  */

undefined8 FUN_10756407c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x80;
  __Znwm(0x80);
  FUN_107564240();
  return uVar1;
}



/* Entry: 1075640c0; end: 1075640e3;  */

undefined8 FUN_1075640c0(long param_1,undefined8 param_2)

{
  func_0x000107564434(param_2,param_1 + 8);
  FUN_1073243b8();
  return param_2;
}



/* Entry: 1075640e4; end: 1075641fb;  */

undefined1 *
FUN_1075640e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x0001075643b0();
  uStack_48 = extraout_x8;
  FUN_10732480c(auStack_120,param_4);
  FUN_107324850(auStack_140,param_5);
  func_0x00010732478c(auStack_68,auStack_120);
  func_0x0001073247cc(auStack_88,auStack_140);
  FUN_1073243b8(auStack_f8,param_2 + 0x10);
  puVar2 = auStack_68;
  FUN_107562958(param_1,param_3,puVar2,auStack_88,auStack_100);
  func_0x00010756442c();
  FUN_107324894(auStack_88);
  func_0x0001073248c8(auStack_68);
  FUN_107324894(auStack_140);
  puVar1 = auStack_120;
  func_0x0001073248c8();
  func_0x000107564384(uStack_48);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010756442c();
  FUN_107324894(auStack_88);
  func_0x0001073248c8(auStack_68);
  FUN_107324894(auStack_140);
  puVar1 = auStack_120;
  func_0x0001073248c8(puVar1);
  func_0x0001075643e8();
  func_0x0001004a5364(puVar2,&PTR_DAT_1109bd7a0);
  puVar1 = puVar1 + 8;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* Entry: 1075641fc; end: 107564233;  */

long FUN_1075641fc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109bd7a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107564234; end: 10756423f;  */

undefined ** FUN_107564234(void)

{
  return &PTR_DAT_1109bd7a0;
}



/* Entry: 107564240; end: 10756428f;  */

undefined8 FUN_107564240(undefined8 param_1)

{
  func_0x000107564434();
  FUN_1073243b8();
  return param_1;
}



/* Entry: 107564290; end: 10756429f;  */

void FUN_107564290(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd7d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1075642a0; end: 1075642b3;  */

void FUN_1075642a0(void)

{
  FUN_107564290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075642b4; end: 1075642c3;  */

void FUN_1075642b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001075642bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1075642c4; end: 10756430b;  */

undefined8 * FUN_1075642c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bd820;
  FUN_107324894(param_1 + 0xe);
  func_0x0001073248c8(param_1 + 10);
  func_0x0001072977d0(param_1 + 6);
  *param_1 = &PTR_DAT_110998b48;
  func_0x0001072978d8(param_1 + 1);
  return param_1;
}



/* Entry: 10756430c; end: 10756431f;  */

void FUN_10756430c(void)

{
  FUN_1075642c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107564320; end: 107564327;  */

undefined8 FUN_107564320(void)

{
  return 0;
}



/* Entry: 107564328; end: 107564367;  */

long * FUN_107564328(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107564338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  plVar1 = (long *)plVar1[0xd];
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107564358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  return (long *)plVar1[9];
}



/* Entry: 107564368; end: 1075644b3;  */

undefined8 FUN_107564368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1075644b4; end: 107564e0f;  */

void FUN_1075644b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  undefined1 *puVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined1 auStack_480 [16];
  undefined1 auStack_470 [16];
  undefined1 auStack_460 [24];
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined2 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined2 uStack_3e0;
  undefined1 uStack_3d8;
  char cStack_3b0;
  long lStack_3a8;
  undefined1 auStack_3a0 [8];
  char cStack_398;
  undefined1 auStack_390 [16];
  char cStack_380;
  long lStack_378;
  undefined1 auStack_370 [8];
  byte bStack_368;
  uint5 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [24];
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  byte bStack_2e0;
  int iStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [8];
  byte bStack_288;
  undefined1 auStack_280 [16];
  char cStack_270;
  undefined1 auStack_228 [232];
  undefined1 *puStack_140;
  long lStack_98;
  undefined1 auStack_90 [8];
  byte bStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_408 = 0;
  uStack_428 = 0;
  uStack_420 = 0;
  uStack_438 = 0;
  uStack_430 = 0;
  uStack_400 = 0x1600;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  uStack_3f8 = 0;
  uStack_448 = 0;
  uStack_440 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  cStack_3b0 = '\0';
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_448);
  func_0x00010726e078(&uStack_430);
  func_0x000107564ea0(&lStack_98);
  if ((bStack_88 & 1) == 0) {
    func_0x000107564e90();
  }
  else {
    uVar6 = 0;
    (**(code **)(lStack_98 + 0x18))();
    if ((uVar6 & 1) != 0) {
      func_0x000107751284(auStack_228);
      func_0x0001078696e8(auStack_460);
      if (*(char *)(param_6 + 0x38) == '\x01') {
        lVar7 = param_6 + 0x28;
        FUN_107326bd0(lVar7);
        func_0x00010786972c(auStack_318,lVar7);
        func_0x00010726c924(auStack_460,auStack_318);
        func_0x00010726b264(auStack_318);
        puStack_140 = auStack_460;
      }
      puVar16 = (undefined1 *)0x0;
      while( true ) {
        puVar8 = auStack_90;
        (**(code **)(lStack_98 + 0x20))();
        fVar17 = (float)param_2;
        if (puVar8 <= puVar16) break;
        (**(code **)(lStack_98 + 0x28))(&lStack_378,auStack_90,puVar16);
        iVar5 = (int)&lStack_378;
        func_0x000107766098();
        if (iVar5 != 0) {
          func_0x0001072c95f0(auStack_280,1);
          uVar6 = (ulong)_uStack_360 >> 0x28;
          uVar15 = (uint)_uStack_360;
          uStack_360 = (uint5)(uVar15 & 0xffffff00);
          _uStack_360 = CONCAT35((int3)uVar6,uStack_360);
          auStack_318[0] = 0;
          uStack_2f8 = 0;
          func_0x000107771274(&lStack_298,auStack_280,&lStack_378,param_6,&uStack_360,auStack_318);
          func_0x0001072c94e0(auStack_318);
          if ((bStack_288 & 1) == 0) {
            func_0x000107564ec0();
          }
          else {
            uStack_320 = 0;
            param_2 = 0;
            uStack_338 = 0;
            uStack_340 = 0;
            uStack_328 = 0;
            uStack_330 = 0;
            uStack_358 = 0;
            _uStack_360 = 0;
            uStack_348 = 0;
            uStack_350 = 0;
            func_0x000107753050(auStack_318,lStack_298,auStack_228,&uStack_360);
            func_0x00010724b3d8(&uStack_360);
            if (iStack_2a0 == 1) {
              FUN_1073405dc(auStack_318);
              func_0x000107775f1c(auStack_390);
              uStack_358 = CONCAT44(uStack_358._4_4_,3);
              puVar8 = auStack_390;
              FUN_1074d1ed0(puVar8,&uStack_360);
              func_0x0001072c9884(&uStack_360);
              if ((int)puVar8 == 0) {
                FUN_1073405dc(auStack_318);
                func_0x0001077760fc(&uStack_360);
                func_0x0001072999ec(&uStack_418,&uStack_360);
                func_0x000104c2f714(&uStack_360);
              }
              else {
                func_0x000107564ec0();
              }
              func_0x0001072c9884(auStack_390);
              func_0x000107564eb4();
              func_0x000107564f1c();
              func_0x000107564f24();
              if (((ulong)puVar8 & 1) != 0) goto LAB_107564854;
              goto LAB_10756475c;
            }
            func_0x000107564ec0();
            func_0x000107564eb4();
          }
          func_0x000107564f1c();
          func_0x000107564f24();
LAB_107564854:
          func_0x000107564f2c();
          goto LAB_107564bfc;
        }
        (**(code **)(lStack_378 + 0x68))(auStack_318,auStack_370);
        bVar1 = bStack_2e0;
        if ((bStack_2e0 & 1) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (param_5,&UNK_10f417896);
          func_0x000107564ec0();
        }
        else {
          func_0x000104c318bc(auStack_280,auStack_318);
          func_0x0001072999ec(&uStack_418,auStack_280);
          func_0x000104c2f714(auStack_280);
        }
        func_0x000107564e98();
        if ((bVar1 & 1) == 0) goto LAB_107564854;
LAB_10756475c:
        func_0x000107564f2c();
        puVar16 = puVar16 + 1;
      }
      func_0x000107564ef0();
      func_0x000107564ea0(auStack_280);
      if (cStack_270 == '\x01') {
        func_0x000107564ea8();
        if ((bStack_2e0 == 1) && (func_0x000107564f14(), (int)puVar8 != 0)) {
          uStack_3e0 = CONCAT11(uStack_3e0._1_1_,1);
        }
        func_0x000107564e98();
      }
      func_0x000107564ef0();
      func_0x000107564ea0(&uStack_360);
      if ((char)uStack_350 == '\x01') {
        func_0x000107564ea8();
        if (bStack_2e0 == 1) {
          func_0x000107564f14();
          if ((int)puVar8 == 0) {
            if ((bStack_2e0 == 1) && (func_0x000107564f14(), ((ulong)puVar8 & 1) == 0)) {
              func_0x000107564e90();
            }
          }
          else {
            uStack_3e0 = CONCAT11(1,(undefined1)uStack_3e0);
          }
        }
        func_0x000107564e98();
      }
      func_0x000107564ef0();
      func_0x000107564ea0(&lStack_298);
      uVar15 = (uint)bStack_288;
      cVar2 = SBORROW4(uVar15,1);
      cVar3 = (int)(uVar15 - 1) < 0;
      uVar4 = uVar15 == 1;
      if ((bool)uVar4) {
        (**(code **)(lStack_298 + 0x58))(auStack_290);
        func_0x000107564efc();
        if ((((bool)uVar4 || cVar3 != cVar2) && extraout_x8 != 0) && (0.0 <= fVar17)) {
          uStack_400 = CONCAT11(uStack_400._1_1_,(char)(int)fVar17);
          goto LAB_1075648d8;
        }
        func_0x000107564e90();
        func_0x000107564ec0();
      }
      else {
LAB_1075648d8:
        func_0x000107564ef0();
        func_0x000107564ea0(&lStack_378);
        uVar15 = (uint)bStack_368;
        cVar2 = SBORROW4(uVar15,1);
        cVar3 = (int)(uVar15 - 1) < 0;
        uVar4 = uVar15 == 1;
        if ((bool)uVar4) {
          (**(code **)(lStack_378 + 0x58))(auStack_370);
          func_0x000107564efc();
          if ((((bool)uVar4 || cVar3 != cVar2) && extraout_x8_00 != 0) && (0.0 <= fVar17)) {
            uStack_400 = CONCAT11((char)(int)fVar17,(undefined1)uStack_400);
            goto LAB_107564928;
          }
          func_0x000107564e90();
          func_0x000107564ec0();
        }
        else {
LAB_107564928:
          func_0x000107564ef0();
          func_0x000107564ea0(auStack_390);
          if (cStack_380 == '\x01') {
            func_0x000107564ea8();
            if ((bStack_2e0 & 1) == 0) {
              func_0x000107564e90();
              func_0x000107564ec0();
            }
            else {
              FUN_1073285e0(&uStack_3f8,auStack_318);
            }
            func_0x000107564e98();
            if ((bStack_2e0 & 1) != 0) goto LAB_1075649b4;
          }
          else {
LAB_1075649b4:
            func_0x000107564ef0();
            func_0x000107564ea0(&lStack_3a8);
            if (cStack_398 == '\x01') {
              iVar5 = (int)auStack_3a0;
              (**(code **)(lStack_3a8 + 0x18))();
              if (iVar5 == 0) {
LAB_107564b08:
                func_0x000107564e90();
              }
              else {
                puVar16 = auStack_3a0;
                (**(code **)(lStack_3a8 + 0x20))();
                if (puVar16 != (undefined1 *)0x4) goto LAB_107564b08;
                func_0x000107564f40();
                func_0x000107564f34();
                uVar12 = 0;
                (*extraout_x9)();
                func_0x000107564f4c();
                puVar16 = auStack_310;
                (*extraout_x8_01)();
                func_0x000107564ecc();
                func_0x000107564f40();
                func_0x000107564f34();
                uVar13 = 1;
                (*extraout_x9_00)();
                func_0x000107564f4c();
                puVar8 = auStack_310;
                (*extraout_x8_02)();
                func_0x000107564ecc();
                func_0x000107564f40();
                func_0x000107564f34();
                uVar6 = 0;
                (*extraout_x9_01)();
                func_0x000107564f4c();
                puVar9 = auStack_310;
                (*extraout_x8_03)();
                func_0x000107564ecc();
                func_0x000107564f40();
                func_0x000107564f34();
                uVar14 = 3;
                (*extraout_x9_02)();
                func_0x000107564f4c();
                puVar10 = auStack_310;
                (*extraout_x8_04)();
                func_0x000107564ecc();
                if (((((uVar12 & 1) == 0) || ((uVar6 & 1) == 0)) || ((uVar13 & 1) == 0)) ||
                   ((uVar14 & 1) == 0)) {
                  func_0x000107564e90();
                }
                else {
                  dVar18 = (double)NEON_fminnm(puVar8,0x4056800000000000);
                  if (dVar18 <= -90.0) {
                    dVar18 = -90.0;
                  }
                  dVar19 = (double)NEON_fminnm(puVar10,0x4056800000000000);
                  if (dVar19 <= -90.0) {
                    dVar19 = -90.0;
                  }
                  if (dVar18 <= dVar19) {
                    if ((double)puVar16 <= (double)puVar9) {
                      if ((double)puVar16 <= -180.0) {
                        puVar16 = (undefined1 *)0xc066800000000000;
                      }
                      func_0x000107246514(dVar18,puVar16,auStack_470,0);
                      uVar20 = NEON_fminnm(puVar9,0x4066800000000000);
                      func_0x000107246514(dVar19,uVar20,auStack_480,0);
                      func_0x00010725ac68(auStack_318,auStack_470,auStack_480);
                      if (cStack_3b0 == '\x01') {
                        func_0x000107564ed4();
                        *(undefined1 *)(extraout_x9_03 + 0x60) = uStack_2f8;
                      }
                      else {
                        func_0x000107564ed4();
                        *(ulong *)(extraout_x9_04 + 0x60) = CONCAT71(uStack_2f7,uStack_2f8);
                        cStack_3b0 = '\x01';
                      }
                      goto LAB_107564bc0;
                    }
                    func_0x000107564e90();
                  }
                  else {
                    func_0x000107564e90();
                  }
                }
              }
              func_0x000107564ec0();
            }
            else {
LAB_107564bc0:
              FUN_107564e10(param_1,&uStack_418);
            }
            func_0x0001072f5f4c(&lStack_3a8);
          }
          func_0x0001072f5f4c(auStack_390);
        }
        func_0x0001072f5f4c(&lStack_378);
      }
      func_0x0001072f5f4c(&lStack_298);
      func_0x0001072f5f4c(&uStack_360);
      func_0x0001072f5f4c(auStack_280);
LAB_107564bfc:
      func_0x00010726b264(auStack_460);
      func_0x000107267da8(auStack_228);
      goto LAB_107564c0c;
    }
    func_0x000107564e90();
  }
  func_0x000107564ec0();
LAB_107564c0c:
  func_0x0001072f5f4c(&lStack_98);
  puVar11 = &uStack_418;
  FUN_10750fcd8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072f5f4c(&lStack_3a8);
  func_0x0001072f5f4c(auStack_390);
  func_0x0001072f5f4c(&lStack_378);
  func_0x0001072f5f4c(&lStack_298);
  func_0x0001072f5f4c(&uStack_360);
  func_0x0001072f5f4c(auStack_280);
  func_0x00010726b264(auStack_460);
  func_0x000107267da8(auStack_228);
  func_0x0001072f5f4c(&lStack_98);
  FUN_10750fcd8(&uStack_418);
  __Unwind_Resume();
  func_0x000107564e2c();
  *(undefined1 *)(puVar11 + 0xe) = 1;
  return;
}



/* Entry: 107564e10; end: 107564e2b;  */

void FUN_107564e10(long param_1)

{
  FUN_107564e2c();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 107564e2c; end: 107564f57;  */

void FUN_107564e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  uVar4 = param_2[10];
  uVar3 = param_2[9];
  uVar6 = param_2[0xc];
  uVar5 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xc] = uVar6;
  param_1[0xb] = uVar5;
  param_1[10] = uVar4;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return;
}



/* Entry: 107564f58; end: 107565123;  */

void FUN_107564f58(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x9;
  long extraout_x9_00;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lStack_78;
  undefined1 auStack_70 [8];
  char cStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  char cStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_3 + 1;
  plVar1 = plVar6;
  (**(code **)(*param_3 + 0x30))();
  if (((ulong)plVar1 & 1) == 0) {
    FUN_107565124();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    goto LAB_1075650c0;
  }
  (**(code **)(*param_3 + 0x38))(&lStack_60,plVar6,"duration");
  if (cStack_50 == '\x01') {
    puVar2 = auStack_58;
    (**(code **)(lStack_60 + 0x58))();
    if (((ulong)puVar2 >> 0x20 & 1) != 0) {
      func_0x00010756512c();
      lVar7 = extraout_x8 * extraout_x9;
      lVar8 = 1;
      goto LAB_10756502c;
    }
    FUN_107565124();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
LAB_10756502c:
    (**(code **)(*param_3 + 0x38))(&lStack_78,plVar6,"delay");
    if (cStack_68 == '\x01') {
      puVar2 = auStack_70;
      (**(code **)(lStack_78 + 0x58))();
      if (((ulong)puVar2 >> 0x20 & 1) != 0) {
        func_0x00010756512c();
        lVar4 = extraout_x8_00 * extraout_x9_00;
        lVar5 = 1;
        goto LAB_10756509c;
      }
      FUN_107565124();
      uVar3 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
LAB_10756509c:
      *param_1 = lVar7;
      param_1[1] = lVar8;
      param_1[2] = lVar4;
      param_1[3] = lVar5;
      uVar3 = 1;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    *(undefined1 *)(param_1 + 5) = uVar3;
    func_0x0001072f5f4c(&lStack_78);
  }
  plVar1 = &lStack_60;
  func_0x0001072f5f4c(plVar1);
LAB_1075650c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072f5f4c(&lStack_78);
  func_0x0001072f5f4c(&lStack_60);
  __Unwind_Resume(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)
            (param_4);
  return;
}



/* Entry: 107565124; end: 10756513f;  */

void FUN_107565124(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)();
  return;
}



/* Entry: 107565140; end: 1075652cb;  */

undefined8 *
FUN_107565140(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  undefined1 uStack_41;
  
  lVar3 = param_2[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107569720();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_6;
  func_0x000104c2fe00(param_1 + 3,param_3);
  func_0x000107376950(param_1 + 10,param_4);
  puVar1 = param_1 + 0xe;
  func_0x000107376950(puVar1,param_5);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  func_0x00010785f1f4();
  uStack_41 = 0;
  puVar1 = puVar1 + 0x34;
  func_0x00010724e2c8(puVar1,&uStack_41);
  if ((int)puVar1 == 0) {
    bVar2 = 1;
  }
  else {
    func_0x000107278484(param_3,&UNK_10f417a98);
    bVar2 = (byte)param_3 ^ 1;
  }
  param_1[0x1e] = 0;
  param_1[0x1d] = param_1 + 0x1e;
  *(byte *)(param_1 + 0x1c) = bVar2;
  param_1[0x20] = 0x32aaaba7;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  func_0x00010726ed14(param_1 + 0x28);
  param_1[0x2a] = param_1;
  return param_1;
}



/* Entry: 1075652cc; end: 10756531f;  */

undefined8
FUN_1075652cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_107565140(param_1,&uStack_30,param_2,param_3,param_4,param_5);
  func_0x00010724b8b8(&uStack_30);
  return param_1;
}



/* Entry: 107565320; end: 10756552f;  */

undefined1 *
FUN_107565320(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long *unaff_x20;
  undefined1 auStack_318 [168];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [24];
  undefined8 *puStack_1e8;
  undefined1 auStack_1e0 [208];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [88];
  undefined8 uStack_48;
  
  func_0x0001075698a8();
  func_0x0001075696cc();
  uStack_100 = param_2[1];
  uStack_108 = *param_2;
  uStack_e8 = param_4[1];
  uStack_f0 = *param_4;
  lStack_e0 = param_4[2];
  uStack_110 = param_1;
  uStack_f8 = param_3;
  uStack_48 = extraout_x8;
  if (lStack_e0 != 0) {
    do {
      func_0x000107569720();
    } while (extraout_w10 != 0);
  }
  FUN_107568c00(auStack_d8,param_5);
  func_0x000107569a38(auStack_b8);
  FUN_107567170(auStack_a0,&uStack_110);
  FUN_107565530(&uStack_110);
  if (*unaff_x20 == 0) {
    FUN_10756555c(auStack_b8);
  }
  else {
    puVar1 = &uStack_270;
    FUN_107565afc(puVar1,auStack_b8);
    puStack_1e8 = (undefined8 *)0x0;
    func_0x000107569b34();
    *puVar1 = &PTR_SUB_1109bd9d0;
    puVar1[3] = uStack_260;
    puVar1[2] = uStack_268;
    puVar1[1] = uStack_270;
    uStack_270 = 0;
    uStack_268 = 0;
    puVar1[5] = uStack_250;
    puVar1[4] = uStack_258;
    puVar1[7] = uStack_240;
    puVar1[6] = uStack_248;
    puVar1[9] = uStack_230;
    puVar1[8] = uStack_238;
    puVar1[10] = lStack_228;
    if (lStack_228 != 0) {
      do {
        func_0x000107569720();
      } while (extraout_w10_00 != 0);
    }
    FUN_107568c00(puVar1 + 0xb,auStack_220);
    puStack_1e8 = puVar1;
    FUN_107565b28(auStack_318,unaff_x20 + 3,unaff_x19 + 4);
    func_0x000107273dcc(auStack_1e0,auStack_200,auStack_318);
    func_0x000107569aa4();
    func_0x00010756997c();
    func_0x000107273efc(auStack_1e0);
    func_0x000107569a28();
    func_0x0001006393ec(auStack_200);
    FUN_107565c50(&uStack_270);
  }
  puVar2 = auStack_b8;
  FUN_107565c50();
  func_0x000107569680(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_1e0);
    func_0x000107569a28();
    func_0x0001006393ec(auStack_200);
    FUN_107565c50(&uStack_270);
    puVar2 = auStack_b8;
    FUN_107565c50(puVar2);
    func_0x000107569710();
    FUN_107567218(puVar2 + 0x38);
    func_0x00010724ae28(puVar2 + 0x28);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 107565530; end: 10756555b;  */

long FUN_107565530(long param_1)

{
  FUN_107567218(param_1 + 0x38);
  func_0x00010724ae28(param_1 + 0x28);
  return param_1;
}



/* Entry: 10756555c; end: 107565afb;  */

undefined1 * FUN_10756555c(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  int extraout_w8;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  int extraout_w9;
  ulong extraout_x9;
  long lVar14;
  int extraout_w10;
  int extraout_w10_00;
  ulong *puVar15;
  ulong *unaff_x20;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 auStack_1c0 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [40];
  ulong uStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined8 uStack_130;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_b8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar20 = param_1;
  func_0x0001075696cc();
  iVar6 = (int)lVar20;
  uStack_78 = extraout_x8;
  func_0x00010756725c(auStack_1c0);
  func_0x00010756998c();
  if (iVar6 != 0) {
    lVar20 = *(long *)(param_1 + 0x18);
    func_0x0001072ab574(lVar20 + 0x100);
    uVar7 = lVar20 + 0xe8;
    FUN_107567434(uVar7,param_1 + 0x24);
    uVar1 = lVar20 + 0xf0;
    if (uVar1 != uVar7) {
      if (*(int *)(uVar7 + 0x38) == 0) {
        uVar18 = *(undefined8 *)(uVar7 + 0x30);
        func_0x000107569bb8();
        if (puStack_140 != (ulong *)0x0) {
          uVar17 = *(undefined8 *)(param_1 + 0x38);
          FUN_107325f14(&uStack_f8,uVar18);
          uStack_80 = *(undefined8 *)(uVar7 + 0x40);
          FUN_1075674d4(&uStack_180,uVar17,&UNK_1078290a8,0,&uStack_f8);
          uStack_1b0 = uStack_180;
          puVar15 = &uStack_f8;
          FUN_107327aec();
          func_0x000107569a50();
          func_0x000107569c44();
          if (puVar15 != (ulong *)0x0) {
            func_0x0001075696b4();
          }
        }
        func_0x000107569a60();
      }
      else {
        (**(code **)(**(long **)(uVar7 + 0x30) + 0x10))(&uStack_148);
        func_0x000107569bb8();
        uVar23 = uStack_148;
        if (puStack_140 != (ulong *)0x0) {
          uStack_f0 = *(ulong *)(uVar7 + 0x40);
          uStack_148 = 0;
          uStack_f8 = uVar23;
          FUN_1075675f4(&uStack_180,*(undefined8 *)(param_1 + 0x38),&UNK_10782d44c,0,&uStack_f8);
          uStack_1b0 = uStack_180;
          uVar23 = uStack_f8;
          if (uStack_f8 != 0) {
            func_0x0001075696b4();
          }
          func_0x000107569a50();
          func_0x000107569c44();
          if (uVar23 != 0) {
            func_0x0001075696b4();
          }
        }
        func_0x000107569a60();
        uVar23 = uStack_148;
        uStack_148 = 0;
        if (uVar23 != 0) {
          func_0x0001075696b4();
        }
      }
    }
    lVar8 = lVar20 + 0x90;
    FUN_107568b38(lVar8,param_1 + 0x24);
    if (lVar8 == 0) {
      func_0x0001075697f4();
      if (extraout_x8_02 != 0) {
        do {
          func_0x000107569720();
        } while (extraout_w10_00 != 0);
      }
      FUN_107568c00(unaff_x20 + 5,param_1 + 0x50);
      FUN_107567ba0(&puStack_140,&uStack_f8);
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_190 = 0x3f800000;
      FUN_107567c10(&uStack_1b0,&puStack_140);
      uStack_180 = *(undefined8 *)(param_1 + 0x24);
      uStack_178 = *(undefined4 *)(param_1 + 0x2c);
      FUN_107567aa0(auStack_170,&uStack_1b0);
      param_2 = (int)&uStack_180;
      FUN_10756734c(lVar20 + 0x90);
      func_0x00010756807c(auStack_170);
      func_0x00010756807c(&uStack_1b0);
      FUN_107567be4(&puStack_140);
      func_0x000107569ba4();
    }
    else {
      FUN_107567364(param_1 + 0x20,lVar8 + 0x20,lVar20 + 0xb8);
      func_0x0001075697f4();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000107569720();
        } while (extraout_w10 != 0);
      }
      puVar15 = unaff_x20 + 5;
      puVar12 = (ulong *)(param_1 + 0x50);
      puVar9 = puVar15;
      FUN_107568c00();
      func_0x000107569908(uStack_f8 & 0xff);
      param_2 = (int)puVar12;
      uVar22 = extraout_x9 ^ extraout_x8_01;
      uVar19 = *(ulong *)(lVar8 + 0x28);
      uVar23 = uVar1;
      if (uVar19 != 0) {
        uVar21 = uVar19 - 1;
        if ((uVar19 & uVar21) == 0) {
          uVar23 = uVar22 & uVar21;
        }
        else {
          uVar23 = uVar22;
          if (uVar19 <= uVar22) {
            uVar23 = 0;
            if (uVar19 != 0) {
              uVar23 = uVar22 / uVar19;
            }
            uVar23 = uVar22 - uVar23 * uVar19;
          }
        }
        plVar16 = *(long **)(*(long *)(lVar8 + 0x20) + uVar23 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              param_2 = (int)puVar12;
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_107565844;
              uVar13 = plVar16[1];
              if (uVar13 != uVar22) break;
              puVar9 = (ulong *)(plVar16 + 2);
              puVar12 = &uStack_f8;
              FUN_107567e34();
              param_2 = (int)puVar12;
              if (((ulong)puVar9 & 1) != 0) goto LAB_10756599c;
            }
            if ((uVar19 & uVar21) == 0) {
              uVar13 = uVar13 & uVar21;
            }
            else if (uVar19 <= uVar13) {
              uVar2 = 0;
              if (uVar19 != 0) {
                uVar2 = uVar13 / uVar19;
              }
              uVar13 = uVar13 - uVar2 * uVar19;
            }
          } while (uVar13 == uVar23);
        }
LAB_107565844:
        unaff_x20 = &uStack_f8;
      }
      func_0x000107569a40();
      puVar3 = puStack_b8;
      puVar12 = (ulong *)(lVar8 + 0x30);
      uStack_130 = 1;
      *puVar9 = 0;
      puVar9[1] = uVar22;
      puVar9[3] = uStack_f0;
      puVar9[2] = uStack_f8;
      puVar9[5] = uStack_e0;
      puVar9[4] = uStack_e8;
      puVar9[6] = uStack_d8;
      unaff_x20[3] = 0;
      unaff_x20[4] = 0;
      puStack_140 = puVar9;
      puStack_138 = puVar12;
      if (puVar3 == (ulong *)0x0) {
        puVar9[10] = 0;
      }
      else if (puVar3 == puVar15) {
        puVar15 = puVar9 + 7;
        puVar9[10] = (ulong)puVar15;
        (**(code **)(*puVar3 + 0x18))(puVar3);
        param_2 = (int)puVar15;
      }
      else {
        puVar9[10] = (ulong)puVar3;
        puStack_b8 = (ulong *)0x0;
      }
      if ((uVar19 == 0) ||
         (*(float *)(lVar8 + 0x40) * (float)uVar19 < (float)(*(long *)(lVar8 + 0x38) + 1))) {
        func_0x000107569ab0();
        bVar4 = 2 < uVar19;
        bVar5 = uVar19 == 3;
        func_0x000107569868();
        param_2 = extraout_w8;
        if (!bVar4 || bVar5) {
          param_2 = extraout_w9;
        }
        FUN_107567e74(lVar8 + 0x20);
        uVar19 = *(ulong *)(lVar8 + 0x28);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar23 = uVar19 - 1 & uVar22;
        }
        else {
          uVar23 = uVar22;
          if (uVar19 <= uVar22) {
            uVar23 = 0;
            if (uVar19 != 0) {
              uVar23 = uVar22 / uVar19;
            }
            uVar23 = uVar22 - uVar23 * uVar19;
          }
        }
      }
      lVar14 = *(long *)(lVar8 + 0x20);
      puVar15 = *(ulong **)(lVar14 + uVar23 * 8);
      if (puVar15 == (ulong *)0x0) {
        *puStack_140 = *puVar12;
        *puVar12 = (ulong)puStack_140;
        *(ulong **)(lVar14 + uVar23 * 8) = puVar12;
        if (*puStack_140 != 0) {
          uVar23 = *(ulong *)(*puStack_140 + 8);
          if ((uVar19 & uVar19 - 1) == 0) {
            uVar23 = uVar23 & uVar19 - 1;
          }
          else if (uVar19 <= uVar23) {
            uVar22 = 0;
            if (uVar19 != 0) {
              uVar22 = uVar23 / uVar19;
            }
            uVar23 = uVar23 - uVar22 * uVar19;
          }
          *(ulong **)(lVar14 + uVar23 * 8) = puStack_140;
        }
      }
      else {
        *puStack_140 = *puVar15;
        *puVar15 = (ulong)puStack_140;
      }
      puStack_140 = (ulong *)0x0;
      *(long *)(lVar8 + 0x38) = *(long *)(lVar8 + 0x38) + 1;
      FUN_107568004(&puStack_140);
LAB_10756599c:
      func_0x000107569ba4();
    }
    in_ZR = uVar1 == uVar7;
    if (((bool)in_ZR) && (*(long *)(lVar20 + 0x68) != 0)) {
      param_2 = (int)param_1 + 0x24;
      FUN_107376aac(lVar20 + 0x50);
    }
    func_0x0001075699c4();
  }
  puVar10 = auStack_1c0;
  func_0x000107270b00();
  func_0x000107569680(uStack_78);
  if ((bool)in_ZR) {
    return puVar10;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    func_0x000104bd46a0();
    puVar11 = puVar10;
    func_0x000107569c44();
    if (puVar11 != (undefined1 *)0x0) {
      func_0x0001075696b4();
    }
    func_0x000107569a60();
    func_0x0001075699c4();
    func_0x000107270b00(auStack_1c0);
  }
  func_0x000107569710();
  func_0x000107569740();
  func_0x000107569a80();
  FUN_107567170();
  return puVar10;
}



/* Entry: 107565afc; end: 107565b27;  */

void FUN_107565afc(void)

{
  func_0x000107569740();
  func_0x000107569a80();
  FUN_107567170();
  return;
}



/* Entry: 107565b28; end: 107565c4f;  */

undefined8 *
FUN_107565b28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte *param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001075696cc();
  uStack_38 = extraout_x8;
  func_0x000107569bcc();
  func_0x00010028b26c(param_1);
  uStack_64 = NEON_ucvtf((uint)*param_5);
  func_0x0001072f8f08(&uStack_60,&uStack_64,1);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[6] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  func_0x00010786ea9c(auStack_a8,param_5);
  func_0x00010739d7bc(auStack_a8);
  uStack_40 = param_3;
  FUN_10740eff4(&uStack_80,auStack_48,1);
  param_1[9] = uStack_78;
  param_1[8] = uStack_80;
  param_1[10] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  func_0x00010729807c(param_1 + 0xc,param_4);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  func_0x00010725aef4(&uStack_80);
  puVar1 = &uStack_60;
  func_0x0001056d1ce4();
  func_0x000107569680(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x0001001148fc();
  func_0x000107569718();
  FUN_107565530(puVar1 + 3);
  func_0x00010725c0a0();
  if (puVar1 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 107565c50; end: 107565c73;  */

undefined8 FUN_107565c50(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_107565530(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107565c74; end: 107565d9b;  */

void FUN_107565c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_240 [40];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [24];
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [168];
  undefined1 auStack_128 [24];
  undefined1 *puStack_110;
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  puVar2 = auStack_240;
  puVar4 = param_2;
  func_0x0001075696cc();
  uStack_208 = puVar4[1];
  uStack_210 = *puVar4;
  uStack_38 = extraout_x8;
  func_0x000107569994(auStack_200);
  uStack_1d8 = uStack_208;
  uStack_1e0 = uStack_210;
  plVar5 = (long *)*param_1;
  puStack_1e8 = param_1;
  if (plVar5 == (long *)0x0) {
    FUN_107565d9c(auStack_200);
  }
  else {
    uVar7 = uStack_210;
    uVar8 = uStack_208;
    FUN_107565e1c(auStack_240,auStack_200);
    puStack_110 = (undefined1 *)0x0;
    func_0x000107569b9c();
    func_0x000107569694(&PTR_FUN_1109bda50);
    *(undefined8 *)(puVar2 + 0x28) = uVar8;
    *(undefined8 *)(puVar2 + 0x20) = uVar7;
    *(undefined8 *)(puVar2 + 0x30) = uStack_218;
    puStack_110 = puVar2;
    func_0x000107569b48(auStack_1d0);
    func_0x000107273dcc(auStack_108,auStack_128,auStack_1d0);
    func_0x0001075698e8(*(undefined8 *)(*plVar5 + 0x18));
    func_0x0001075697ec();
    func_0x000107273f24(auStack_1d0);
    func_0x0001006393ec(auStack_128);
    func_0x000107569730();
  }
  func_0x00010725b1d4();
  func_0x000107569680(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  iVar1 = (int)auStack_200;
  func_0x00010725b1d4();
  func_0x000107569710();
  func_0x000107569894();
  func_0x000107569974();
  if (iVar1 != 0) {
    lVar6 = param_2[3];
    func_0x0001075698d8();
    lVar3 = lVar6 + 0x90;
    func_0x000107569b74();
    if (lVar3 != 0) {
      FUN_107567364(param_2 + 4,lVar3 + 0x20,lVar6 + 0xb8);
      if (*(long *)(lVar3 + 0x38) == 0) {
        func_0x000107569b7c();
        func_0x0001075698cc();
      }
    }
    func_0x000107569794();
  }
  func_0x00010756978c();
  return;
}



/* Entry: 107565d9c; end: 107565e1b;  */

void FUN_107565d9c(int param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107569894();
  func_0x000107569974();
  if (param_1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x0001075698d8();
    lVar1 = lVar2 + 0x90;
    func_0x000107569b74();
    if (lVar1 != 0) {
      FUN_107567364(unaff_x20 + 0x20,lVar1 + 0x20,lVar2 + 0xb8);
      if (*(long *)(lVar1 + 0x38) == 0) {
        func_0x000107569b7c();
        func_0x0001075698cc();
      }
    }
    func_0x000107569794();
  }
  func_0x00010756978c();
  return;
}



/* Entry: 107565e1c; end: 107565e43;  */

void FUN_107565e1c(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001075698a0();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 107565e44; end: 107565f57;  */

void FUN_107565e44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  undefined1 auStack_260 [64];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [24];
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [192];
  undefined8 uStack_110;
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  puVar4 = param_2;
  func_0x0001075696cc();
  uStack_218 = puVar4[1];
  uStack_220 = *puVar4;
  uStack_38 = extraout_x8;
  func_0x000107569994(auStack_208);
  uStack_1e0 = uStack_218;
  uStack_1e8 = uStack_220;
  plVar5 = (long *)*param_1;
  puStack_1f0 = param_1;
  uStack_1d8 = param_3;
  if (plVar5 == (long *)0x0) {
    FUN_107565f58(auStack_208);
  }
  else {
    FUN_10756601c(auStack_260,auStack_208);
    uStack_110 = 0;
    uVar2 = 0x40;
    __Znwm();
    func_0x000107569694(&PTR_FUN_1109bdad0);
    func_0x000107569be4();
    uStack_110 = uVar2;
    func_0x000107569b48(auStack_1d0);
    func_0x000107569b60(auStack_108);
    func_0x0001075698e8(*(undefined8 *)(*plVar5 + 0x18));
    func_0x0001075697ec();
    func_0x000107569a58();
    func_0x000107569a48();
    func_0x000107569730();
  }
  func_0x00010725b1d4();
  func_0x000107569680(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  iVar1 = (int)auStack_208;
  func_0x00010725b1d4();
  func_0x000107569710();
  func_0x000107569894();
  func_0x000107569974();
  if (iVar1 != 0) {
    lVar6 = param_2[3];
    func_0x0001075698d8();
    lVar3 = lVar6 + 0xb8;
    func_0x000107569b74();
    if (lVar3 != 0) {
      plVar5 = *(long **)(lVar3 + 0x30);
      while (plVar5 != (long *)0x0) {
        if (plVar5[3] == param_2[6]) {
          plVar5 = (long *)(lVar3 + 0x20);
          FUN_107568128();
        }
        else {
          plVar5 = (long *)*plVar5;
        }
      }
    }
    lVar3 = lVar6 + 0x90;
    func_0x000107569b74();
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x38) == 0)) {
      func_0x000107569b7c();
      func_0x0001075698cc();
      func_0x000107568f50(lVar6 + 0xe8,(long)param_2 + 0x24);
    }
    func_0x000107569794();
  }
  func_0x00010756978c();
  return;
}



/* Entry: 107565f58; end: 10756601b;  */

void FUN_107565f58(int param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107569894();
  func_0x000107569974();
  if (param_1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x0001075698d8();
    lVar1 = lVar3 + 0xb8;
    func_0x000107569b74();
    if (lVar1 != 0) {
      plVar2 = *(long **)(lVar1 + 0x30);
      while (plVar2 != (long *)0x0) {
        if (plVar2[3] == *(long *)(unaff_x20 + 0x30)) {
          plVar2 = (long *)(lVar1 + 0x20);
          FUN_107568128();
        }
        else {
          plVar2 = (long *)*plVar2;
        }
      }
    }
    lVar1 = lVar3 + 0x90;
    func_0x000107569b74();
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x38) == 0)) {
      func_0x000107569b7c();
      func_0x0001075698cc();
      func_0x000107568f50(lVar3 + 0xe8,unaff_x20 + 0x24);
    }
    func_0x000107569794();
  }
  func_0x00010756978c();
  return;
}



/* Entry: 10756601c; end: 10756603b;  */

void FUN_10756601c(void)

{
  func_0x0001075698a0();
  func_0x000107569c04();
  func_0x000107569bd8();
  return;
}



/* Entry: 10756603c; end: 10756623f;  */

void FUN_10756603c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 uVar6;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long alStack_318 [2];
  long lStack_308;
  long lStack_300;
  long *plStack_2f8;
  undefined1 *puStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2c0 [56];
  undefined8 uStack_288;
  long lStack_280;
  undefined4 uStack_264;
  long lStack_258;
  undefined8 *puStack_250;
  undefined1 auStack_248 [32];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [168];
  undefined1 auStack_148 [24];
  undefined1 *puStack_130;
  undefined1 auStack_128 [208];
  undefined8 uStack_58;
  
  puVar4 = auStack_2c0;
  plVar5 = param_3;
  func_0x0001075698a8();
  func_0x0001075696cc();
  lVar9 = *plVar5;
  lStack_200 = lVar9;
  uStack_58 = extraout_x8;
  if (lVar9 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)0x20;
    __Znwm();
    *puVar3 = &PTR_FUN_1109bdb50;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = lVar9;
  }
  *param_3 = 0;
  uVar6 = *unaff_x19;
  uVar1 = *(undefined4 *)(unaff_x19 + 1);
  lStack_258 = lVar9;
  puStack_250 = puVar3;
  puStack_1f8 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      func_0x000107569720();
    } while (extraout_w10 != 0);
  }
  func_0x000107569a38(auStack_248);
  uStack_220 = CONCAT44(uStack_264,uVar1);
  uStack_228 = uVar6;
  uStack_218 = param_4;
  lStack_210 = lVar9;
  puStack_208 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    do {
      func_0x000107569720();
    } while (extraout_w10_00 != 0);
  }
  FUN_10756915c(&lStack_258);
  lVar7 = *unaff_x20;
  if (lVar7 == 0) {
    FUN_107566240(auStack_248);
  }
  else {
    FUN_10756642c(auStack_2c0,auStack_248);
    puStack_130 = (undefined1 *)0x0;
    func_0x000107569a30();
    func_0x000107569694(&PTR_SUB_1109bdbb0);
    func_0x000107569be4();
    *(long *)(puVar4 + 0x48) = lStack_280;
    *(undefined8 *)(puVar4 + 0x40) = uStack_288;
    if (lStack_280 != 0) {
      do {
        func_0x000107569720();
      } while (extraout_w10_01 != 0);
    }
    puStack_130 = puVar4;
    func_0x00010756975c(auStack_1f0);
    func_0x000107273dcc(auStack_128,auStack_148,auStack_1f0);
    func_0x000107569aa4();
    func_0x00010756997c();
    func_0x000107273efc(auStack_128);
    func_0x000107273f24(auStack_1f0);
    func_0x0001006393ec(auStack_148);
    func_0x000107566468(auStack_2c0);
  }
  func_0x000107566468(auStack_248);
  FUN_10756915c();
  func_0x000107569680(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107566468(auStack_248);
    plVar5 = &lStack_200;
    FUN_10756915c();
    func_0x000107569710();
    plVar8 = plVar5;
    lStack_300 = lVar9;
    plStack_2f8 = param_3;
    puStack_2f0 = &stack0xfffffffffffffd88;
    lStack_2e8 = lVar7;
    func_0x0001075698e0();
    iVar2 = (int)plVar8;
    func_0x00010756998c();
    if (iVar2 != 0) {
      lVar7 = plVar5[3];
      func_0x0001072ab574(lVar7 + 0x100);
      lVar9 = lVar7 + 0x90;
      func_0x000107569b04();
      if (lVar9 != 0) {
        plVar8 = (long *)(lVar9 + 0x30);
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          (**(code **)(*(long *)plVar5[7] + 0x10))(&lStack_328);
          func_0x00010724bb70(alStack_318,plVar8 + 5);
          lVar9 = lStack_328;
          if (alStack_318[0] != 0) {
            lStack_338 = plVar5[6];
            lStack_328 = 0;
            lStack_340 = lVar9;
            FUN_1075675f4(&lStack_308,plVar8[4],&UNK_10782d44c,0,&lStack_340);
            lStack_320 = lStack_308;
            if (lStack_340 != 0) {
              func_0x0001075696b4();
            }
            func_0x000107569a50();
            lVar9 = lStack_320;
            lStack_320 = 0;
            if (lVar9 != 0) {
              func_0x0001075696b4();
            }
          }
          func_0x00010724bcd8(alStack_318);
          lVar9 = lStack_328;
          lStack_328 = 0;
          if (lVar9 != 0) {
            func_0x0001075696b4();
          }
        }
        (**(code **)(*(long *)plVar5[7] + 0x10))(alStack_318);
        lStack_340 = alStack_318[0];
        alStack_318[0] = 0;
        lStack_338 = CONCAT44(lStack_338._4_4_,1);
        lStack_330 = plVar5[6];
        FUN_107568278(lVar7 + 0xe8,plVar5 + 4);
        FUN_107568350();
        FUN_1075683c4(&lStack_340);
        lVar9 = alStack_318[0];
        alStack_318[0] = 0;
        if (lVar9 != 0) {
          func_0x0001075696b4();
        }
      }
      __ZNSt3__15mutex6unlockEv(lVar7 + 0x100);
    }
    func_0x00010756978c();
    return;
  }
  return;
}



/* Entry: 107566240; end: 10756642b;  */

void FUN_107566240(long param_1)

{
  int iVar1;
  long lVar3;
  long *plVar4;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long alStack_58 [2];
  long lStack_48;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001075698e0();
  iVar1 = (int)lVar2;
  func_0x00010756998c();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x0001072ab574(lVar3 + 0x100);
    lVar2 = lVar3 + 0x90;
    func_0x000107569b04();
    if (lVar2 != 0) {
      plVar4 = (long *)(lVar2 + 0x30);
      while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(&lStack_68);
        func_0x00010724bb70(alStack_58,plVar4 + 5);
        lVar2 = lStack_68;
        if (alStack_58[0] != 0) {
          uStack_78 = *(undefined8 *)(param_1 + 0x30);
          lStack_68 = 0;
          lStack_80 = lVar2;
          FUN_1075675f4(&lStack_48,plVar4[4],&UNK_10782d44c,0,&lStack_80);
          lStack_60 = lStack_48;
          if (lStack_80 != 0) {
            func_0x0001075696b4();
          }
          func_0x000107569a50();
          lVar2 = lStack_60;
          lStack_60 = 0;
          if (lVar2 != 0) {
            func_0x0001075696b4();
          }
        }
        func_0x00010724bcd8(alStack_58);
        lVar2 = lStack_68;
        lStack_68 = 0;
        if (lVar2 != 0) {
          func_0x0001075696b4();
        }
      }
      (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(alStack_58);
      lStack_80 = alStack_58[0];
      alStack_58[0] = 0;
      uStack_78 = CONCAT44(uStack_78._4_4_,1);
      uStack_70 = *(undefined8 *)(param_1 + 0x30);
      FUN_107568278(lVar3 + 0xe8,param_1 + 0x20);
      FUN_107568350();
      FUN_1075683c4(&lStack_80);
      lVar2 = alStack_58[0];
      alStack_58[0] = 0;
      if (lVar2 != 0) {
        func_0x0001075696b4();
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar3 + 0x100);
  }
  func_0x00010756978c();
  return;
}



/* Entry: 10756642c; end: 10756648b;  */

void FUN_10756642c(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x0001075698a0();
  func_0x000107569c04();
  func_0x000107569bd8();
  lVar1 = *(long *)(unaff_x19 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107569720();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10756648c; end: 10756664f;  */

void FUN_10756648c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar5;
  undefined8 extraout_x8;
  long *unaff_x20;
  long lVar6;
  long *plVar7;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined1 auStack_2a0 [40];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [40];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [168];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined1 auStack_118 [208];
  undefined8 uStack_48;
  undefined1 *puVar4;
  
  func_0x0001075698a8();
  func_0x0001075696cc();
  uStack_270 = *param_2;
  uStack_268 = *(undefined4 *)(param_2 + 1);
  uStack_278 = param_1;
  uStack_48 = extraout_x8;
  FUN_10756854c(auStack_260,param_3);
  func_0x000107569a38(auStack_238);
  func_0x000107568528(auStack_220,&uStack_278);
  FUN_1073787dc(auStack_260);
  if (*unaff_x20 == 0) {
    FUN_107566650(auStack_238);
  }
  else {
    FUN_1075666ec(&uStack_2d0,auStack_238);
    puStack_120 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x60;
    __Znwm();
    *puVar2 = &PTR_SUB_1109bdc30;
    puVar2[2] = uStack_2c8;
    puVar2[1] = uStack_2d0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    puVar2[3] = uStack_2c0;
    puVar2[5] = uStack_2b0;
    puVar2[4] = uStack_2b8;
    *(undefined4 *)(puVar2 + 6) = uStack_2a8;
    FUN_10756854c(puVar2 + 7,auStack_2a0);
    puStack_120 = puVar2;
    func_0x00010756975c(auStack_1e0);
    func_0x000107273dcc(auStack_118,auStack_138,auStack_1e0);
    func_0x000107569aa4();
    func_0x00010756997c();
    func_0x000107273efc(auStack_118);
    func_0x000107273f24(auStack_1e0);
    func_0x0001006393ec(auStack_138);
    FUN_107566718(&uStack_2d0);
  }
  FUN_107566718();
  func_0x000107569680(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_118);
  func_0x000107273f24(auStack_1e0);
  func_0x0001006393ec(auStack_138);
  FUN_107566718(&uStack_2d0);
  puVar3 = auStack_238;
  FUN_107566718();
  func_0x000107569710();
  puVar4 = puVar3;
  func_0x0001075698e0();
  iVar1 = (int)puVar4;
  func_0x00010756998c();
  if (iVar1 != 0) {
    lVar6 = *(long *)(puVar3 + 0x18);
    func_0x0001072ab574(lVar6 + 0x100);
    lVar5 = lVar6 + 0x90;
    func_0x000107569b04();
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0x30);
      while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
        FUN_1075685ec(plVar7 + 4,&UNK_10782d3f0,0,puVar3 + 0x30);
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar6 + 0x100);
  }
  func_0x00010756978c();
  return;
}



/* Entry: 107566650; end: 1075666eb;  */

void FUN_107566650(long param_1)

{
  int iVar1;
  long lVar3;
  long *plVar4;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001075698e0();
  iVar1 = (int)lVar2;
  func_0x00010756998c();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x0001072ab574(lVar3 + 0x100);
    lVar2 = lVar3 + 0x90;
    func_0x000107569b04();
    if (lVar2 != 0) {
      plVar4 = (long *)(lVar2 + 0x30);
      while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
        FUN_1075685ec(plVar4 + 4,&UNK_10782d3f0,0,param_1 + 0x30);
      }
    }
    __ZNSt3__15mutex6unlockEv(lVar3 + 0x100);
  }
  func_0x00010756978c();
  return;
}



/* Entry: 1075666ec; end: 107566717;  */

void FUN_1075666ec(void)

{
  func_0x000107569740();
  func_0x000107569a80();
  func_0x000107568528();
  return;
}



/* Entry: 107566718; end: 10756673b;  */

undefined8 FUN_107566718(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1073787dc(param_1 + 0x30);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10756673c; end: 107566843;  */

void FUN_10756673c(long param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 unaff_x20;
  long *plVar5;
  long *plVar6;
  long alStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_70;
  undefined **ppuStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  func_0x0001075696cc();
  bVar2 = false;
  lVar3 = param_1;
  uStack_70 = param_2;
  uStack_48 = extraout_x8;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    plVar5 = (long *)(param_1 + 0xa0);
    while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 6;
      while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
        lStack_60 = (long)(plVar6 + 2);
        ppuStack_68 = &PTR_FUN_1109bdcb0;
        puStack_58 = (undefined1 *)&uStack_70;
        pppuStack_50 = &ppuStack_68;
        func_0x000107569b54();
        func_0x000107569b14();
      }
    }
    plVar5 = (long *)(param_1 + 200);
    while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 6;
      while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
        lStack_60 = (long)(plVar6 + 2);
        ppuStack_68 = &PTR_FUN_1109bdd30;
        puStack_58 = (undefined1 *)&uStack_70;
        pppuStack_50 = &ppuStack_68;
        func_0x000107569b54();
        func_0x000107569b14();
      }
    }
    lVar3 = *(long *)(param_1 + 0xe8);
    while (bVar2 = lVar3 == param_1 + 0xf0, unaff_x20 = 0, !bVar2) {
      uVar1 = *(ulong *)(lVar3 + 0x40);
      if (*(ulong *)(lVar3 + 0x40) <= uStack_70) {
        uVar1 = uStack_70;
      }
      *(ulong *)(lVar3 + 0x40) = uVar1;
      func_0x00010002c7d4();
    }
  }
  func_0x000107569680(uStack_48);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = lVar3;
  func_0x000107569b14();
  func_0x000107569710();
  pcStack_78 = FUN_107566844;
  uStack_90 = unaff_x20;
  lStack_88 = lVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010724bb70(alStack_a0,lVar4 + 8);
  if (alStack_a0[0] != 0) {
    FUN_1073ae2bc(alStack_a0[0],param_2);
  }
  func_0x00010724bcd8(alStack_a0);
  return;
}



/* Entry: 107566844; end: 107566893;  */

void FUN_107566844(long param_1,undefined8 param_2)

{
  long alStack_30 [2];
  
  func_0x00010724bb70(alStack_30,param_1 + 8);
  if (alStack_30[0] != 0) {
    FUN_1073ae2bc(alStack_30[0],param_2);
  }
  func_0x00010724bcd8(alStack_30);
  return;
}



/* Entry: 107566894; end: 107566b8b;  */

void FUN_107566894(long *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulong uVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 extraout_x8;
  long *unaff_x19;
  long lVar8;
  long *unaff_x20;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_378;
  byte *pbStack_370;
  undefined1 auStack_368 [24];
  undefined8 uStack_350;
  undefined1 *puStack_348;
  long *plStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [32];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [32];
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [56];
  long *plStack_218;
  byte *pbStack_210;
  long *plStack_208;
  byte *pbStack_200;
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [24];
  undefined1 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 uStack_188;
  undefined1 auStack_180 [64];
  undefined1 uStack_140;
  undefined1 uStack_13c;
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  byte abStack_118 [208];
  undefined8 uStack_48;
  
  puVar4 = &uStack_320;
  func_0x0001075697d4();
  func_0x0001075696cc();
  uStack_2a0 = param_3;
  uStack_48 = extraout_x8;
  FUN_10731e330(auStack_298);
  puVar9 = auStack_268;
  uStack_278 = param_5;
  uStack_270 = param_6;
  FUN_107567110(auStack_268,unaff_x19 + 0x28);
  pbVar7 = (byte *)&uStack_2a0;
  func_0x000107568878(auStack_250);
  func_0x00010731e248(auStack_298);
  if (*unaff_x19 == 0) {
    FUN_107566b8c(auStack_268);
  }
  else {
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    plVar3 = unaff_x20;
    FUN_10731e678();
    plStack_208 = plVar3;
    pbStack_200 = pbVar7;
    while (plStack_208 != (long *)0x0) {
      uVar10 = NEON_ucvtf((uint)*pbStack_200);
      param_1 = (long *)(ulong)uVar10;
      uVar1 = (ulong)uStack_2d0 >> 0x20;
      uStack_2d0 = CONCAT44((int)uVar1,uVar10);
      pbVar7 = (byte *)&uStack_2d0;
      FUN_1074c4f8c(&uStack_2b8);
      FUN_10731e6dc(&plStack_208);
    }
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    FUN_10731e678();
    plStack_218 = unaff_x20;
    pbStack_210 = pbVar7;
    while (plStack_218 != (long *)0x0) {
      func_0x00010786ea9c(&plStack_208,pbStack_210);
      func_0x00010739d7bc(&plStack_208);
      plStack_208 = param_1;
      pbStack_200 = param_2;
      func_0x00010725ade4(&uStack_2d0,&plStack_208);
      FUN_10731e6dc(&plStack_218);
    }
    unaff_x20 = (long *)*unaff_x19;
    FUN_107566c8c(&uStack_320,auStack_268);
    puStack_120 = (undefined8 *)0x0;
    func_0x000107569a40();
    *puVar4 = &PTR_FUN_1109bddb0;
    puVar4[2] = uStack_318;
    puVar4[1] = uStack_320;
    uStack_320 = 0;
    uStack_318 = 0;
    puVar4[4] = uStack_308;
    puVar4[3] = uStack_310;
    FUN_10731e330(puVar4 + 5,auStack_300);
    puVar4[10] = uStack_2d8;
    puVar4[9] = uStack_2e0;
    puStack_120 = puVar4;
    func_0x000107569bcc();
    puVar9 = auStack_1e0;
    func_0x00010028b26c(auStack_1e0);
    FUN_1073ae3fc(auStack_1c0,&uStack_2b8);
    param_5 = 1;
    uStack_1a8 = 1;
    FUN_1073658bc(auStack_1a0,&uStack_2d0);
    uStack_188 = 1;
    func_0x00010729d1b0(auStack_180,unaff_x19 + 3);
    uStack_140 = 0;
    uStack_13c = 0;
    func_0x000107273dcc(abStack_118,auStack_138,auStack_1e0);
    pbVar7 = abStack_118;
    (**(code **)(*unaff_x20 + 0x18))(unaff_x20);
    func_0x000107273efc(abStack_118);
    func_0x000107273f24(auStack_1e0);
    func_0x0001006393ec(auStack_138);
    FUN_107566cb8(&uStack_320);
    func_0x00010725aef4(&uStack_2d0);
    func_0x0001056d1ce4(&uStack_2b8);
  }
  puVar5 = auStack_268;
  FUN_107566cb8();
  func_0x000107569680(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    iVar2 = (int)auStack_268;
    FUN_107566cb8();
    func_0x000107569710();
    pcStack_328 = FUN_107566b8c;
    uStack_350 = param_5;
    puStack_348 = puVar9;
    plStack_340 = unaff_x20;
    puStack_338 = puVar5;
    puStack_330 = &stack0xfffffffffffffff0;
    func_0x000107569894();
    func_0x000107569974();
    if (iVar2 != 0) {
      lVar8 = unaff_x20[3];
      func_0x0001075698d8();
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      plVar3 = unaff_x20 + 4;
      FUN_10731e678();
      plStack_378 = plVar3;
      while (pbStack_370 = pbVar7, plStack_378 != (long *)0x0) {
        lVar6 = lVar8;
        FUN_107566fa0(lVar8,pbVar7);
        if ((int)lVar6 != 0) {
          func_0x00010784b344(auStack_368,pbVar7);
          func_0x0001000fecf4(&uStack_390,auStack_368);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_368);
        }
        FUN_10731e6dc(&plStack_378);
        pbVar7 = pbStack_370;
      }
      if ((char)unaff_x20[9] == '\x01') {
        plVar3 = unaff_x20 + 8;
        func_0x000107267f8c();
        FUN_10756673c(lVar8,*plVar3);
      }
      FUN_1075688a8(*(undefined8 *)(lVar8 + 0x10),lVar8 + 0x18,&uStack_390);
      func_0x0001000e30f4(&uStack_390);
      func_0x000107569794();
    }
    func_0x00010756978c();
    return;
  }
  return;
}



/* Entry: 107566b8c; end: 107566c8b;  */

void FUN_107566b8c(int param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107569894();
  func_0x000107569974();
  if (param_1 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x0001075698d8();
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    lVar1 = unaff_x20 + 0x20;
    FUN_10731e678();
    lStack_58 = lVar1;
    while (uStack_50 = param_2, lStack_58 != 0) {
      lVar1 = lVar3;
      FUN_107566fa0(lVar3,param_2);
      if ((int)lVar1 != 0) {
        func_0x00010784b344(auStack_48,param_2);
        func_0x0001000fecf4(&uStack_70,auStack_48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      }
      FUN_10731e6dc(&lStack_58);
      param_2 = uStack_50;
    }
    if (*(char *)(unaff_x20 + 0x48) == '\x01') {
      puVar2 = (undefined8 *)(unaff_x20 + 0x40);
      func_0x000107267f8c();
      FUN_10756673c(lVar3,*puVar2);
    }
    FUN_1075688a8(*(undefined8 *)(lVar3 + 0x10),lVar3 + 0x18,&uStack_70);
    func_0x0001000e30f4(&uStack_70);
    func_0x000107569794();
  }
  func_0x00010756978c();
  return;
}



/* Entry: 107566c8c; end: 107566cb7;  */

void FUN_107566c8c(void)

{
  func_0x000107569740();
  func_0x000107569a80();
  func_0x000107568878();
  return;
}



/* Entry: 107566cb8; end: 107566cdb;  */

undefined8 FUN_107566cb8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010731e248(param_1 + 0x20);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107566cdc; end: 107566e23;  */

void FUN_107566cdc(undefined8 *param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [24];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined8 *puStack_1d8;
  undefined1 auStack_1d0 [32];
  undefined1 uStack_1b0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_178;
  undefined1 auStack_170 [64];
  undefined1 uStack_130;
  undefined1 uStack_12c;
  undefined1 auStack_128 [24];
  undefined8 *puStack_110;
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  undefined1 *puVar4;
  
  puVar2 = &uStack_210;
  func_0x0001075696cc();
  uStack_38 = extraout_x8;
  func_0x000107569994(auStack_1f0);
  plVar5 = (long *)*param_1;
  puStack_1d8 = param_1;
  if (plVar5 == (long *)0x0) {
    FUN_107566e24(auStack_1f0);
  }
  else {
    FUN_107566f80(&uStack_210,auStack_1f0);
    puStack_110 = (undefined8 *)0x0;
    func_0x000107569a68();
    *puVar2 = &PTR_SUB_1109bde30;
    puVar2[2] = uStack_208;
    puVar2[1] = uStack_210;
    uStack_210 = 0;
    uStack_208 = 0;
    puVar2[3] = uStack_200;
    puVar2[4] = uStack_1f8;
    puStack_110 = puVar2;
    func_0x000107569bcc();
    func_0x00010028b26c(auStack_1d0);
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    func_0x00010729d1b0(auStack_170,param_1 + 3);
    uStack_130 = 0;
    uStack_12c = 0;
    func_0x000107273dcc(auStack_108,auStack_128,auStack_1d0);
    func_0x0001075698e8(*(undefined8 *)(*plVar5 + 0x18));
    func_0x0001075697ec();
    func_0x000107273f24(auStack_1d0);
    func_0x0001006393ec(auStack_128);
    func_0x000107569730();
  }
  func_0x00010725b1d4();
  func_0x000107569680(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar3 = auStack_1f0;
    func_0x00010725b1d4();
    func_0x000107569710();
    puVar4 = puVar3;
    func_0x000107569b2c();
    iVar1 = (int)puVar4;
    func_0x00010756998c();
    if (iVar1 != 0) {
      lVar6 = *(long *)(puVar3 + 0x18);
      func_0x0001075698d8();
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      plVar5 = (long *)(lVar6 + 0xa0);
      puStack_288 = &uStack_280;
      while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
        func_0x000107569b88();
      }
      plVar5 = (long *)(lVar6 + 200);
      while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
        func_0x000107569b88();
      }
      lVar7 = *(long *)(lVar6 + 0xe8);
      while (puVar2 = puStack_288, lVar7 != lVar6 + 0xf0) {
        FUN_1075689bc(&puStack_288,lVar7 + 0x20);
        func_0x00010002c7d4();
      }
      while (puVar2 != &uStack_280) {
        lVar7 = lVar6;
        FUN_107566fa0(lVar6,(long)puVar2 + 0x1c);
        if ((int)lVar7 != 0) {
          func_0x00010784b344(auStack_258,(long)puVar2 + 0x1c);
          func_0x0001000fecf4(&uStack_270,auStack_258);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
        }
        func_0x00010002c7d4();
      }
      FUN_1075688a8(*(undefined8 *)(lVar6 + 0x10),lVar6 + 0x18,&uStack_270);
      FUN_1074571e4(&puStack_288);
      func_0x0001000e30f4(&uStack_270);
      func_0x000107569794();
    }
    func_0x000107569860();
    return;
  }
  return;
}



/* Entry: 107566e24; end: 107566f7f;  */

void FUN_107566e24(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = param_1;
  func_0x000107569b2c();
  iVar1 = (int)lVar3;
  func_0x00010756998c();
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x0001075698d8();
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    plVar4 = (long *)(lVar3 + 0xa0);
    puStack_78 = &uStack_70;
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      func_0x000107569b88();
    }
    plVar4 = (long *)(lVar3 + 200);
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      func_0x000107569b88();
    }
    lVar5 = *(long *)(lVar3 + 0xe8);
    while (puVar2 = puStack_78, lVar5 != lVar3 + 0xf0) {
      FUN_1075689bc(&puStack_78,lVar5 + 0x20);
      func_0x00010002c7d4();
    }
    while (puVar2 != &uStack_70) {
      lVar5 = lVar3;
      FUN_107566fa0(lVar3,(long)puVar2 + 0x1c);
      if ((int)lVar5 != 0) {
        func_0x00010784b344(auStack_48,(long)puVar2 + 0x1c);
        func_0x0001000fecf4(&uStack_60,auStack_48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
      }
      func_0x00010002c7d4();
    }
    FUN_1075688a8(*(undefined8 *)(lVar3 + 0x10),lVar3 + 0x18,&uStack_60);
    FUN_1074571e4(&puStack_78);
    func_0x0001000e30f4(&uStack_60);
    func_0x000107569794();
  }
  func_0x000107569860();
  return;
}



/* Entry: 107566f80; end: 107566f9f;  */

void FUN_107566f80(long param_1)

{
  long unaff_x19;
  
  func_0x0001075698a0();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107566fa0; end: 107567047;  */

bool FUN_107566fa0(long param_1)

{
  bool bVar1;
  long unaff_x19;
  long lVar2;
  long *plVar3;
  
  func_0x0001075697d4();
  param_1 = param_1 + 0xb8;
  FUN_107568b38();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x38);
    plVar3 = (long *)(param_1 + 0x30);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      FUN_107567048(plVar3 + 4);
    }
    bVar1 = lVar2 != 0;
  }
  func_0x000107568f50(unaff_x19 + 0xe8);
  lVar2 = unaff_x19 + 0x90;
  FUN_107568b38();
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x30);
    while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
      FUN_1075670d0();
    }
    func_0x0001075698cc();
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107567048; end: 1075670cf;  */

void FUN_107567048(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_30;
  
  puVar1 = param_1;
  func_0x000107569aec();
  if (lStack_30 != 0) {
    uVar2 = *param_1;
    func_0x000107569a68();
    *puVar1 = &PTR_FUN_1109bdeb0;
    puVar1[1] = uVar2;
    puVar1[2] = &UNK_107829290;
    puVar1[3] = 0;
    func_0x000107569b3c();
    func_0x0001075699e4();
    if (puVar1 != (undefined8 *)0x0) {
      func_0x0001075696b4();
    }
  }
  func_0x000107569a10();
  return;
}



/* Entry: 1075670d0; end: 1075670fb;  */

long * FUN_1075670d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *unaff_x20;
  
  func_0x0001075698a8();
  FUN_107567048(param_3);
  if (unaff_x20[0x11] == 0) {
    return unaff_x20;
  }
  plVar1 = (long *)unaff_x20[0x11];
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107376abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x000107379398(&PTR_FUN_1109a69c0);
  return plVar1;
}



/* Entry: 1075670fc; end: 10756710f;  */

long * FUN_1075670fc(long *param_1)

{
  long *plVar1;
  
  if (param_1[0x11] == 0) {
    return param_1;
  }
  plVar1 = (long *)param_1[0x11];
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107376abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  func_0x000107379398(&PTR_FUN_1109a69c0);
  return plVar1;
}



/* Entry: 107567110; end: 10756716f;  */

void FUN_107567110(undefined8 param_1,undefined8 *param_2)

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
  FUN_1075671b4(param_1,&uStack_30,param_2[2]);
  func_0x000107569730();
  return;
}



/* Entry: 107567170; end: 1075671b3;  */

void FUN_107567170(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001075697d4();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  FUN_1075671ec(param_1 + 4,param_2 + 4);
  FUN_107568c00(unaff_x19 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 1075671b4; end: 1075671eb;  */

undefined8 * FUN_1075671b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = param_3;
  func_0x000107569730();
  return param_1;
}



/* Entry: 1075671ec; end: 107567217;  */

void FUN_1075671ec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107569720();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107567218; end: 1075672e3;  */

long * FUN_107567218(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1075672e4; end: 1075672fb;  */

uint FUN_1075672e4(uint param_1)

{
  FUN_1075672fc();
  return param_1 ^ 1;
}



/* Entry: 1075672fc; end: 10756734b;  */

bool FUN_1075672fc(void)

{
  bool bVar1;
  long *aplStack_30 [2];
  
  func_0x00010726fc00(aplStack_30);
  if (aplStack_30[0] == (long *)0x0) {
    bVar1 = true;
  }
  else {
    bVar1 = *aplStack_30[0] == -1;
  }
  func_0x0001072508cc(aplStack_30);
  return bVar1;
}



/* Entry: 10756734c; end: 107567363;  */

void FUN_10756734c(void)

{
  FUN_1075676f0();
  return;
}



/* Entry: 107567364; end: 107567433;  */

void FUN_107567364(char *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  plVar1 = (long *)(param_2 + 0x10);
  do {
    plVar1 = (long *)*plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  } while ((*(char *)(plVar1 + 2) != *param_1) ||
          (*(short *)((long)plVar1 + 0x12) != *(short *)(param_1 + 2)));
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  uStack_68 = *(undefined8 *)(param_1 + 4);
  uStack_60 = *(undefined4 *)(param_1 + 0xc);
  FUN_107567aa0(auStack_58,&uStack_90);
  FUN_10756734c(param_3,&uStack_68);
  func_0x00010756807c(auStack_58);
  func_0x00010756807c(&uStack_90);
  FUN_107568110(param_3 + 0x20,plVar1 + 2);
  FUN_107568128(param_2,plVar1);
  return;
}



/* Entry: 107567434; end: 1075674d3;  */

long FUN_107567434(long param_1)

{
  long unaff_x19;
  uint unaff_w20;
  
  func_0x0001075697d4();
  func_0x000107567480();
  if ((unaff_x19 + 8 == param_1) || (FUN_107457158(), (unaff_w20 >> 7 & 1) != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}


