/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8ec514; end: 10b8ec707;  */

void FUN_10b8ec514(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long lStack_88;
  long *plStack_80;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  func_0x00010b8fd358();
  uStack_38 = extraout_x8;
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    unaff_x22 = &lStack_48;
    func_0x00010b8fe5c8(&lStack_48);
    in_ZR = lStack_48 == 1;
    if ((bool)in_ZR) {
      unaff_x21 = lStack_40;
      if (*(long *)(lStack_40 + 0xe8) == 0) {
        func_0x00010b8fdf30();
        func_0x00010b8fd500();
        func_0x00010b8fdd68();
      }
      else {
        plVar2 = *(long **)(*(long *)(lStack_40 + 0xe8) + 0x10);
        (**(code **)(*plVar2 + 0x18))();
        in_ZR = (int)plVar2 == 1;
        if ((bool)in_ZR) {
          plVar2 = (long *)0x3;
        }
        else {
          iVar1 = (int)*(undefined8 *)(*(long *)(lStack_40 + 0xe8) + 0x10);
          func_0x00010b8fd94c();
          in_ZR = iVar1 - 1U == 4;
          uVar4 = 1;
          if (3 < iVar1 - 1U) {
            uVar4 = 2;
          }
          plVar2 = (long *)(ulong)uVar4;
        }
        func_0x00010b8fdfc0();
      }
    }
    else {
      plVar2 = &lStack_40;
      func_0x00010b8fd500();
    }
    FUN_10b8fb358(&lStack_48);
    param_2 = plVar2;
    param_3 = param_1;
  }
  func_0x00010b8fd3bc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = param_3;
  plStack_80 = unaff_x22;
  func_0x00010b8fdffc();
  FUN_10b8c43b4(&lStack_88,param_2[0x12],uVar3);
  if (lStack_88 == 0) {
    FUN_10b8e3f38(*(undefined8 *)(unaff_x21 + 0x140),param_3);
  }
  else {
    *unaff_x19 = 1;
    unaff_x19[1] = lStack_88;
    lStack_88 = 0;
  }
  func_0x000105276914(lStack_88);
  return;
}



/* Entry: 10b8ec708; end: 10b8ec9ab;  */

void FUN_10b8ec708(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [16];
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long lVar5;
  
  func_0x00010b8fea3c();
  func_0x00010b8fd4b8();
  uStack_68 = extraout_x8_00;
  func_0x00010b8fd6ec();
  lStack_c8 = 0;
  plVar4 = (long *)*unaff_x19;
  uStack_90 = param_1;
  uStack_88 = param_2;
  (**(code **)(*plVar4 + 0x180))(plVar4,&uStack_90);
  if ((int)plVar4 == 0) {
    if (*(long *)(unaff_x21 + 0x458) == 0) {
      FUN_10b99f5f8(&lStack_c0,&UNK_10f7cbe7d);
      func_0x00010b8e5d68(extraout_x8);
      func_0x000104bda960(lStack_c0);
      goto LAB_10b8ec960;
    }
    unaff_x22 = 0x148;
    __Znwm();
    FUN_10b8e30dc();
    uVar6 = *unaff_x19;
    uStack_120 = unaff_x19[6];
    uStack_128 = 0;
    func_0x00010b8fd698();
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,4);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    FUN_10b9a3a64(auStack_f8,&lStack_c0);
    uVar7 = unaff_x19[3];
    FUN_10b8e1704(auStack_80,1);
    puStack_70[2] = 0;
    *puStack_70 = &PTR_FUN_110d72b78;
    puStack_70[1] = 0;
    FUN_10b8e0de0(puStack_70 + 3,uVar6,&uStack_90,auStack_f8,uVar7,1);
    puVar2 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    puVar1 = puVar2 + 3;
    puStack_d8 = puVar2;
    puStack_e0 = puVar1;
    func_0x00010b8e17d0(auStack_80);
    FUN_10b9a3d64(auStack_f0);
    lStack_c0 = 1;
    puStack_b0 = puVar2;
    puStack_b8 = puVar1;
    if (puVar2 != (undefined8 *)0x0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    FUN_10b8e32c8(unaff_x22,&lStack_c0);
    FUN_10b8e5504(&lStack_c0);
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10_00 != 0);
    uStack_128 = 0;
    func_0x00010b8fe1e4(&lStack_c0);
    func_0x00010b8fe5e4();
    func_0x00010b8fe760();
    func_0x00010b8fd9e0();
    func_0x000108100600(unaff_x22);
    func_0x00010b8fe70c();
    FUN_10b8e47b8(unaff_x22);
  }
  else {
    uStack_d0 = 0;
    uStack_128 = 0;
    auStack_80[0] = 0;
    func_0x00010b8fe1e4(&lStack_c0,*(undefined8 *)(unaff_x21 + 0x90),&uStack_d0,&uStack_128);
    func_0x00010b8fe5e4();
    func_0x00010b8fe760();
    func_0x000107c278f8(auStack_80[0]);
    func_0x0001080d5b98(uStack_128);
    func_0x000108100600(uStack_d0);
  }
  func_0x00010b8c190c(lStack_c8);
  func_0x00010b8c2a44(&lStack_c0);
  unaff_x21 = (ulong)*(uint *)(lStack_c8 + 0x18);
  if ((*(long *)(lStack_c8 + 0x1b8) == 0) && (in_ZR = *(int *)(lStack_c0 + 0x18) == 1, !(bool)in_ZR)
     ) {
    lVar5 = lStack_c0;
    func_0x00010b8c2970();
    iVar3 = (int)lVar5;
    func_0x00010b8c1f54();
    if ((iVar3 == 0) || ((bRam00000001133fad60 & 1) == 0)) {
      func_0x00010b8c292c(lStack_c8 + 0x1b8,&lStack_c0);
      func_0x00010b8c2970(lStack_c0);
      do {
        func_0x00010b8fd810();
      } while (extraout_w10_01 != 0);
    }
  }
  FUN_10b8dba18(extraout_x8,*unaff_x19,unaff_x21);
  func_0x00010b8fe760();
LAB_10b8ec960:
  func_0x000105276914(lStack_c8);
  func_0x00010b8fd3bc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    func_0x00010b8fd538();
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fe920();
      FUN_10b8c43b4(&lStack_168);
      if (lStack_168 == 0) {
        lStack_168 = 0;
      }
      else {
        FUN_10b8c40e4(*(undefined8 *)(unaff_x21 + 0x90),&lStack_168);
      }
      func_0x00010b8fd2ec(lStack_168);
      func_0x000105276914();
    }
    return;
  }
  return;
}



/* Entry: 10b8ec9ac; end: 10b8eca13;  */

void FUN_10b8ec9ac(void)

{
  ulong extraout_x8;
  long unaff_x21;
  long lStack_38;
  
  func_0x00010b8fd538();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fe920();
    FUN_10b8c43b4(&lStack_38);
    if (lStack_38 == 0) {
      lStack_38 = 0;
    }
    else {
      FUN_10b8c40e4(*(undefined8 *)(unaff_x21 + 0x90),&lStack_38);
    }
    func_0x00010b8fd2ec(lStack_38);
    func_0x000105276914();
  }
  return;
}



/* Entry: 10b8eca14; end: 10b8ecb27;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8eca14(undefined8 param_1,undefined **param_2,undefined ***param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  uint uVar11;
  undefined8 extraout_x8;
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
  undefined8 extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  undefined8 extraout_x8_15;
  undefined8 extraout_x8_16;
  ulong extraout_x8_17;
  long *extraout_x8_18;
  undefined8 extraout_x8_19;
  undefined8 extraout_x8_20;
  ulong extraout_x8_21;
  int extraout_w9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined **unaff_x20;
  long **unaff_x21;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long **pplVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uStack_638;
  undefined8 uStack_630;
  double dStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5d8 [16];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined8 uStack_520;
  undefined8 uStack_508;
  undefined **ppuStack_500;
  long **pplStack_4f8;
  undefined ***pppuStack_4f0;
  long *plStack_4c8;
  undefined1 auStack_4c0 [8];
  long *aplStack_4b8 [6];
  long **pplStack_488;
  undefined8 uStack_480;
  undefined1 uStack_478;
  undefined1 *puStack_470;
  undefined8 uStack_468;
  undefined1 uStack_460;
  undefined *apuStack_458 [14];
  undefined **ppuStack_3e8;
  undefined ***pppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 auStack_378 [2];
  undefined8 uStack_368;
  long lStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [48];
  undefined1 auStack_318 [88];
  undefined1 uStack_2c0;
  undefined **ppuStack_2b0;
  long **pplStack_2a8;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined1 auStack_250 [24];
  long *plStack_238;
  undefined **appuStack_230 [3];
  undefined **ppuStack_218;
  undefined ***pppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_1a8;
  long **applStack_1a0 [3];
  undefined1 uStack_185;
  uint uStack_184;
  undefined8 uStack_180;
  uint uStack_174;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long **pplStack_d8;
  undefined **appuStack_a8 [3];
  undefined **ppuStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_58;
  
  func_0x00010b8fd358();
  uStack_58 = extraout_x8;
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fe920();
    FUN_10b8c43b4(&ppuStack_90);
    uVar8 = param_1;
    if (ppuStack_90 == (undefined **)0x0) {
LAB_10b8ecaf8:
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fda80();
      func_0x00010b8e5e4c();
      func_0x00010b8fd91c();
      uVar8 = param_1;
      if ((extraout_x8_01 & 1) == 0) goto LAB_10b8ecaf8;
      uVar17 = param_1;
      func_0x00010b8fe358();
      func_0x00010b8e5e4c();
      func_0x00010b8fd91c();
      uVar8 = uVar17;
      if ((extraout_x8_02 & 1) == 0) goto LAB_10b8ecaf8;
      param_3 = (undefined ***)0x3;
      ppuVar13 = unaff_x20;
      func_0x00010b8e5dc4();
      func_0x00010b8fd91c();
      param_2 = ppuVar13;
      if ((extraout_x8_03 & 1) == 0) goto LAB_10b8ecaf8;
      func_0x00010b8fe294(appuStack_a8);
      param_2 = appuStack_a8[0];
      if (appuStack_a8[0] != (undefined **)0x0) {
        unaff_x21 = &plStack_88;
        plStack_88 = (long *)0x10b8fb37c;
        ppuStack_80 = &PTR_DAT_110d73b30;
        uStack_68 = SUB81(ppuVar13,0);
        uStack_78 = param_1;
        uStack_70 = uVar17;
        func_0x00010b8fe960();
        param_3 = &ppuStack_90;
        func_0x00010b8fe5b4();
        func_0x00010b8fd6f8(ppuStack_80);
        param_2 = appuStack_a8[0];
      }
      func_0x00010b8fd2ec();
      func_0x00010b8fe2fc();
    }
    func_0x00010b8fe618();
    param_1 = uVar8;
  }
  func_0x00010b8fd3bc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pplStack_d8 = unaff_x21;
  func_0x00010b8fd358();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_04 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fe920();
    uVar11 = (uint)param_2;
    FUN_10b8c43b4(&ppuStack_168);
    if (ppuStack_168 == (undefined **)0x0) {
      param_2 = (undefined **)0x0;
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fda80();
      func_0x00010b8e5e4c();
      uStack_170 = param_1;
      func_0x00010b8fd91c();
      if ((extraout_x8_05 & 1) != 0) {
        func_0x00010b8fe358();
        func_0x00010b8e5e9c();
        in_ZR = uVar11 == 2;
        if (!(bool)in_ZR) {
          uVar11 = (uint)(uVar11 == 1);
        }
        uStack_174 = uVar11;
        func_0x00010b8fd91c();
        if ((extraout_x8_06 & 1) != 0) {
          param_3 = (undefined ***)0x3;
          ppuVar13 = unaff_x20;
          func_0x00010b8e5e4c();
          uVar11 = (uint)ppuVar13;
          uStack_180 = param_1;
          func_0x00010b8fd91c();
          if ((extraout_x8_07 & 1) != 0) {
            func_0x00010b8fe80c();
            in_ZR = uVar11 == 2;
            if (!(bool)in_ZR) {
              uVar11 = (uint)(uVar11 == 1);
            }
            uStack_184 = uVar11;
            func_0x00010b8fd91c();
            if ((extraout_x8_08 & 1) != 0) {
              param_3 = (undefined ***)0x5;
              ppuVar13 = unaff_x20;
              func_0x00010b8e5dc4();
              uStack_185 = SUB81(ppuVar13,0);
              func_0x00010b8fd91c();
              if ((extraout_x8_09 & 1) != 0) {
                func_0x00010b8fe294(applStack_1a0);
                if (applStack_1a0[0] == (long **)0x0) {
                  func_0x00010b8fd2ec();
                }
                else {
                  uStack_1a8 = 0;
                  pcStack_118 = FUN_10b8fb3b8;
                  ppuStack_110 = &PTR_FUN_110d73b50;
                  func_0x00010b8fdd04();
                  *ppuVar13 = (undefined *)&uStack_1a8;
                  ppuVar13[1] = (undefined *)&uStack_170;
                  ppuVar13[2] = (undefined *)&uStack_174;
                  ppuVar13[3] = (undefined *)&uStack_180;
                  ppuVar13[4] = (undefined *)&uStack_184;
                  ppuVar13[5] = &uStack_185;
                  ppuStack_108 = ppuVar13;
                  func_0x00010b8fe8b4((*applStack_1a0[0])[4],applStack_1a0[0],&ppuStack_168);
                  func_0x00010b8fd804(ppuStack_110);
                  func_0x00010b8dba34(&pcStack_118,(double)(float)uStack_1a8,*unaff_x20);
                  func_0x00010b8dba34(auStack_138,(double)uStack_1a8._4_4_,*unaff_x20);
                  ppuStack_158 = ppuStack_108;
                  ppuStack_160 = ppuStack_110;
                  uStack_148 = uStack_128;
                  uStack_150 = uStack_130;
                  param_3 = &ppuStack_160;
                  (**(code **)(*(long *)*unaff_x20 + 0x90))(*unaff_x20,param_3,2,unaff_x20[3]);
                  func_0x0001080e0bc0(auStack_138);
                  func_0x00010b8fe574();
                }
                func_0x00010b8fdebc(applStack_1a0);
                param_2 = ppuStack_168;
                unaff_x21 = applStack_1a0[0];
                goto LAB_10b8ecce4;
              }
            }
          }
        }
      }
      func_0x00010b8fd2ec();
      param_2 = ppuStack_168;
    }
LAB_10b8ecce4:
    func_0x000105276914();
  }
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fd358();
  ppuVar14 = param_3[6];
  ppuVar13 = param_3[3];
  uStack_208 = extraout_x8_10;
  func_0x00010b8fd6ec();
  ppuStack_218 = param_2;
  pppuStack_210 = param_3;
  func_0x00010b8fd91c();
  if ((extraout_x8_11 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fda80(&ppuStack_258);
    func_0x00010b8e5edc();
    func_0x00010b8fd91c();
    if ((extraout_x8_12 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      uStack_260 = 0;
      func_0x00010b8c2a68();
      ppuVar6 = param_2;
      func_0x00010b8c2aac();
      if ((((param_2 == (undefined **)0x0) || (func_0x00010b8c1f54(), ((ulong)param_2 & 1) == 0)) &&
          ((ppuVar6 == (undefined **)0x0 || (func_0x00010b8c1f54(), (int)ppuVar6 == 0)))) ||
         (in_ZR = cRam00000001133fad60 == '\x01', !(bool)in_ZR)) {
LAB_10b8ece88:
        param_3 = &ppuStack_218;
        func_0x00010b8fee04(&ppuStack_270,unaff_x21[0x2a],param_3,ppuVar14,ppuVar13);
        func_0x00010b8fe294(&plStack_238);
        func_0x00010b8feae4();
        if (((bool)in_ZR) && (plStack_238 != (long *)0x0)) {
          param_3 = &ppuStack_270;
          (**(code **)(*plStack_238 + 0x10))();
        }
        if (ppuStack_258 != (undefined **)0x0) {
          FUN_10b9ac09c(auStack_250);
          func_0x000104bda914(auStack_250);
        }
        func_0x00010b8fd2ec();
        func_0x00010b8fdebc(&plStack_238);
        func_0x00010b8c2b9c(ppuStack_270);
      }
      else {
        plVar16 = (long *)*unaff_x20;
        ppuStack_270 = (undefined **)&UNK_10f7cbeb8;
        uStack_268 = 6;
        param_3 = &ppuStack_218;
        (**(code **)(*plVar16 + 0xd0))(&plStack_238,plVar16,param_3,&ppuStack_270,ppuVar13);
        func_0x00010b8fd91c();
        if ((extraout_x8_13 & 1) == 0) {
          func_0x00010b8fd2ec();
          func_0x00010b8fe37c();
        }
        else {
          param_3 = appuStack_230;
          (**(code **)(*plVar16 + 0x150))(plVar16,param_3,ppuVar13);
          bVar1 = unaff_x20[3][8];
          if ((bVar1 & 1) == 0) {
            func_0x00010b8fd2ec();
          }
          else {
            func_0x00010b8fe920();
            FUN_10b8c43b4(&ppuStack_270);
            if ((ppuStack_270 != (undefined **)0x0) &&
               (ppuVar6 = ppuStack_270, func_0x00010b8c1f54(), ((ulong)ppuVar6 & 1) == 0)) {
              param_3 = (undefined ***)0x8;
              __Znwm();
              func_0x00010b8c3d48();
              uStack_278 = 0;
              FUN_10b8fb474(&uStack_260);
              func_0x00010b8fb450(&uStack_278);
            }
            func_0x00010b8fe030();
          }
          func_0x00010b8fe37c();
          if (bVar1 != 0) goto LAB_10b8ece88;
        }
      }
      func_0x00010b8fb450(&uStack_260);
    }
    func_0x000104bda3ac();
    param_2 = ppuStack_258;
  }
  func_0x00010b8fd3bc(uStack_208);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_2b0 = ppuVar13;
  pplStack_2a8 = unaff_x21;
  func_0x00010b8fd358();
  func_0x00010b8fd5f8(&lStack_360);
  func_0x00010b8fd91c();
  if ((extraout_x8_14 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ed090;
  }
  auStack_318[0] = 0;
  uStack_2c0 = 0;
  func_0x000105c3b044();
  if ((int)param_2 != 0) {
    func_0x00010b9a7520(auStack_348,&UNK_10f7cbebf,0xd,&lStack_360);
    func_0x00010b8a6ed0(auStack_318,auStack_348);
    func_0x00010b8fe0f8();
  }
  uStack_368 = 0;
  in_ZR = *(char *)(unaff_x21 + 0x6e) == '\x01';
  if ((bool)in_ZR) {
    iVar5 = (int)unaff_x21[0x6c];
    func_0x00010b8fdad4();
    if (iVar5 != 0) {
      plVar16 = &lStack_360;
      uVar7 = 0;
      func_0x00010b9a5ee8();
      plVar10 = plVar16;
      if (lStack_360 == 0) {
        in_ZR = plVar16 == (long *)0x80;
        if ((long *)0x7f < plVar16) {
          plVar10 = (long *)0x80;
        }
        uVar8 = 0;
        if (((uVar7 & 1) != 0) && (plVar16 != (long *)0x0)) goto LAB_10b8ecffc;
      }
      else {
        if ((uVar7 & 1) == 0) {
          plVar10 = (long *)(ulong)*(uint *)(lStack_360 + 0xc);
        }
        if ((long *)0x7f < plVar10) {
          plVar10 = (long *)0x80;
        }
        in_ZR = plVar10 == (long *)(ulong)*(uint *)(lStack_360 + 0xc);
        if ((bool)in_ZR) {
          do {
            func_0x00010b8fdb28();
            uVar8 = extraout_x8_15;
          } while (extraout_w11 != 0);
        }
        else {
LAB_10b8ecffc:
          FUN_10b9a6488(auStack_348,&lStack_360,0,plVar10);
          FUN_10b9a68e4(auStack_378,auStack_348);
          func_0x00010b8fe184();
          uVar8 = auStack_378[0];
        }
      }
      auStack_378[0] = uVar8;
      func_0x000107c31060(&uStack_368,auStack_378);
      func_0x00010b8fd9e0();
    }
  }
  FUN_10b8df048(auStack_378,unaff_x21,&uStack_368);
  uVar8 = 0;
  func_0x00010b8e5dac(auStack_348);
  unaff_x21 = (long **)*unaff_x20;
  func_0x00010b8fd8f4();
  param_3 = &ppuStack_358;
  uStack_350 = uVar8;
  func_0x00010b8fe0a8();
  FUN_10b8df100(auStack_378);
  func_0x00010b8fdbd0();
  param_2 = (undefined **)auStack_318;
  func_0x0001080e8dd4();
LAB_10b8ed090:
  func_0x00010b8fdb48();
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar9 = param_3;
    func_0x00010b8fd3e0();
    uStack_3d8 = extraout_x8_16;
    func_0x00010b8fd5f8(&plStack_4c8);
    func_0x00010b8fd91c();
    if ((extraout_x8_17 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fd8f4();
      pplStack_488 = (long **)0x0;
      ppuStack_3e8 = param_2;
      pppuStack_3e0 = pppuVar9;
      FUN_10b8e5870(apuStack_458,&pplStack_488);
      unaff_x21 = pplStack_488;
      func_0x000105276914();
      ppuVar13 = *param_3;
      func_0x00010b8fde6c();
      pplVar15 = unaff_x21 + 1;
      *pplVar15 = (long *)0x1;
      *unaff_x21 = (long *)&PTR_FUN_110d73b80;
      if (plStack_4c8 != (long *)0x0) {
        do {
          func_0x00010b8fd810();
        } while (extraout_w10 != 0);
      }
      unaff_x21[2] = plStack_4c8;
      func_0x00010b8fea6c();
      FUN_10b90145c(auStack_4c0,ppuVar13,&ppuStack_3e8);
      pplStack_488 = aplStack_4b8;
      uStack_480 = 0;
      uStack_478 = 1;
      uStack_468 = 0;
      uStack_460 = 0;
      puStack_470 = auStack_4c0;
      FUN_10b9a3a64(unaff_x21 + 3,&pplStack_488);
      func_0x00010b8fdd60();
      func_0x0001080e07a8(unaff_x21 + 6,ppuVar13,&ppuStack_3e8);
      do {
        func_0x00010b8fdb60();
      } while (extraout_w9 != 0);
      pplStack_488 = unaff_x21;
      (**(code **)(*ppuVar13 + 0x70))(ppuVar13,&pplStack_488,param_3[3]);
      func_0x0001080e0c4c(pplStack_488);
      do {
        func_0x00010b8fe9cc();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
        if (bVar3) {
          *pplVar15 = extraout_x8_18;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b8fd8d8();
      }
      param_2 = apuStack_458;
      func_0x00010b8e58cc();
    }
    func_0x00010b8fd9e0();
    func_0x00010b8fd3bc(uStack_3d8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    ppuStack_500 = ppuVar13;
    pplStack_4f8 = unaff_x21;
    pppuStack_4f0 = param_3;
    func_0x00010b8fd9d4();
    func_0x00010b8fd3f4();
    FUN_10b9a77a8();
    FUN_10b9a7c50();
    uStack_538 = 0x10b8f68b0;
    ppuStack_530 = &PTR_FUN_110d73680;
    ppuStack_528 = param_2;
    (**(code **)(*param_3[0x6c] + 0x30))(param_3[0x6c],&uStack_538,30000000000);
    func_0x00010b8fd640(ppuStack_530);
    func_0x00010b8dba18(extraout_x8_19,*unaff_x19,param_2);
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b8fda54(extraout_x8_20);
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if ((extraout_x8_21 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      lStack_5a8 = 0;
      lStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      FUN_10b9a77a8();
      FUN_10b9a7cac(&dStack_608);
      func_0x00010b8fe770();
      func_0x00010b8f68e4(&dStack_608);
      if (lStack_5b0 != lStack_5a8) {
        FUN_10b8f69d8(lStack_5b0,lStack_5a8,LZCOUNT((lStack_5a8 - lStack_5b0) / 0x38) << 1 ^ 0x7e,1)
        ;
      }
      lVar4 = lStack_5a8;
      uStack_5c0 = 0;
      uStack_5b8 = 0;
      for (lVar12 = lStack_5b0; lVar12 != lVar4; lVar12 = lVar12 + 0x38) {
        func_0x000107c31084();
        func_0x000107c31080(&uStack_638);
        FUN_10b9a8e18(&dStack_608,&uStack_638);
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        func_0x00010b8fd9e0();
        dStack_608 = (double)(*(long *)(lVar12 + 0x18) / 1000);
        uStack_600._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        dStack_608 = (double)(*(long *)(lVar12 + 0x20) / 1000);
        uStack_600._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        uStack_600 = CONCAT62(uStack_600._2_6_,4);
        dStack_608 = (double)CONCAT44(dStack_608._4_4_,*(undefined4 *)(lVar12 + 0x28));
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
      }
      func_0x00010b9abf6c(&uStack_5c8,&uStack_5c0);
      uVar8 = uStack_538;
      func_0x00010b9a8f84(auStack_5d8,&uStack_5c8);
      uStack_638 = 0;
      uStack_630 = uStack_508;
      func_0x00010b8fd698();
      uStack_600 = 0;
      func_0x00010b8fe3fc(3);
      FUN_10b900bd0(uVar8,auStack_5d8,&dStack_608,uStack_520);
      func_0x00010b8fe18c();
      func_0x000104bddf60(uStack_5c8);
      func_0x000104bddf60(uStack_5c0);
      func_0x00010b8f68e4(&lStack_5b0);
    }
  }
  return;
}



/* Entry: 10b8ecb28; end: 10b8ecd13;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8ecb28(undefined8 param_1,undefined **param_2,undefined ***param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  long *plVar10;
  uint uVar11;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 extraout_x8_10;
  undefined8 extraout_x8_11;
  ulong extraout_x8_12;
  long extraout_x8_13;
  undefined8 extraout_x8_14;
  undefined8 extraout_x8_15;
  ulong extraout_x8_16;
  int extraout_w9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined8 uStack_588;
  undefined8 uStack_580;
  double dStack_558;
  undefined8 uStack_550;
  undefined1 auStack_528 [16];
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  long lStack_500;
  long lStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_458;
  undefined **ppuStack_450;
  long *plStack_448;
  undefined ***pppuStack_440;
  long lStack_418;
  undefined1 auStack_410 [8];
  long alStack_408 [6];
  long *plStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  undefined *apuStack_3a8 [14];
  undefined **ppuStack_338;
  undefined ***pppuStack_330;
  undefined8 uStack_328;
  undefined8 auStack_2c8 [2];
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [48];
  undefined1 auStack_268 [88];
  undefined1 uStack_210;
  undefined **ppuStack_200;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 auStack_1a0 [24];
  long *plStack_188;
  undefined **appuStack_180 [3];
  undefined **ppuStack_168;
  undefined ***pppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_f8;
  long *aplStack_f0 [3];
  undefined1 uStack_d5;
  uint uStack_d4;
  undefined8 uStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  
  func_0x00010b8fd358();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fe920();
    uVar11 = (uint)param_2;
    FUN_10b8c43b4(&ppuStack_b8);
    if (ppuStack_b8 == (undefined **)0x0) {
      param_2 = (undefined **)0x0;
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fda80();
      func_0x00010b8e5e4c();
      uStack_c0 = param_1;
      func_0x00010b8fd91c();
      if ((extraout_x8_00 & 1) != 0) {
        func_0x00010b8fe358();
        func_0x00010b8e5e9c();
        in_ZR = uVar11 == 2;
        if (!(bool)in_ZR) {
          uVar11 = (uint)(uVar11 == 1);
        }
        uStack_c4 = uVar11;
        func_0x00010b8fd91c();
        if ((extraout_x8_01 & 1) != 0) {
          param_3 = (undefined ***)0x3;
          plVar15 = unaff_x20;
          func_0x00010b8e5e4c();
          uVar11 = (uint)plVar15;
          uStack_d0 = param_1;
          func_0x00010b8fd91c();
          if ((extraout_x8_02 & 1) != 0) {
            func_0x00010b8fe80c();
            in_ZR = uVar11 == 2;
            if (!(bool)in_ZR) {
              uVar11 = (uint)(uVar11 == 1);
            }
            uStack_d4 = uVar11;
            func_0x00010b8fd91c();
            if ((extraout_x8_03 & 1) != 0) {
              param_3 = (undefined ***)0x5;
              plVar15 = unaff_x20;
              func_0x00010b8e5dc4();
              uStack_d5 = SUB81(plVar15,0);
              func_0x00010b8fd91c();
              if ((extraout_x8_04 & 1) != 0) {
                func_0x00010b8fe294(aplStack_f0);
                if (aplStack_f0[0] == (long *)0x0) {
                  func_0x00010b8fd2ec();
                }
                else {
                  uStack_f8 = 0;
                  pcStack_68 = FUN_10b8fb3b8;
                  ppuStack_60 = &PTR_FUN_110d73b50;
                  func_0x00010b8fdd04();
                  *plVar15 = (long)&uStack_f8;
                  plVar15[1] = (long)&uStack_c0;
                  plVar15[2] = (long)&uStack_c4;
                  plVar15[3] = (long)&uStack_d0;
                  plVar15[4] = (long)&uStack_d4;
                  plVar15[5] = (long)&uStack_d5;
                  plStack_58 = plVar15;
                  func_0x00010b8fe8b4(*(undefined8 *)(*aplStack_f0[0] + 0x20),aplStack_f0[0],
                                      &ppuStack_b8);
                  func_0x00010b8fd804(ppuStack_60);
                  func_0x00010b8dba34(&pcStack_68,(double)(float)uStack_f8,*unaff_x20);
                  func_0x00010b8dba34(auStack_88,(double)uStack_f8._4_4_,*unaff_x20);
                  plStack_a8 = plStack_58;
                  ppuStack_b0 = ppuStack_60;
                  uStack_98 = uStack_78;
                  uStack_a0 = uStack_80;
                  param_3 = &ppuStack_b0;
                  (**(code **)(*(long *)*unaff_x20 + 0x90))
                            ((long *)*unaff_x20,param_3,2,unaff_x20[3]);
                  func_0x0001080e0bc0(auStack_88);
                  func_0x00010b8fe574();
                }
                func_0x00010b8fdebc(aplStack_f0);
                param_2 = ppuStack_b8;
                unaff_x21 = aplStack_f0[0];
                goto LAB_10b8ecce4;
              }
            }
          }
        }
      }
      func_0x00010b8fd2ec();
      param_2 = ppuStack_b8;
    }
LAB_10b8ecce4:
    func_0x000105276914();
  }
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fd358();
  ppuVar14 = param_3[6];
  ppuVar13 = param_3[3];
  uStack_158 = extraout_x8_05;
  func_0x00010b8fd6ec();
  ppuStack_168 = param_2;
  pppuStack_160 = param_3;
  func_0x00010b8fd91c();
  if ((extraout_x8_06 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fda80(&ppuStack_1a8);
    func_0x00010b8e5edc();
    func_0x00010b8fd91c();
    if ((extraout_x8_07 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      uStack_1b0 = 0;
      func_0x00010b8c2a68();
      ppuVar6 = param_2;
      func_0x00010b8c2aac();
      if ((((param_2 == (undefined **)0x0) || (func_0x00010b8c1f54(), ((ulong)param_2 & 1) == 0)) &&
          ((ppuVar6 == (undefined **)0x0 || (func_0x00010b8c1f54(), (int)ppuVar6 == 0)))) ||
         (in_ZR = cRam00000001133fad60 == '\x01', !(bool)in_ZR)) {
LAB_10b8ece88:
        param_3 = &ppuStack_168;
        func_0x00010b8fee04(&ppuStack_1c0,unaff_x21[0x2a],param_3,ppuVar14,ppuVar13);
        func_0x00010b8fe294(&plStack_188);
        func_0x00010b8feae4();
        if (((bool)in_ZR) && (plStack_188 != (long *)0x0)) {
          param_3 = &ppuStack_1c0;
          (**(code **)(*plStack_188 + 0x10))();
        }
        if (ppuStack_1a8 != (undefined **)0x0) {
          FUN_10b9ac09c(auStack_1a0);
          func_0x000104bda914(auStack_1a0);
        }
        func_0x00010b8fd2ec();
        func_0x00010b8fdebc(&plStack_188);
        func_0x00010b8c2b9c(ppuStack_1c0);
      }
      else {
        plVar15 = (long *)*unaff_x20;
        ppuStack_1c0 = (undefined **)&UNK_10f7cbeb8;
        uStack_1b8 = 6;
        param_3 = &ppuStack_168;
        (**(code **)(*plVar15 + 0xd0))(&plStack_188,plVar15,param_3,&ppuStack_1c0,ppuVar13);
        func_0x00010b8fd91c();
        if ((extraout_x8_08 & 1) == 0) {
          func_0x00010b8fd2ec();
          func_0x00010b8fe37c();
        }
        else {
          param_3 = appuStack_180;
          (**(code **)(*plVar15 + 0x150))(plVar15,param_3,ppuVar13);
          bVar1 = *(byte *)(unaff_x20[3] + 8);
          if ((bVar1 & 1) == 0) {
            func_0x00010b8fd2ec();
          }
          else {
            func_0x00010b8fe920();
            FUN_10b8c43b4(&ppuStack_1c0);
            if ((ppuStack_1c0 != (undefined **)0x0) &&
               (ppuVar6 = ppuStack_1c0, func_0x00010b8c1f54(), ((ulong)ppuVar6 & 1) == 0)) {
              param_3 = (undefined ***)0x8;
              __Znwm();
              func_0x00010b8c3d48();
              uStack_1c8 = 0;
              FUN_10b8fb474(&uStack_1b0);
              func_0x00010b8fb450(&uStack_1c8);
            }
            func_0x00010b8fe030();
          }
          func_0x00010b8fe37c();
          if (bVar1 != 0) goto LAB_10b8ece88;
        }
      }
      func_0x00010b8fb450(&uStack_1b0);
    }
    func_0x000104bda3ac();
    param_2 = ppuStack_1a8;
  }
  func_0x00010b8fd3bc(uStack_158);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuStack_200 = ppuVar13;
  func_0x00010b8fd358();
  func_0x00010b8fd5f8(&lStack_2b0);
  func_0x00010b8fd91c();
  if ((extraout_x8_09 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ed090;
  }
  auStack_268[0] = 0;
  uStack_210 = 0;
  func_0x000105c3b044();
  if ((int)param_2 != 0) {
    func_0x00010b9a7520(auStack_298,&UNK_10f7cbebf,0xd,&lStack_2b0);
    func_0x00010b8a6ed0(auStack_268,auStack_298);
    func_0x00010b8fe0f8();
  }
  uStack_2b8 = 0;
  in_ZR = (char)unaff_x21[0x6e] == '\x01';
  if ((bool)in_ZR) {
    iVar5 = (int)unaff_x21[0x6c];
    func_0x00010b8fdad4();
    if (iVar5 != 0) {
      plVar15 = &lStack_2b0;
      uVar7 = 0;
      func_0x00010b9a5ee8();
      plVar10 = plVar15;
      if (lStack_2b0 == 0) {
        in_ZR = plVar15 == (long *)0x80;
        if ((long *)0x7f < plVar15) {
          plVar10 = (long *)0x80;
        }
        uVar8 = 0;
        if (((uVar7 & 1) != 0) && (plVar15 != (long *)0x0)) goto LAB_10b8ecffc;
      }
      else {
        if ((uVar7 & 1) == 0) {
          plVar10 = (long *)(ulong)*(uint *)(lStack_2b0 + 0xc);
        }
        if ((long *)0x7f < plVar10) {
          plVar10 = (long *)0x80;
        }
        in_ZR = plVar10 == (long *)(ulong)*(uint *)(lStack_2b0 + 0xc);
        if ((bool)in_ZR) {
          do {
            func_0x00010b8fdb28();
            uVar8 = extraout_x8_10;
          } while (extraout_w11 != 0);
        }
        else {
LAB_10b8ecffc:
          FUN_10b9a6488(auStack_298,&lStack_2b0,0,plVar10);
          FUN_10b9a68e4(auStack_2c8,auStack_298);
          func_0x00010b8fe184();
          uVar8 = auStack_2c8[0];
        }
      }
      auStack_2c8[0] = uVar8;
      func_0x000107c31060(&uStack_2b8,auStack_2c8);
      func_0x00010b8fd9e0();
    }
  }
  FUN_10b8df048(auStack_2c8,unaff_x21,&uStack_2b8);
  uVar8 = 0;
  func_0x00010b8e5dac(auStack_298);
  unaff_x21 = (long *)*unaff_x20;
  func_0x00010b8fd8f4();
  param_3 = &ppuStack_2a8;
  uStack_2a0 = uVar8;
  func_0x00010b8fe0a8();
  FUN_10b8df100(auStack_2c8);
  func_0x00010b8fdbd0();
  param_2 = (undefined **)auStack_268;
  func_0x0001080e8dd4();
LAB_10b8ed090:
  func_0x00010b8fdb48();
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar9 = param_3;
    func_0x00010b8fd3e0();
    uStack_328 = extraout_x8_11;
    func_0x00010b8fd5f8(&lStack_418);
    func_0x00010b8fd91c();
    if ((extraout_x8_12 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fd8f4();
      plStack_3d8 = (long *)0x0;
      ppuStack_338 = param_2;
      pppuStack_330 = pppuVar9;
      FUN_10b8e5870(apuStack_3a8,&plStack_3d8);
      unaff_x21 = plStack_3d8;
      func_0x000105276914();
      ppuVar13 = *param_3;
      func_0x00010b8fde6c();
      plVar15 = unaff_x21 + 1;
      *plVar15 = 1;
      *unaff_x21 = (long)&PTR_FUN_110d73b80;
      if (lStack_418 != 0) {
        do {
          func_0x00010b8fd810();
        } while (extraout_w10 != 0);
      }
      unaff_x21[2] = lStack_418;
      func_0x00010b8fea6c();
      FUN_10b90145c(auStack_410,ppuVar13,&ppuStack_338);
      plStack_3d8 = alStack_408;
      uStack_3d0 = 0;
      uStack_3c8 = 1;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      puStack_3c0 = auStack_410;
      FUN_10b9a3a64(unaff_x21 + 3,&plStack_3d8);
      func_0x00010b8fdd60();
      func_0x0001080e07a8(unaff_x21 + 6,ppuVar13,&ppuStack_338);
      do {
        func_0x00010b8fdb60();
      } while (extraout_w9 != 0);
      plStack_3d8 = unaff_x21;
      (**(code **)(*ppuVar13 + 0x70))(ppuVar13,&plStack_3d8,param_3[3]);
      func_0x0001080e0c4c(plStack_3d8);
      do {
        func_0x00010b8fe9cc();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *plVar15 = extraout_x8_13;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b8fd8d8();
      }
      param_2 = apuStack_3a8;
      func_0x00010b8e58cc();
    }
    func_0x00010b8fd9e0();
    func_0x00010b8fd3bc(uStack_328);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    ppuStack_450 = ppuVar13;
    plStack_448 = unaff_x21;
    pppuStack_440 = param_3;
    func_0x00010b8fd9d4();
    func_0x00010b8fd3f4();
    FUN_10b9a77a8();
    FUN_10b9a7c50();
    uStack_488 = 0x10b8f68b0;
    ppuStack_480 = &PTR_FUN_110d73680;
    ppuStack_478 = param_2;
    (**(code **)(*param_3[0x6c] + 0x30))(param_3[0x6c],&uStack_488,30000000000);
    func_0x00010b8fd640(ppuStack_480);
    func_0x00010b8dba18(extraout_x8_14,*unaff_x19,param_2);
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b8fda54(extraout_x8_15);
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if ((extraout_x8_16 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      lStack_4f8 = 0;
      lStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      FUN_10b9a77a8();
      FUN_10b9a7cac(&dStack_558);
      func_0x00010b8fe770();
      func_0x00010b8f68e4(&dStack_558);
      if (lStack_500 != lStack_4f8) {
        FUN_10b8f69d8(lStack_500,lStack_4f8,LZCOUNT((lStack_4f8 - lStack_500) / 0x38) << 1 ^ 0x7e,1)
        ;
      }
      lVar4 = lStack_4f8;
      uStack_510 = 0;
      uStack_508 = 0;
      for (lVar12 = lStack_500; lVar12 != lVar4; lVar12 = lVar12 + 0x38) {
        func_0x000107c31084();
        func_0x000107c31080(&uStack_588);
        FUN_10b9a8e18(&dStack_558,&uStack_588);
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        func_0x00010b8fd9e0();
        dStack_558 = (double)(*(long *)(lVar12 + 0x18) / 1000);
        uStack_550._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        dStack_558 = (double)(*(long *)(lVar12 + 0x20) / 1000);
        uStack_550._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        uStack_550 = CONCAT62(uStack_550._2_6_,4);
        dStack_558 = (double)CONCAT44(dStack_558._4_4_,*(undefined4 *)(lVar12 + 0x28));
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
      }
      func_0x00010b9abf6c(&uStack_518,&uStack_510);
      uVar8 = uStack_488;
      func_0x00010b9a8f84(auStack_528,&uStack_518);
      uStack_588 = 0;
      uStack_580 = uStack_458;
      func_0x00010b8fd698();
      uStack_550 = 0;
      func_0x00010b8fe3fc(3);
      FUN_10b900bd0(uVar8,auStack_528,&dStack_558,uStack_470);
      func_0x00010b8fe18c();
      func_0x000104bddf60(uStack_518);
      func_0x000104bddf60(uStack_510);
      func_0x00010b8f68e4(&lStack_500);
    }
  }
  return;
}



/* Entry: 10b8ecd14; end: 10b8ecf1b;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8ecd14(undefined1 *param_1,undefined1 **param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 **ppuVar10;
  long *plVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  ulong extraout_x8_10;
  int extraout_w9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uStack_488;
  undefined8 uStack_480;
  double dStack_458;
  undefined8 uStack_450;
  undefined1 auStack_428 [16];
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined1 *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_358;
  long *plStack_350;
  undefined8 *puStack_348;
  undefined1 **ppuStack_340;
  long lStack_318;
  undefined1 auStack_310 [8];
  undefined8 auStack_308 [6];
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [112];
  undefined1 *puStack_238;
  undefined1 **ppuStack_230;
  undefined8 uStack_228;
  undefined8 auStack_1c8 [2];
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [48];
  undefined1 auStack_168 [88];
  undefined1 uStack_110;
  long *plStack_100;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  long *plStack_88;
  undefined1 *apuStack_80 [3];
  undefined1 *puStack_68;
  undefined1 **ppuStack_60;
  undefined8 uStack_58;
  
  func_0x00010b8fd358();
  puVar14 = param_2[6];
  plVar13 = (long *)param_2[3];
  uStack_58 = extraout_x8;
  func_0x00010b8fd6ec();
  puStack_68 = param_1;
  ppuStack_60 = param_2;
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fda80(&puStack_a8);
    func_0x00010b8e5edc();
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      uStack_b0 = 0;
      func_0x00010b8c2a68();
      puVar6 = param_1;
      func_0x00010b8c2aac();
      if ((((param_1 == (undefined1 *)0x0) || (func_0x00010b8c1f54(), ((ulong)param_1 & 1) == 0)) &&
          ((puVar6 == (undefined1 *)0x0 || (func_0x00010b8c1f54(), (int)puVar6 == 0)))) ||
         (in_ZR = cRam00000001133fad60 == '\x01', !(bool)in_ZR)) {
LAB_10b8ece88:
        param_2 = &puStack_68;
        func_0x00010b8fee04(&puStack_c0,unaff_x21[0x2a],param_2,puVar14,plVar13);
        func_0x00010b8fe294(&plStack_88);
        func_0x00010b8feae4();
        if (((bool)in_ZR) && (plStack_88 != (long *)0x0)) {
          param_2 = &puStack_c0;
          (**(code **)(*plStack_88 + 0x10))();
        }
        if (puStack_a8 != (undefined1 *)0x0) {
          FUN_10b9ac09c(auStack_a0);
          func_0x000104bda914(auStack_a0);
        }
        func_0x00010b8fd2ec();
        func_0x00010b8fdebc(&plStack_88);
        func_0x00010b8c2b9c(puStack_c0);
      }
      else {
        plVar16 = (long *)*unaff_x20;
        puStack_c0 = &UNK_10f7cbeb8;
        uStack_b8 = 6;
        param_2 = &puStack_68;
        (**(code **)(*plVar16 + 0xd0))(&plStack_88,plVar16,param_2,&puStack_c0,plVar13);
        func_0x00010b8fd91c();
        if ((extraout_x8_02 & 1) == 0) {
          func_0x00010b8fd2ec();
          func_0x00010b8fe37c();
        }
        else {
          param_2 = apuStack_80;
          (**(code **)(*plVar16 + 0x150))(plVar16,param_2,plVar13);
          bVar1 = *(byte *)(unaff_x20[3] + 8);
          if ((bVar1 & 1) == 0) {
            func_0x00010b8fd2ec();
          }
          else {
            func_0x00010b8fe920();
            FUN_10b8c43b4(&puStack_c0);
            if ((puStack_c0 != (undefined *)0x0) &&
               (puVar7 = puStack_c0, func_0x00010b8c1f54(), ((ulong)puVar7 & 1) == 0)) {
              param_2 = (undefined1 **)0x8;
              __Znwm();
              func_0x00010b8c3d48();
              uStack_c8 = 0;
              FUN_10b8fb474(&uStack_b0);
              func_0x00010b8fb450(&uStack_c8);
            }
            func_0x00010b8fe030();
          }
          func_0x00010b8fe37c();
          if (bVar1 != 0) goto LAB_10b8ece88;
        }
      }
      func_0x00010b8fb450(&uStack_b0);
    }
    func_0x000104bda3ac();
    param_1 = puStack_a8;
  }
  func_0x00010b8fd3bc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plStack_100 = plVar13;
  func_0x00010b8fd358();
  func_0x00010b8fd5f8(&lStack_1b0);
  func_0x00010b8fd91c();
  if ((extraout_x8_03 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ed090;
  }
  auStack_168[0] = 0;
  uStack_110 = 0;
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    func_0x00010b9a7520(auStack_198,&UNK_10f7cbebf,0xd,&lStack_1b0);
    func_0x00010b8a6ed0(auStack_168,auStack_198);
    func_0x00010b8fe0f8();
  }
  uStack_1b8 = 0;
  in_ZR = *(char *)(unaff_x21 + 0x6e) == '\x01';
  if ((bool)in_ZR) {
    iVar5 = (int)unaff_x21[0x6c];
    func_0x00010b8fdad4();
    if (iVar5 != 0) {
      plVar16 = &lStack_1b0;
      uVar8 = 0;
      func_0x00010b9a5ee8();
      plVar11 = plVar16;
      if (lStack_1b0 == 0) {
        in_ZR = plVar16 == (long *)0x80;
        if ((long *)0x7f < plVar16) {
          plVar11 = (long *)0x80;
        }
        uVar9 = 0;
        if (((uVar8 & 1) != 0) && (plVar16 != (long *)0x0)) goto LAB_10b8ecffc;
      }
      else {
        if ((uVar8 & 1) == 0) {
          plVar11 = (long *)(ulong)*(uint *)(lStack_1b0 + 0xc);
        }
        if ((long *)0x7f < plVar11) {
          plVar11 = (long *)0x80;
        }
        in_ZR = plVar11 == (long *)(ulong)*(uint *)(lStack_1b0 + 0xc);
        if ((bool)in_ZR) {
          do {
            func_0x00010b8fdb28();
            uVar9 = extraout_x8_04;
          } while (extraout_w11 != 0);
        }
        else {
LAB_10b8ecffc:
          FUN_10b9a6488(auStack_198,&lStack_1b0,0,plVar11);
          FUN_10b9a68e4(auStack_1c8,auStack_198);
          func_0x00010b8fe184();
          uVar9 = auStack_1c8[0];
        }
      }
      auStack_1c8[0] = uVar9;
      func_0x000107c31060(&uStack_1b8,auStack_1c8);
      func_0x00010b8fd9e0();
    }
  }
  FUN_10b8df048(auStack_1c8);
  uVar9 = 0;
  func_0x00010b8e5dac(auStack_198);
  unaff_x21 = (undefined8 *)*unaff_x20;
  func_0x00010b8fd8f4();
  param_2 = &puStack_1a8;
  uStack_1a0 = uVar9;
  func_0x00010b8fe0a8();
  FUN_10b8df100(auStack_1c8);
  func_0x00010b8fdbd0();
  param_1 = auStack_168;
  func_0x0001080e8dd4();
LAB_10b8ed090:
  func_0x00010b8fdb48();
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    ppuVar10 = param_2;
    func_0x00010b8fd3e0();
    uStack_228 = extraout_x8_05;
    func_0x00010b8fd5f8(&lStack_318);
    func_0x00010b8fd91c();
    if ((extraout_x8_06 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fd8f4();
      puStack_2d8 = (undefined8 *)0x0;
      puStack_238 = param_1;
      ppuStack_230 = ppuVar10;
      FUN_10b8e5870(auStack_2a8,&puStack_2d8);
      unaff_x21 = puStack_2d8;
      func_0x000105276914();
      plVar13 = (long *)*param_2;
      func_0x00010b8fde6c();
      puVar15 = unaff_x21 + 1;
      *puVar15 = 1;
      *unaff_x21 = &PTR_FUN_110d73b80;
      if (lStack_318 != 0) {
        do {
          func_0x00010b8fd810();
        } while (extraout_w10 != 0);
      }
      unaff_x21[2] = lStack_318;
      func_0x00010b8fea6c();
      FUN_10b90145c(auStack_310,plVar13,&puStack_238);
      puStack_2d8 = auStack_308;
      uStack_2d0 = 0;
      uStack_2c8 = 1;
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      puStack_2c0 = auStack_310;
      FUN_10b9a3a64(unaff_x21 + 3,&puStack_2d8);
      func_0x00010b8fdd60();
      func_0x0001080e07a8(unaff_x21 + 6,plVar13,&puStack_238);
      do {
        func_0x00010b8fdb60();
      } while (extraout_w9 != 0);
      puStack_2d8 = unaff_x21;
      (**(code **)(*plVar13 + 0x70))(plVar13,&puStack_2d8,param_2[3]);
      func_0x0001080e0c4c(puStack_2d8);
      do {
        func_0x00010b8fe9cc();
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar15,0x10);
        if (bVar3) {
          *puVar15 = extraout_x8_07;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b8fd8d8();
      }
      param_1 = auStack_2a8;
      func_0x00010b8e58cc();
    }
    func_0x00010b8fd9e0();
    func_0x00010b8fd3bc(uStack_228);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plStack_350 = plVar13;
    puStack_348 = unaff_x21;
    ppuStack_340 = param_2;
    func_0x00010b8fd9d4();
    func_0x00010b8fd3f4();
    FUN_10b9a77a8();
    FUN_10b9a7c50();
    uStack_388 = 0x10b8f68b0;
    ppuStack_380 = &PTR_FUN_110d73680;
    puStack_378 = param_1;
    (**(code **)(*(long *)param_2[0x6c] + 0x30))(param_2[0x6c],&uStack_388,30000000000);
    func_0x00010b8fd640(ppuStack_380);
    FUN_10b8dba18(extraout_x8_08,*unaff_x19,param_1);
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b8fda54(extraout_x8_09);
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if ((extraout_x8_10 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      lStack_3f8 = 0;
      lStack_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      FUN_10b9a77a8();
      FUN_10b9a7cac(&dStack_458);
      func_0x00010b8fe770();
      func_0x00010b8f68e4(&dStack_458);
      if (lStack_400 != lStack_3f8) {
        FUN_10b8f69d8(lStack_400,lStack_3f8,LZCOUNT((lStack_3f8 - lStack_400) / 0x38) << 1 ^ 0x7e,1)
        ;
      }
      lVar4 = lStack_3f8;
      uStack_410 = 0;
      uStack_408 = 0;
      for (lVar12 = lStack_400; lVar12 != lVar4; lVar12 = lVar12 + 0x38) {
        func_0x000107c31084();
        func_0x000107c31080(&uStack_488);
        FUN_10b9a8e18(&dStack_458,&uStack_488);
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        func_0x00010b8fd9e0();
        dStack_458 = (double)(*(long *)(lVar12 + 0x18) / 1000);
        uStack_450._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        dStack_458 = (double)(*(long *)(lVar12 + 0x20) / 1000);
        uStack_450._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        uStack_450 = CONCAT62(uStack_450._2_6_,4);
        dStack_458 = (double)CONCAT44(dStack_458._4_4_,*(undefined4 *)(lVar12 + 0x28));
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
      }
      func_0x00010b9abf6c(&uStack_418,&uStack_410);
      uVar9 = uStack_388;
      func_0x00010b9a8f84(auStack_428,&uStack_418);
      uStack_488 = 0;
      uStack_480 = uStack_358;
      func_0x00010b8fd698();
      uStack_450 = 0;
      func_0x00010b8fe3fc(3);
      FUN_10b900bd0(uVar9,auStack_428,&dStack_458,uStack_370);
      func_0x00010b8fe18c();
      func_0x000104bddf60(uStack_418);
      func_0x000104bddf60(uStack_410);
      func_0x00010b8f68e4(&lStack_400);
    }
  }
  return;
}



/* Entry: 10b8ecf1c; end: 10b8ed0af;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8ecf1c(undefined1 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  ulong extraout_x8_06;
  int extraout_w9;
  int extraout_w10;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar10;
  long *unaff_x22;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  double dStack_388;
  undefined8 uStack_380;
  undefined1 auStack_358 [16];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  long lStack_248;
  undefined1 auStack_240 [8];
  undefined8 auStack_238 [6];
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined1 auStack_1d8 [112];
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 auStack_f8 [2];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  
  func_0x00010b8fd358();
  func_0x00010b8fd5f8(&lStack_e0);
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8ed090;
  }
  auStack_98[0] = 0;
  uStack_40 = 0;
  func_0x000105c3b044();
  if ((int)param_1 != 0) {
    func_0x00010b9a7520(auStack_c8,&UNK_10f7cbebf,0xd,&lStack_e0);
    func_0x00010b8a6ed0(auStack_98,auStack_c8);
    func_0x00010b8fe0f8();
  }
  uStack_e8 = 0;
  in_ZR = *(char *)(unaff_x21 + 0x6e) == '\x01';
  if ((bool)in_ZR) {
    iVar4 = (int)unaff_x21[0x6c];
    func_0x00010b8fdad4();
    if (iVar4 != 0) {
      plVar5 = &lStack_e0;
      uVar6 = 0;
      func_0x00010b9a5ee8();
      plVar9 = plVar5;
      if (lStack_e0 == 0) {
        in_ZR = plVar5 == (long *)0x80;
        if ((long *)0x7f < plVar5) {
          plVar9 = (long *)0x80;
        }
        uVar7 = 0;
        if (((uVar6 & 1) != 0) && (plVar5 != (long *)0x0)) goto LAB_10b8ecffc;
      }
      else {
        if ((uVar6 & 1) == 0) {
          plVar9 = (long *)(ulong)*(uint *)(lStack_e0 + 0xc);
        }
        if ((long *)0x7f < plVar9) {
          plVar9 = (long *)0x80;
        }
        in_ZR = plVar9 == (long *)(ulong)*(uint *)(lStack_e0 + 0xc);
        if ((bool)in_ZR) {
          do {
            func_0x00010b8fdb28();
            uVar7 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        else {
LAB_10b8ecffc:
          FUN_10b9a6488(auStack_c8,&lStack_e0,0,plVar9);
          FUN_10b9a68e4(auStack_f8,auStack_c8);
          func_0x00010b8fe184();
          uVar7 = auStack_f8[0];
        }
      }
      auStack_f8[0] = uVar7;
      func_0x000107c31060(&uStack_e8,auStack_f8);
      func_0x00010b8fd9e0();
    }
  }
  FUN_10b8df048(auStack_f8);
  uVar7 = 0;
  func_0x00010b8e5dac(auStack_c8);
  unaff_x21 = (undefined8 *)*unaff_x20;
  func_0x00010b8fd8f4();
  param_2 = &uStack_d8;
  uStack_d0 = uVar7;
  func_0x00010b8fe0a8();
  FUN_10b8df100(auStack_f8);
  func_0x00010b8fdbd0();
  param_1 = auStack_98;
  func_0x0001080e8dd4();
LAB_10b8ed090:
  func_0x00010b8fdb48();
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar8 = param_2;
    func_0x00010b8fd3e0();
    uStack_158 = extraout_x8_01;
    func_0x00010b8fd5f8(&lStack_248);
    func_0x00010b8fd91c();
    if ((extraout_x8_02 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fd8f4();
      puStack_208 = (undefined8 *)0x0;
      puStack_168 = param_1;
      puStack_160 = puVar8;
      FUN_10b8e5870(auStack_1d8,&puStack_208);
      unaff_x21 = puStack_208;
      func_0x000105276914();
      unaff_x22 = (long *)*param_2;
      func_0x00010b8fde6c();
      puVar8 = unaff_x21 + 1;
      *puVar8 = 1;
      *unaff_x21 = &PTR_FUN_110d73b80;
      if (lStack_248 != 0) {
        do {
          func_0x00010b8fd810();
        } while (extraout_w10 != 0);
      }
      unaff_x21[2] = lStack_248;
      func_0x00010b8fea6c();
      FUN_10b90145c(auStack_240,unaff_x22,&puStack_168);
      puStack_208 = auStack_238;
      uStack_200 = 0;
      uStack_1f8 = 1;
      uStack_1e8 = 0;
      uStack_1e0 = 0;
      puStack_1f0 = auStack_240;
      FUN_10b9a3a64(unaff_x21 + 3,&puStack_208);
      func_0x00010b8fdd60();
      func_0x0001080e07a8(unaff_x21 + 6,unaff_x22,&puStack_168);
      do {
        func_0x00010b8fdb60();
      } while (extraout_w9 != 0);
      puStack_208 = unaff_x21;
      (**(code **)(*unaff_x22 + 0x70))(unaff_x22,&puStack_208,param_2[3]);
      func_0x0001080e0c4c(puStack_208);
      do {
        func_0x00010b8fe9cc();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar2) {
          *puVar8 = extraout_x8_03;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010b8fd8d8();
      }
      param_1 = auStack_1d8;
      func_0x00010b8e58cc();
    }
    func_0x00010b8fd9e0();
    func_0x00010b8fd3bc(uStack_158);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    plStack_280 = unaff_x22;
    puStack_278 = unaff_x21;
    puStack_270 = param_2;
    func_0x00010b8fd9d4();
    func_0x00010b8fd3f4();
    FUN_10b9a77a8();
    FUN_10b9a7c50();
    uStack_2b8 = 0x10b8f68b0;
    ppuStack_2b0 = &PTR_FUN_110d73680;
    puStack_2a8 = param_1;
    (**(code **)(*(long *)param_2[0x6c] + 0x30))((long *)param_2[0x6c],&uStack_2b8,30000000000);
    func_0x00010b8fd640(ppuStack_2b0);
    FUN_10b8dba18(extraout_x8_04,*unaff_x19,param_1);
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b8fda54(extraout_x8_05);
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if ((extraout_x8_06 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      lStack_328 = 0;
      lStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      FUN_10b9a77a8();
      FUN_10b9a7cac(&dStack_388);
      func_0x00010b8fe770();
      func_0x00010b8f68e4(&dStack_388);
      if (lStack_330 != lStack_328) {
        FUN_10b8f69d8(lStack_330,lStack_328,LZCOUNT((lStack_328 - lStack_330) / 0x38) << 1 ^ 0x7e,1)
        ;
      }
      lVar3 = lStack_328;
      uStack_340 = 0;
      uStack_338 = 0;
      for (lVar10 = lStack_330; lVar10 != lVar3; lVar10 = lVar10 + 0x38) {
        func_0x000107c31084();
        func_0x000107c31080(&uStack_3b8);
        FUN_10b9a8e18(&dStack_388,&uStack_3b8);
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        func_0x00010b8fd9e0();
        dStack_388 = (double)(*(long *)(lVar10 + 0x18) / 1000);
        uStack_380._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        dStack_388 = (double)(*(long *)(lVar10 + 0x20) / 1000);
        uStack_380._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        uStack_380 = CONCAT62(uStack_380._2_6_,4);
        dStack_388 = (double)CONCAT44(dStack_388._4_4_,*(undefined4 *)(lVar10 + 0x28));
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
      }
      func_0x00010b9abf6c(&uStack_348,&uStack_340);
      uVar7 = uStack_2b8;
      func_0x00010b9a8f84(auStack_358,&uStack_348);
      uStack_3b8 = 0;
      uStack_3b0 = uStack_288;
      func_0x00010b8fd698();
      uStack_380 = 0;
      func_0x00010b8fe3fc(3);
      FUN_10b900bd0(uVar7,auStack_358,&dStack_388,uStack_2a0);
      func_0x00010b8fe18c();
      func_0x000104bddf60(uStack_348);
      func_0x000104bddf60(uStack_340);
      func_0x00010b8f68e4(&lStack_330);
    }
  }
  return;
}



/* Entry: 10b8ed0b0; end: 10b8ed213;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8ed0b0(undefined1 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  int extraout_w9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long lVar6;
  long *unaff_x22;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  double dStack_288;
  undefined8 uStack_280;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_1b8;
  undefined **ppuStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined8 auStack_138 [6];
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [112];
  undefined1 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar5 = param_2;
  func_0x00010b8fd3e0();
  uStack_58 = extraout_x8;
  func_0x00010b8fd5f8(&lStack_148);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fd8f4();
    puStack_108 = (undefined8 *)0x0;
    puStack_68 = param_1;
    puStack_60 = puVar5;
    FUN_10b8e5870(auStack_d8,&puStack_108);
    unaff_x21 = puStack_108;
    func_0x000105276914();
    unaff_x22 = (long *)*param_2;
    func_0x00010b8fde6c();
    puVar5 = unaff_x21 + 1;
    *puVar5 = 1;
    *unaff_x21 = &PTR_FUN_110d73b80;
    if (lStack_148 != 0) {
      do {
        func_0x00010b8fd810();
      } while (extraout_w10 != 0);
    }
    unaff_x21[2] = lStack_148;
    func_0x00010b8fea6c();
    FUN_10b90145c(auStack_140,unaff_x22,&puStack_68);
    puStack_108 = auStack_138;
    uStack_100 = 0;
    uStack_f8 = 1;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puStack_f0 = auStack_140;
    FUN_10b9a3a64(unaff_x21 + 3,&puStack_108);
    func_0x00010b8fdd60();
    func_0x0001080e07a8(unaff_x21 + 6,unaff_x22,&puStack_68);
    do {
      func_0x00010b8fdb60();
    } while (extraout_w9 != 0);
    puStack_108 = unaff_x21;
    (**(code **)(*unaff_x22 + 0x70))(unaff_x22,&puStack_108,param_2[3]);
    func_0x0001080e0c4c(puStack_108);
    do {
      func_0x00010b8fe9cc();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar2) {
        *puVar5 = extraout_x8_01;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010b8fd8d8();
    }
    param_1 = auStack_d8;
    func_0x00010b8e58cc();
  }
  func_0x00010b8fd9e0();
  func_0x00010b8fd3bc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plStack_180 = unaff_x22;
  puStack_178 = unaff_x21;
  puStack_170 = param_2;
  func_0x00010b8fd9d4();
  func_0x00010b8fd3f4();
  FUN_10b9a77a8();
  FUN_10b9a7c50();
  uStack_1b8 = 0x10b8f68b0;
  ppuStack_1b0 = &PTR_FUN_110d73680;
  puStack_1a8 = param_1;
  (**(code **)(*(long *)param_2[0x6c] + 0x30))((long *)param_2[0x6c],&uStack_1b8,30000000000);
  func_0x00010b8fd640(ppuStack_1b0);
  FUN_10b8dba18(extraout_x8_02,*unaff_x19,param_1);
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b8fda54(extraout_x8_03);
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_04 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    lStack_228 = 0;
    lStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    FUN_10b9a77a8();
    FUN_10b9a7cac(&dStack_288);
    func_0x00010b8fe770();
    func_0x00010b8f68e4(&dStack_288);
    if (lStack_230 != lStack_228) {
      FUN_10b8f69d8(lStack_230,lStack_228,LZCOUNT((lStack_228 - lStack_230) / 0x38) << 1 ^ 0x7e,1);
    }
    lVar3 = lStack_228;
    uStack_240 = 0;
    uStack_238 = 0;
    for (lVar6 = lStack_230; lVar6 != lVar3; lVar6 = lVar6 + 0x38) {
      func_0x000107c31084();
      func_0x000107c31080(&uStack_2b8);
      FUN_10b9a8e18(&dStack_288,&uStack_2b8);
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      func_0x00010b8fd9e0();
      dStack_288 = (double)(*(long *)(lVar6 + 0x18) / 1000);
      uStack_280._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      dStack_288 = (double)(*(long *)(lVar6 + 0x20) / 1000);
      uStack_280._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      uStack_280 = CONCAT62(uStack_280._2_6_,4);
      dStack_288 = (double)CONCAT44(dStack_288._4_4_,*(undefined4 *)(lVar6 + 0x28));
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
    }
    func_0x00010b9abf6c(&uStack_248,&uStack_240);
    uVar4 = uStack_1b8;
    func_0x00010b9a8f84(auStack_258,&uStack_248);
    uStack_2b8 = 0;
    uStack_2b0 = uStack_188;
    func_0x00010b8fd698();
    uStack_280 = 0;
    func_0x00010b8fe3fc(3);
    FUN_10b900bd0(uVar4,auStack_258,&dStack_288,uStack_1a0);
    func_0x00010b8fe18c();
    func_0x000104bddf60(uStack_248);
    func_0x000104bddf60(uStack_240);
    func_0x00010b8f68e4(&lStack_230);
  }
  return;
}



/* Entry: 10b8ed214; end: 10b8ed2a7;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8ed214(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_168;
  undefined8 uStack_160;
  double dStack_138;
  undefined8 uStack_130;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  func_0x00010b8fd9d4();
  func_0x00010b8fd3f4();
  FUN_10b9a77a8();
  FUN_10b9a7c50();
  uStack_68 = 0x10b8f68b0;
  ppuStack_60 = &PTR_FUN_110d73680;
  uStack_58 = param_1;
  (**(code **)(**(long **)(unaff_x20 + 0x360) + 0x30))
            (*(long **)(unaff_x20 + 0x360),&uStack_68,30000000000);
  func_0x00010b8fd640(ppuStack_60);
  FUN_10b8dba18(extraout_x8,*unaff_x19,param_1);
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fda54(extraout_x8_00);
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      lStack_d8 = 0;
      lStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      FUN_10b9a77a8();
      FUN_10b9a7cac(&dStack_138);
      func_0x00010b8fe770();
      func_0x00010b8f68e4(&dStack_138);
      if (lStack_e0 != lStack_d8) {
        FUN_10b8f69d8(lStack_e0,lStack_d8,LZCOUNT((lStack_d8 - lStack_e0) / 0x38) << 1 ^ 0x7e,1);
      }
      lVar1 = lStack_d8;
      uStack_f0 = 0;
      uStack_e8 = 0;
      for (lVar3 = lStack_e0; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
        func_0x000107c31084();
        func_0x000107c31080(&uStack_168);
        FUN_10b9a8e18(&dStack_138,&uStack_168);
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        func_0x00010b8fd9e0();
        dStack_138 = (double)(*(long *)(lVar3 + 0x18) / 1000);
        uStack_130._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        dStack_138 = (double)(*(long *)(lVar3 + 0x20) / 1000);
        uStack_130._0_2_ = 6;
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
        uStack_130 = CONCAT62(uStack_130._2_6_,4);
        dStack_138 = (double)CONCAT44(dStack_138._4_4_,*(undefined4 *)(lVar3 + 0x28));
        func_0x00010b8fd940();
        func_0x00010b8fe0f0();
      }
      func_0x00010b9abf6c(&uStack_f8,&uStack_f0);
      uVar2 = uStack_68;
      func_0x00010b9a8f84(auStack_108,&uStack_f8);
      uStack_168 = 0;
      uStack_160 = uStack_38;
      func_0x00010b8fd698();
      uStack_130 = 0;
      func_0x00010b8fe3fc(3);
      FUN_10b900bd0(uVar2,auStack_108,&dStack_138,uStack_50);
      func_0x00010b8fe18c();
      func_0x000104bddf60(uStack_f8);
      func_0x000104bddf60(uStack_f0);
      func_0x00010b8f68e4(&lStack_e0);
    }
    return;
  }
  return;
}



/* Entry: 10b8ed2a8; end: 10b8ed2b3;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed2f8) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed370) */
/* WARNING: Removing unreachable block (ram,0x00010b8ed37c) */

void FUN_10b8ed2a8(undefined8 param_1)

{
  long lVar1;
  ulong extraout_x8;
  undefined8 *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b8fda54(param_1);
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_10b9a77a8();
    FUN_10b9a7cac(&dStack_c8);
    func_0x00010b8fe770();
    func_0x00010b8f68e4(&dStack_c8);
    if (lStack_70 != lStack_68) {
      FUN_10b8f69d8(lStack_70,lStack_68,LZCOUNT((lStack_68 - lStack_70) / 0x38) << 1 ^ 0x7e,1);
    }
    lVar1 = lStack_68;
    uStack_80 = 0;
    uStack_78 = 0;
    for (lVar2 = lStack_70; lVar2 != lVar1; lVar2 = lVar2 + 0x38) {
      func_0x000107c31084();
      func_0x000107c31080(&uStack_f8);
      FUN_10b9a8e18(&dStack_c8,&uStack_f8);
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      func_0x00010b8fd9e0();
      dStack_c8 = (double)(*(long *)(lVar2 + 0x18) / 1000);
      uStack_c0._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      dStack_c8 = (double)(*(long *)(lVar2 + 0x20) / 1000);
      uStack_c0._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      uStack_c0 = CONCAT62(uStack_c0._2_6_,4);
      dStack_c8 = (double)CONCAT44(dStack_c8._4_4_,*(undefined4 *)(lVar2 + 0x28));
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
    }
    func_0x00010b9abf6c(&uStack_88,&uStack_80);
    uVar3 = *unaff_x20;
    func_0x00010b9a8f84(auStack_98,&uStack_88);
    uStack_f0 = unaff_x20[6];
    uStack_f8 = 0;
    func_0x00010b8fd698();
    uStack_c0 = 0;
    func_0x00010b8fe3fc(3);
    FUN_10b900bd0(uVar3,auStack_98,&dStack_c8,unaff_x20[3]);
    func_0x00010b8fe18c();
    func_0x000104bddf60(uStack_88);
    func_0x000104bddf60(uStack_80);
    func_0x00010b8f68e4(&lStack_70);
  }
  return;
}



/* Entry: 10b8ed2b4; end: 10b8ed4ab;  */

void FUN_10b8ed2b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  ulong extraout_x8;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  func_0x00010b8fda54();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    if (param_3 == 0) {
      FUN_10b9a77a8();
      FUN_10b9a7cac(&dStack_c8);
      func_0x00010b8fe770();
    }
    else {
      FUN_10b9a77a8();
      FUN_10b9a7cf0(&dStack_c8);
      func_0x00010b8fe770();
      uStack_58 = uStack_b0;
    }
    func_0x00010b8f68e4(&dStack_c8);
    if (lStack_70 != lStack_68) {
      FUN_10b8f69d8(lStack_70,lStack_68,LZCOUNT((lStack_68 - lStack_70) / 0x38) << 1 ^ 0x7e,1);
    }
    uStack_80 = 0;
    uStack_78 = 0;
    lVar3 = lStack_70;
    lVar2 = lStack_68;
    if (param_3 != 0) {
      uVar1 = uStack_58;
      if (0x1ffffffffffffe < uStack_58) {
        uVar1 = 0x1fffffffffffff;
      }
      dStack_c8 = (double)uVar1;
      uStack_c0 = CONCAT62(uStack_c0._2_6_,6);
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      lVar3 = lStack_70;
      lVar2 = lStack_68;
    }
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
      func_0x000107c31084();
      func_0x000107c31080(&uStack_f8);
      FUN_10b9a8e18(&dStack_c8,&uStack_f8);
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      func_0x00010b8fd9e0();
      dStack_c8 = (double)(*(long *)(lVar3 + 0x18) / 1000);
      uStack_c0._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      dStack_c8 = (double)(*(long *)(lVar3 + 0x20) / 1000);
      uStack_c0._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      uStack_c0 = CONCAT62(uStack_c0._2_6_,4);
      dStack_c8 = (double)CONCAT44(dStack_c8._4_4_,*(undefined4 *)(lVar3 + 0x28));
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
    }
    func_0x00010b9abf6c(&uStack_88,&uStack_80);
    uVar4 = *unaff_x20;
    func_0x00010b9a8f84(auStack_98,&uStack_88);
    uStack_f0 = unaff_x20[6];
    uStack_f8 = 0;
    func_0x00010b8fd698();
    uStack_c0 = 0;
    func_0x00010b8fe3fc(3);
    FUN_10b900bd0(uVar4,auStack_98,&dStack_c8,unaff_x20[3]);
    func_0x00010b8fe18c();
    func_0x000104bddf60(uStack_88);
    func_0x000104bddf60(uStack_80);
    func_0x00010b8f68e4(&lStack_70);
  }
  return;
}



/* Entry: 10b8ed4ac; end: 10b8ed4b7;  */

/* WARNING: Removing unreachable block (ram,0x00010b8ed320) */

void FUN_10b8ed4ac(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong extraout_x8;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  func_0x00010b8fda54(param_1);
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    lStack_68 = 0;
    lStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    FUN_10b9a77a8();
    FUN_10b9a7cf0(&dStack_c8);
    func_0x00010b8fe770();
    uStack_58 = uStack_b0;
    func_0x00010b8f68e4(&dStack_c8);
    if (lStack_70 != lStack_68) {
      FUN_10b8f69d8(lStack_70,lStack_68,LZCOUNT((lStack_68 - lStack_70) / 0x38) << 1 ^ 0x7e,1);
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uVar1 = uStack_58;
    if (0x1ffffffffffffe < uStack_58) {
      uVar1 = 0x1fffffffffffff;
    }
    dStack_c8 = (double)uVar1;
    uStack_c0 = CONCAT62(uStack_c0._2_6_,6);
    func_0x00010b8fd940();
    func_0x00010b8fe0f0();
    lVar2 = lStack_68;
    for (lVar3 = lStack_70; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
      func_0x000107c31084();
      func_0x000107c31080(&uStack_f8);
      FUN_10b9a8e18(&dStack_c8,&uStack_f8);
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      func_0x00010b8fd9e0();
      dStack_c8 = (double)(*(long *)(lVar3 + 0x18) / 1000);
      uStack_c0._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      dStack_c8 = (double)(*(long *)(lVar3 + 0x20) / 1000);
      uStack_c0._0_2_ = 6;
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
      uStack_c0 = CONCAT62(uStack_c0._2_6_,4);
      dStack_c8 = (double)CONCAT44(dStack_c8._4_4_,*(undefined4 *)(lVar3 + 0x28));
      func_0x00010b8fd940();
      func_0x00010b8fe0f0();
    }
    func_0x00010b9abf6c(&uStack_88,&uStack_80);
    uVar4 = *unaff_x20;
    func_0x00010b9a8f84(auStack_98,&uStack_88);
    uStack_f0 = unaff_x20[6];
    uStack_f8 = 0;
    func_0x00010b8fd698();
    uStack_c0 = 0;
    func_0x00010b8fe3fc(3);
    FUN_10b900bd0(uVar4,auStack_98,&dStack_c8,unaff_x20[3]);
    func_0x00010b8fe18c();
    func_0x000104bddf60(uStack_88);
    func_0x000104bddf60(uStack_80);
    func_0x00010b8f68e4(&lStack_70);
  }
  return;
}



/* Entry: 10b8ed4b8; end: 10b8ed893;  */

void FUN_10b8ed4b8(undefined8 param_1)

{
  int extraout_w8;
  ulong extraout_x8;
  long *aplStack_60 [3];
  undefined1 auStack_48 [8];
  
  func_0x00010b8feab4();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fda80(auStack_48);
    func_0x00010b8e5f24();
    func_0x00010b8fd91c();
    if (extraout_w8 == 1) {
      func_0x00010b8ead94(aplStack_60);
      if (aplStack_60[0] != (long *)0x0) {
        (**(code **)(*aplStack_60[0] + 0x40))(aplStack_60[0],param_1,auStack_48);
      }
      func_0x00010b8fe2fc();
    }
    func_0x00010b8fd2ec();
    func_0x00010b8fdbd0();
  }
  return;
}



/* Entry: 10b8ed894; end: 10b8ed8ab;  */

void FUN_10b8ed894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  pcVar3 = (code *)0x10b8f74d8;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar2 = param_2;
    param_2 = param_1;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x00010b8fd430(param_2,uVar2,param_3);
    unaff_x19 = puVar1 + -0x58;
    *(undefined8 *)(puVar1 + -0x58) = 0x10b8fba5c;
    *(undefined ***)(puVar1 + -0x50) = &PTR_FUN_110d73c68;
    *(code **)(puVar1 + -0x48) = pcVar3;
    FUN_10b8edbac();
    func_0x00010b8fd664();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8ed8fc;
    ___stack_chk_fail();
    pcVar3 = FUN_10b8f7520;
    puVar1 = puVar1 + -0x60;
    param_1 = extraout_x8;
    param_3 = uVar2;
  }
  return;
}



/* Entry: 10b8ed8ac; end: 10b8ed8fb;  */

void FUN_10b8ed8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_2;
    param_2 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fd430(param_2,uVar1,param_3);
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10b8fba5c;
    *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_FUN_110d73c68;
    *(code **)((long)register0x00000008 + -0x48) = param_4;
    FUN_10b8edbac();
    func_0x00010b8fd664();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8ed8fc;
    ___stack_chk_fail();
    param_4 = FUN_10b8f7520;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = extraout_x8;
    param_3 = uVar1;
  }
  return;
}



/* Entry: 10b8ed8fc; end: 10b8ed92b;  */

void FUN_10b8ed8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  code *pcVar1;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    pcVar1 = FUN_10b8f7520;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fd430(param_1,param_2,param_3);
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10b8fba5c;
    *(undefined ***)((long)register0x00000008 + -0x50) = &PTR_FUN_110d73c68;
    *(code **)((long)register0x00000008 + -0x48) = pcVar1;
    FUN_10b8edbac();
    func_0x00010b8fd664();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8ed8fc;
    param_3 = param_2;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = param_1;
    param_1 = extraout_x8;
  }
  return;
}



/* Entry: 10b8ed92c; end: 10b8eda63;  */

void FUN_10b8ed92c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_130 [8];
  code *pcStack_128;
  undefined **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  long alStack_90 [3];
  undefined8 *puStack_78;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined4 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 *puVar4;
  
  func_0x00010b8fd358();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  puVar5 = param_1;
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b8fda80();
    func_0x00010b8e5e9c();
    uStack_6c = SUB84(puVar5,0);
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) != 0) {
      FUN_10b8c43b4(&puStack_78,*(undefined8 *)(unaff_x21 + 0x90),param_1);
      if (puStack_78 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
        func_0x00010b8fd2ec(0);
      }
      else {
        func_0x00010b8fe294(alStack_90);
        if (alStack_90[0] == 0) {
          func_0x00010b8fd2ec();
        }
        else {
          uStack_98 = 1;
          uStack_a0 = 0;
          pcStack_68 = FUN_10b8fb624;
          ppuStack_60 = &PTR_FUN_110d73be8;
          puStack_58 = &uStack_6c;
          puStack_50 = &uStack_a0;
          func_0x00010b8fe960();
          func_0x00010b8fe8b4();
          func_0x00010b8fd6f8(ppuStack_60);
          uStack_c8 = unaff_x20[6];
          uStack_d0 = 0;
          func_0x00010b8fd9e8(*unaff_x20);
          ppuStack_60 = (undefined **)0x0;
          puStack_58 = (undefined4 *)CONCAT71(puStack_58._1_7_,3);
          puStack_50 = (undefined8 *)0x0;
          uStack_48 = 0;
          uStack_40 = 0;
          param_1 = &uStack_a0;
          pcStack_68 = (code *)&uStack_d0;
          FUN_10b900bd0();
          func_0x00010b8fe118();
        }
        func_0x00010b8fdebc(alStack_90);
        puVar5 = puStack_78;
      }
      func_0x000105276914();
      goto LAB_10b8eda48;
    }
  }
  param_1 = param_2;
  func_0x00010b8fd2ec();
LAB_10b8eda48:
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar6 = extraout_x8_02;
    func_0x00010b8fd430(extraout_x8_02,puVar5,param_1);
    pcStack_128 = FUN_10b8fbae8;
    ppuStack_120 = &PTR_FUN_110d73c88;
    pcStack_118 = FUN_10b8f7558;
    FUN_10b8edbac();
    func_0x00010b8fd664();
    func_0x00010b8fd3a4();
    if (!(bool)in_ZR) {
      pcVar9 = FUN_10b8edac8;
      ___stack_chk_fail();
      pcVar8 = FUN_10b8f774c;
      puVar1 = auStack_130;
      puVar2 = extraout_x8_03;
      puVar3 = &uStack_d0;
      while( true ) {
        puVar7 = puVar6;
        puVar6 = puVar2;
        puVar4 = puVar1;
        *(undefined8 **)(puVar4 + -0x20) = unaff_x20;
        *(undefined1 **)(puVar4 + -0x18) = (undefined1 *)((long)puVar3 + -0x58);
        *(undefined1 **)(puVar4 + -0x10) = (undefined1 *)((long)puVar3 + -0x10);
        *(code **)(puVar4 + -8) = pcVar9;
        func_0x00010b8fd430(puVar6,puVar7,puVar5);
        *(undefined8 *)(puVar4 + -0x58) = 0x10b8fba5c;
        *(undefined ***)(puVar4 + -0x50) = &PTR_FUN_110d73c68;
        *(code **)(puVar4 + -0x48) = pcVar8;
        FUN_10b8edbac();
        func_0x00010b8fd664();
        func_0x00010b8fd3a4();
        if ((bool)in_ZR) break;
        pcVar9 = FUN_10b8ed8fc;
        ___stack_chk_fail();
        pcVar8 = FUN_10b8f7520;
        puVar1 = puVar4 + -0x60;
        puVar2 = extraout_x8;
        puVar5 = puVar7;
        puVar3 = (undefined8 *)puVar4;
      }
    }
    return;
  }
  return;
}



/* Entry: 10b8eda64; end: 10b8edac7;  */

void FUN_10b8eda64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 unaff_x20;
  code *pcVar7;
  undefined1 auStack_60 [8];
  code *pcStack_58;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined1 *puVar4;
  
  func_0x00010b8fd430(param_1,param_2,param_3);
  pcStack_58 = FUN_10b8fbae8;
  ppuStack_50 = &PTR_FUN_110d73c88;
  pcStack_48 = FUN_10b8f7558;
  FUN_10b8edbac();
  func_0x00010b8fd664();
  func_0x00010b8fd3a4();
  if (!(bool)in_ZR) {
    pcVar7 = FUN_10b8edac8;
    ___stack_chk_fail();
    pcVar6 = FUN_10b8f774c;
    puVar1 = auStack_60;
    uVar2 = extraout_x8_00;
    puVar3 = (undefined1 *)register0x00000008;
    while( true ) {
      uVar5 = param_1;
      param_1 = uVar2;
      puVar4 = puVar1;
      *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
      *(undefined1 **)(puVar4 + -0x18) = puVar3 + -0x58;
      *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x10;
      *(code **)(puVar4 + -8) = pcVar7;
      func_0x00010b8fd430(param_1,uVar5,param_2);
      *(undefined8 *)(puVar4 + -0x58) = 0x10b8fba5c;
      *(undefined ***)(puVar4 + -0x50) = &PTR_FUN_110d73c68;
      *(code **)(puVar4 + -0x48) = pcVar6;
      FUN_10b8edbac();
      func_0x00010b8fd664();
      func_0x00010b8fd3a4();
      if ((bool)in_ZR) break;
      pcVar7 = FUN_10b8ed8fc;
      ___stack_chk_fail();
      pcVar6 = FUN_10b8f7520;
      puVar1 = puVar4 + -0x60;
      uVar2 = extraout_x8;
      param_2 = uVar5;
      puVar3 = puVar4;
    }
  }
  return;
}



/* Entry: 10b8edac8; end: 10b8edadf;  */

void FUN_10b8edac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  pcVar3 = FUN_10b8f774c;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar2 = param_2;
    param_2 = param_1;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x00010b8fd430(param_2,uVar2,param_3);
    unaff_x19 = puVar1 + -0x58;
    *(undefined8 *)(puVar1 + -0x58) = 0x10b8fba5c;
    *(undefined ***)(puVar1 + -0x50) = &PTR_FUN_110d73c68;
    *(code **)(puVar1 + -0x48) = pcVar3;
    FUN_10b8edbac();
    func_0x00010b8fd664();
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8ed8fc;
    ___stack_chk_fail();
    pcVar3 = FUN_10b8f7520;
    puVar1 = puVar1 + -0x60;
    param_1 = extraout_x8;
    param_3 = uVar2;
  }
  return;
}



/* Entry: 10b8edae0; end: 10b8edbab;  */

/* WARNING: Possible PIC construction at 0x00010b8edb6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8edb70) */
/* WARNING: Removing unreachable block (ram,0x00010b8edb84) */
/* WARNING: Removing unreachable block (ram,0x00010b8edb7c) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd8e8) */

void FUN_10b8edae0(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_50;
  
  plVar1 = param_2;
  func_0x00010b8fd408();
  lStack_60 = *(long *)(*plVar1 + 8);
  if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      lStack_60 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b8fe57c(auStack_80);
  lStack_68 = param_2[1];
  lStack_70 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8fde00(0x10b8f7780);
  func_0x00010b8f7848();
  func_0x00010b8fde88();
  func_0x00010b8fd640(uStack_50);
  func_0x00010b8fdf68(auStack_80);
  FUN_10b8e552c();
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*unaff_x19 != (long *)0x0)) {
    (**(code **)(*(long *)*unaff_x19 + 0x18))();
  }
  return;
}



/* Entry: 10b8edbac; end: 10b8ede5f;  */

code *** FUN_10b8edbac(undefined8 param_1,code **param_2,code ***param_3,long *param_4)

{
  undefined1 in_ZR;
  code ***pppcVar1;
  code ***pppcVar2;
  code ***pppcVar3;
  long *plVar4;
  long lVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  code **ppcVar6;
  int extraout_w10;
  code ***unaff_x19;
  code **ppcVar7;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  code **ppcStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long alStack_e8 [6];
  code ***pppcStack_b8;
  long lStack_b0;
  code *pcStack_a0;
  code **ppcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  
  pppcVar1 = param_3;
  func_0x00010b8fd408();
  uStack_68 = extraout_x8;
  func_0x00010b8e5e9c(pppcVar1,0);
  func_0x00010b8fd91c();
  pppcVar2 = pppcVar1;
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010b8fda80();
    func_0x00010b8e5e9c();
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) != 0) {
      ppcVar6 = param_3[2];
      ppcVar7 = *param_3;
      pppcVar3 = param_3;
      lVar5 = (long)ppcVar6 + -1;
      func_0x00010b8e5ce4();
      ppcStack_98 = param_3[6];
      pcStack_a0 = (code *)0x0;
      plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      ppcStack_110 = &pcStack_a0;
      lStack_108 = 0;
      lStack_100 = CONCAT71(lStack_100._1_7_,4);
      lStack_f8 = 0;
      alStack_e8[0]._0_1_ = 0;
      lStack_f0 = (long)ppcVar6 + -1;
      pppcStack_b8 = pppcVar3;
      lStack_b0 = lVar5;
      FUN_10b8e143c(&lStack_120,ppcVar7,&pppcStack_b8,&ppcStack_110,param_3[3]);
      FUN_10b8c43b4(&lStack_128,param_2[0x12],pppcVar1);
      if (lStack_128 == 0) {
        func_0x000107c31084();
        pcStack_a0 = (code *)((ulong)pppcVar1 & 0xffffffff);
        ppcStack_98 = (code **)0x0;
        func_0x000107c2793c(&UNK_10f7cbecd);
        func_0x00010b8fe2e4();
        func_0x00010b8fdf18(auStack_130);
        FUN_10b99f560(&pcStack_a0,auStack_130);
        func_0x00010b8fd500();
        func_0x000104bda960(pcStack_a0);
        func_0x00010b8fdd60();
        pppcVar2 = &ppcStack_110;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      else {
        func_0x00010b8ead94(&pppcStack_b8,param_2);
        pppcVar3 = pppcStack_b8;
        if (pppcStack_b8 == (code ***)0x0) {
          func_0x000107c31084();
          pcStack_a0 = (code *)((ulong)pppcVar1 & 0xffffffff);
          ppcStack_98 = (code **)0x0;
          func_0x000107c2793c(&UNK_10f7cbeea);
          func_0x00010b8fe2e4();
          func_0x00010b8fdf18(auStack_138);
          FUN_10b99f560(&pcStack_a0,auStack_138);
          func_0x00010b8fd500();
          func_0x000104bda960(pcStack_a0);
          func_0x00010b8fd9e0();
          pppcVar2 = &ppcStack_110;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        }
        else {
          FUN_10b8e999c();
          lStack_100 = lStack_118;
          lStack_108 = lStack_120;
          ppcStack_110 = param_2;
          if (lStack_118 != 0) {
            do {
              func_0x00010b8fd9c4();
            } while (extraout_w10 != 0);
          }
          lStack_f8 = CONCAT44((int)pppcVar1,(int)pppcVar2);
          lStack_f0 = *param_4;
          plVar4 = alStack_e8;
          (**(code **)(param_4[1] + 0x10))(plVar4,param_4 + 1);
          pcStack_a0 = FUN_10b8fb69c;
          ppcStack_98 = (code **)&PTR_FUN_110d73c48;
          func_0x00010b8fde6c();
          ppcVar6 = ppcStack_110;
          ppcStack_110 = (code **)0x0;
          plVar4[1] = lStack_108;
          *plVar4 = (long)ppcVar6;
          plVar4[2] = lStack_100;
          lVar5 = lStack_f8;
          *(undefined8 *)((ulong)&ppcStack_110 | 8) = 0;
          ((undefined8 *)((ulong)&ppcStack_110 | 8))[1] = 0;
          plVar4[4] = lStack_f0;
          plVar4[3] = lVar5;
          (**(code **)(CONCAT71(alStack_e8[0]._1_7_,(undefined1)alStack_e8[0]) + 0x10))
                    (plVar4 + 5,alStack_e8);
          plStack_90 = plVar4;
          func_0x00010b8fe5b4((*pppcVar3)[4],pppcVar3,&lStack_128);
          func_0x00010b8fd804(ppcStack_98);
          pppcVar2 = &ppcStack_110;
          FUN_10b8ede60();
          func_0x00010b8fd2ec();
        }
        func_0x00010b8fdebc(&pppcStack_b8);
      }
      func_0x00010b8fe6b4();
      func_0x00010b8fe6d0();
      goto LAB_10b8ede34;
    }
  }
  func_0x00010b8fd2ec();
LAB_10b8ede34:
  func_0x00010b8fd3bc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fe394(pppcVar2[5]);
    FUN_10b8e552c(pppcVar2 + 1);
    func_0x00010b8fdf5c(pppcVar2);
    func_0x00010b8e8bd0();
    return unaff_x19;
  }
  return pppcVar2;
}



/* Entry: 10b8ede60; end: 10b8ede8f;  */

undefined8 FUN_10b8ede60(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b8fe394(*(undefined8 *)(param_1 + 0x28));
  FUN_10b8e552c(param_1 + 8);
  func_0x00010b8fdf5c(param_1);
  func_0x00010b8e8bd0();
  return unaff_x19;
}



/* Entry: 10b8ede90; end: 10b8ee01b;  */

void FUN_10b8ede90(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  ulong extraout_x8;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_168 [8];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  long lStack_48;
  undefined8 *puStack_40;
  
  func_0x00010b8fe280();
  func_0x00010b8fd3f4();
  uVar4 = *param_2;
  func_0x00010b8fd6ec();
  lStack_48 = param_1;
  puStack_40 = param_2;
  func_0x00010b8fd698();
  uStack_70 = 0;
  func_0x00010b8fe3fc(3);
  plVar1 = &lStack_48;
  FUN_10b9007a4(uVar4,plVar1,auStack_78,*(undefined8 *)(unaff_x19 + 0x18));
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = plVar1;
  func_0x00010b8fd3e0();
  lVar5 = *plVar2;
  func_0x00010b8fd6ec();
  func_0x00010b8fe0a8(auStack_120);
  if ((*(byte *)(plVar1[3] + 8) & 1) == 0) {
    func_0x00010b8fd79c(*(undefined8 *)(*plVar1 + 0x140));
  }
  else {
    func_0x00010b8fdc80();
    func_0x00010b8fdb20();
  }
  func_0x0001080e0bc0(auStack_108);
  func_0x00010b8fd38c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fd538();
    func_0x00010b8fd5f8(auStack_168);
    func_0x00010b8fd91c();
    if ((extraout_x8 & 1) == 0) {
      puVar3 = (undefined8 *)(*plVar1 + 0x140);
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x88);
      FUN_10b93c46c(uVar4,auStack_168);
      lVar5 = 0xc0;
      if ((int)uVar4 == 0) {
        lVar5 = 0xe0;
      }
      puVar3 = (undefined8 *)(*plVar1 + lVar5);
    }
    func_0x00010b8fea00(*puVar3);
    func_0x00010b8fd9e0();
    return;
  }
  return;
}



/* Entry: 10b8ee01c; end: 10b8ee18f;  */

long ******
FUN_10b8ee01c(long ******param_1,code ******param_2,undefined8 param_3,code ******param_4,
             undefined8 param_5,ulong param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long ******pppppplVar8;
  long *plVar9;
  code *****pppppcVar10;
  code ****ppppcVar11;
  code ******ppppppcVar12;
  code *pcVar13;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long ******extraout_x8_08;
  ulong extraout_x8_09;
  undefined8 extraout_x8_10;
  ulong extraout_x8_11;
  long extraout_x8_12;
  undefined8 extraout_x8_13;
  ulong extraout_x8_14;
  long ******extraout_x8_15;
  code *****extraout_x9;
  code *extraout_x9_00;
  code *****pppppcVar14;
  ulong uVar15;
  ulong *extraout_x9_01;
  int extraout_w10;
  ulong uVar16;
  code ****ppppcVar17;
  long unaff_x19;
  long *unaff_x20;
  long ******unaff_x21;
  long ******unaff_x22;
  long lVar18;
  code ******unaff_x23;
  long ******unaff_x25;
  code *****unaff_x26;
  long lVar19;
  long ******unaff_x27;
  code *****pppppcVar20;
  undefined8 unaff_x28;
  long *****ppppplVar21;
  undefined1 auStack_470 [8];
  undefined8 auStack_468 [2];
  byte bStack_458;
  undefined1 auStack_450 [16];
  code *****pppppcStack_440;
  long *****ppppplStack_438;
  long *****ppppplStack_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [16];
  undefined8 uStack_410;
  code ***apppcStack_408 [4];
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined4 uStack_3c0;
  long lStack_3b8;
  long *****ppppplStack_3b0;
  undefined8 uStack_3a8;
  long ****apppplStack_3a0 [11];
  undefined1 uStack_348;
  long ****apppplStack_340 [4];
  long *****ppppplStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  undefined1 auStack_300 [56];
  undefined1 uStack_2c8;
  undefined1 auStack_2b8 [32];
  long *****ppppplStack_298;
  ulong uStack_290;
  byte bStack_281;
  undefined8 uStack_228;
  undefined8 uStack_210;
  long *****ppppplStack_208;
  code ****ppppcStack_200;
  long *****ppppplStack_1f8;
  code *****pppppcStack_1e8;
  long *****ppppplStack_1e0;
  long *****ppppplStack_1d8;
  long ***ppplStack_1b0;
  long lStack_1a8;
  long *****ppppplStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 auStack_150 [16];
  long ****pppplStack_140;
  long lStack_138;
  code ****ppppcStack_130;
  code ****ppppcStack_128;
  undefined **ppuStack_120;
  long *****ppppplStack_118;
  long ****pppplStack_110;
  long lStack_108;
  long *****ppppplStack_f8;
  code *****pppppcStack_f0;
  undefined8 uStack_e8;
  code *****pppppcStack_d8;
  long *****ppppplStack_d0;
  long *****ppppplStack_c8;
  code ****ppppcStack_a0;
  long *****ppppplStack_98;
  code *****pppppcStack_90;
  code *****pppppcStack_88;
  code *****pppppcStack_80;
  undefined8 uStack_78;
  long *****ppppplStack_70;
  long ****pppplStack_68;
  long *****ppppplStack_60;
  code *****pppppcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8fd358();
  uStack_48 = extraout_x8;
  func_0x00010b8fd5f8(&pppppcStack_88);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fda80(&pppppcStack_90);
    func_0x00010b8e5f24();
    func_0x00010b8fd91c();
    pppppplVar8 = param_1;
    if ((extraout_x8_01 & 1) == 0) {
LAB_10b8ee0e8:
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fe358();
      func_0x00010b8e5dc4();
      func_0x00010b8fd91c();
      pppppplVar8 = param_1;
      if ((extraout_x8_02 & 1) == 0) goto LAB_10b8ee0e8;
      unaff_x23 = &pppppcStack_88;
      FUN_10b93c510(&ppppplStack_98,unaff_x21[0x11],&pppppcStack_88);
      unaff_x21 = (long ******)ppppplStack_98;
      func_0x00010b92dd78();
      if ((int)unaff_x21 == 0) {
        unaff_x21 = (long ******)&pppplStack_68;
        FUN_10b92ce64(&pppplStack_68,ppppplStack_98,&pppppcStack_90);
        in_ZR = (long *****)pppplStack_68 == (long *****)0x1;
        if ((bool)in_ZR) {
          if ((int)param_1 == 0) {
            param_4 = (code ******)unaff_x20[3];
            param_2 = (code ******)0x3;
            FUN_10b9012e0(*unaff_x20,3,&ppppplStack_60);
          }
          else {
            pppppcStack_80 = pppppcStack_58;
            uStack_78 = uStack_50;
            func_0x00010b8fdb80();
            param_2 = &pppppcStack_80;
            func_0x00010b8fdb20();
          }
        }
        else {
          param_2 = (code ******)&ppppplStack_60;
          func_0x00010b8fd500();
        }
        func_0x0001080c5c8c(&pppplStack_68);
      }
      else {
        func_0x000107c31084();
        func_0x00010b8fe15c();
        pppppcStack_80 = (code *****)unaff_x23;
        uStack_78 = extraout_x8_03;
        func_0x00010b8fde38();
        param_4 = &pppppcStack_80;
        func_0x00010b8fdf54(&pppplStack_68);
        func_0x00010b8fde60(&ppppcStack_a0);
        FUN_10b99f560(&pppppcStack_80,&ppppcStack_a0);
        param_2 = &pppppcStack_80;
        func_0x00010b8fd500();
        func_0x00010b8fe620();
        func_0x00010b8fe038();
        func_0x00010b8fe0f8();
      }
      pppppplVar8 = (long ******)ppppplStack_98;
      func_0x0001080d5af4();
      unaff_x22 = param_1;
    }
    func_0x00010b8fdd60();
    param_1 = pppppplVar8;
  }
  func_0x00010b8fdbd0();
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcVar13 = FUN_10b8ee190;
  func_0x00010b8fe46c();
  func_0x00010b8fd358();
  func_0x00010b8fd5f8(&pppplStack_68);
  func_0x00010b8fd91c();
  if ((extraout_x8_05 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    unaff_x22 = (long ******)&pppplStack_68;
    FUN_10b93c510(&ppppplStack_70,unaff_x21[0x11],&pppplStack_68);
    pppppplVar8 = (long ******)ppppplStack_70;
    func_0x00010b92dd78();
    if ((int)pppppplVar8 == 0) {
      FUN_10b92d230(&pppppcStack_90,ppppplStack_70);
      param_2 = (code ******)((long)pppppcStack_88 - (long)pppppcStack_90 >> 3);
      func_0x00010b8fdb90(*unaff_x20);
      unaff_x22 = (long ******)&stack0xffffffffffffffc8;
      (**(code **)(extraout_x8_06 + 0x88))(&stack0xffffffffffffffc8);
      func_0x00010b8fd91c();
      if ((extraout_x8_07 & 1) == 0) {
        func_0x00010b8fd2ec();
      }
      else {
        unaff_x21 = (long ******)0x0;
        unaff_x25 = &ppppplStack_60;
        unaff_x26 = (code *****)&UNK_10f7d0ef0;
        unaff_x23 = (code ******)pppppcStack_90;
        do {
          in_ZR = unaff_x23 == (code ******)pppppcStack_88;
          if ((bool)in_ZR) {
            param_2 = (code ******)&stack0xffffffffffffffc8;
            func_0x00010b8fddac();
            break;
          }
          if (*unaff_x23 == (code *****)0x0) {
            ppppplStack_98 = (long *****)0x0;
            ppppcStack_a0 = (code ****)unaff_x26;
          }
          else {
            func_0x00010b8fdc0c();
            ppppplStack_98 = (long *****)extraout_x8_08;
            ppppcStack_a0 = (code ****)extraout_x9;
          }
          plVar9 = (long *)*unaff_x20;
          func_0x00010b8fdb80();
          param_2 = (code ******)&ppppcStack_a0;
          (*extraout_x9_00)(&ppppplStack_60);
          func_0x00010b8feafc();
          if ((bool)in_ZR) {
            pppppplVar8 = (long ******)((long)unaff_x21 + 1);
            param_2 = (code ******)&stack0xffffffffffffffd0;
            param_4 = &pppppcStack_58;
            (**(code **)(*plVar9 + 0x108))();
            func_0x00010b8fd91c();
            pcVar13 = (code *)unaff_x21;
            if ((extraout_x8_09 & 1) == 0) {
              plVar9 = (long *)*unaff_x20;
              unaff_x21 = pppppplVar8;
              goto LAB_10b8ee2fc;
            }
            unaff_x28 = 1;
            unaff_x21 = pppppplVar8;
          }
          else {
LAB_10b8ee2fc:
            unaff_x28 = 0;
            func_0x00010b8fd79c(plVar9[0x28]);
          }
          func_0x00010b8fddf8();
          unaff_x23 = unaff_x23 + 1;
          unaff_x27 = unaff_x21;
        } while ((int)unaff_x28 != 0);
      }
      func_0x00010b8fe194();
      func_0x000104bfe1e0(&pppppcStack_90);
    }
    else {
      func_0x000107c31084();
      func_0x00010b8fe15c();
      ppppplStack_60 = (long *****)unaff_x22;
      func_0x00010b8fde38();
      param_4 = (code ******)&ppppplStack_60;
      func_0x00010b8fdf54(&stack0xffffffffffffffc8);
      func_0x00010b8fdf18(&uStack_78);
      FUN_10b99f560(&ppppplStack_60,&uStack_78);
      param_2 = (code ******)&ppppplStack_60;
      func_0x00010b8fd500();
      func_0x00010b8fe660();
      func_0x000107c278f8(uStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0xffffffffffffffc8)
      ;
      unaff_x21 = pppppplVar8;
    }
    func_0x0001080d5af4();
    param_1 = (long ******)ppppplStack_70;
  }
  func_0x00010b8fe184();
  func_0x00010b8fd3bc(extraout_x8_04);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pppppcStack_d8 = (code *****)unaff_x23;
  ppppplStack_d0 = (long *****)unaff_x22;
  ppppplStack_c8 = (long *****)unaff_x21;
  func_0x00010b8fd358();
  uStack_e8 = extraout_x8_10;
  func_0x00010b8fd5f8(&ppppcStack_130);
  func_0x00010b8fd91c();
  iVar7 = (int)param_5;
  if ((extraout_x8_11 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    pppplStack_140 = (long ****)0x0;
    lStack_138 = 0;
    func_0x00010b8fd8f4();
    ppppplStack_f8 = (long *****)param_1;
    pppppcStack_f0 = (code *****)param_2;
    func_0x00010b8fe014();
    iVar6 = (int)param_1;
    param_2 = (code ******)&ppppplStack_f8;
    (**(code **)(extraout_x8_12 + 0x180))();
    iVar7 = (int)param_5;
    if (iVar6 == 0) {
      lStack_1a8 = unaff_x20[6];
      ppplStack_1b0 = (long ***)0x0;
      func_0x00010b8fd9e8(*unaff_x20);
      uStack_178 = 0;
      uStack_170 = CONCAT71(uStack_170._1_7_,4);
      uStack_168 = 0;
      uStack_160 = 1;
      uStack_158 = 0;
      ppppplStack_180 = (long *****)&ppplStack_1b0;
      FUN_10b8e143c(auStack_150);
      FUN_10b8e6bb8(&pppplStack_140,auStack_150);
      FUN_10b8e552c(auStack_150);
LAB_10b8ee420:
      iVar7 = (int)param_5;
      unaff_x22 = &ppppplStack_180;
      ppppplVar21 = (long *****)pppplStack_140;
      lVar18 = lStack_138;
      ppppplStack_180 = (long *****)unaff_x21;
      if (lStack_138 != 0) {
        do {
          func_0x00010b8fd9c4();
          iVar7 = (int)param_5;
        } while (extraout_w10 != 0);
      }
      ppppcStack_128 = (code ****)FUN_10b8fbb84;
      ppuStack_120 = &PTR_DAT_110d73cc8;
      unaff_x23 = (code ******)&ppppcStack_128;
      uStack_178 = 0;
      uStack_170 = 0;
      param_2 = (code ******)&ppppcStack_130;
      param_4 = (code ******)&ppppcStack_128;
      pcVar13 = (code *)0x0;
      ppppplStack_118 = (long *****)unaff_x21;
      pppplStack_110 = (long ****)ppppplVar21;
      lStack_108 = lVar18;
      FUN_10b93d234();
      func_0x00010b8fd604(ppuStack_120);
      FUN_10b8e552c(&uStack_178);
    }
    else if ((*(byte *)((long)unaff_x21[0x11] + 0x6c) & 1) != 0) goto LAB_10b8ee420;
    func_0x00010b8fd2ec();
    param_1 = (long ******)&pppplStack_140;
    FUN_10b8e552c();
  }
  func_0x00010b8fe58c();
  func_0x00010b8fd3bc(uStack_e8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar6 = (int)param_1;
  uStack_210 = unaff_x28;
  ppppplStack_208 = (long *****)unaff_x27;
  ppppcStack_200 = (code ****)unaff_x26;
  ppppplStack_1f8 = (long *****)unaff_x25;
  pppppcStack_1e8 = (code *****)unaff_x23;
  ppppplStack_1e0 = (long *****)unaff_x22;
  ppppplStack_1d8 = (long *****)unaff_x21;
  func_0x00010b8fd408();
  apppplStack_3a0[0]._0_1_ = 0;
  uStack_348 = 0;
  uStack_228 = extraout_x8_13;
  func_0x000105c3b044();
  if (iVar6 != 0) {
    func_0x00010b9a7520(&ppppplStack_298,&UNK_10f7cbf58,0x12,param_4);
    func_0x00010b8a6ed0(apppplStack_3a0,&ppppplStack_298);
    func_0x00010b8fe7d8();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_410 = 0;
  if (*(char *)(param_2 + 0x6e) == '\x01') {
    pppppcVar10 = param_2[0x6c];
    func_0x00010b8fdad4();
    if ((int)pppppcVar10 != 0) {
      func_0x000107c31084();
      pppppcVar14 = *param_4;
      if (pppppcVar14 == (code *****)0x0) {
        ppppplStack_320 = (long *****)&UNK_10f7d0ef0;
        uStack_318 = 0;
      }
      else {
        ppppplStack_320 = (long *****)(pppppcVar14 + 3);
        uStack_318 = (ulong)*(uint *)((long)pppppcVar14 + 0xc);
      }
      func_0x000107c2793c(&UNK_10f7cbf6b);
      func_0x00010b8fe304(&ppppplStack_298);
      func_0x000107c31080(&ppppplStack_320,pppppcVar10,&ppppplStack_298);
      func_0x000107c31060(&uStack_410,&ppppplStack_320);
      func_0x000107c278f8(ppppplStack_320);
      func_0x00010b8fe7d8();
    }
  }
  FUN_10b8df048(auStack_420,param_2,&uStack_410);
  FUN_10b98dc84(&lStack_3b8,param_4);
  ppppplVar21 = ppppplStack_3b0;
  uVar5 = lStack_3b8 == 1;
  if ((bool)uVar5) {
    uStack_428 = uStack_3a8;
    ppppplStack_430 = ppppplStack_3b0;
    ppppplStack_3b0 = (long *****)0x0;
    uStack_3a8 = 0;
    if ((long ******)ppppplVar21 != (long ******)0x0) {
      pppppplVar8 = (long ******)(ppppplVar21 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppplVar8,0x10);
        if (bVar4) {
          *(int *)pppppplVar8 = *(int *)pppppplVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppplStack_298 = ppppplVar21;
    pppppcStack_440 = (code *****)param_2;
    FUN_10b8f4c14(&ppppplStack_438,param_2,&ppppplStack_298);
    func_0x00010b8fe7b4();
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    func_0x0001080e0180(&uStack_3e0);
    uStack_3c0 = 0;
    if (*param_4 == (code *****)0x0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    (*(code *)(*(long ******)pcVar13)[8])(auStack_468,pcVar13,auStack_450);
    if (bStack_458 == 1) {
      iVar6 = (int)param_2[0x11];
      func_0x00010b93db08();
      if (iVar6 == 0) goto LAB_10b8ee70c;
      if ((bStack_458 & 1) != 0) {
        pppppcVar10 = param_2[0x11];
        FUN_10b93db60(pppppcVar10,auStack_468);
        if ((int)pppppcVar10 == 0) goto LAB_10b8ee70c;
        FUN_10b8e5870(&ppppplStack_298,param_2 + 0x8c);
        iVar7 = (int)auStack_2b8;
        func_0x0001080e0180();
        ppppplStack_320 = (long *****)((ulong)ppppplStack_320 & 0xffffffffffffff00);
        uStack_2c8 = 0;
        func_0x000105c3b044();
        if (iVar7 != 0) {
          FUN_10b8c7650(&ppppplStack_320,&UNK_10f7cbfbf);
        }
        if (*param_4 == (code *****)0x0) {
          func_0x00010b8fddb4();
        }
        else {
          func_0x00010b8fdc0c();
        }
        func_0x00010b8fe818(apppcStack_408);
        func_0x0001080df8d0(auStack_2b8,apppcStack_408);
        func_0x0001080e0bc0(apppcStack_408);
        func_0x0001080e8dd4(&ppppplStack_320);
        if ((*(byte *)(param_8 + 8) & 1) == 0) {
          func_0x00010b8fe150();
          uStack_310 = extraout_x9_01[1];
          uStack_318 = *extraout_x9_01;
          uStack_308 = uStack_308 & 0xffffffffffffff00;
          ppppplStack_320 = (long *****)extraout_x8_15;
          func_0x0001080e08ac(apppcStack_408,&ppppplStack_320);
          pppppplVar8 = &ppppplStack_320;
        }
        else {
          ppppplStack_320 = (long *****)pcVar13;
          uStack_318 = param_6;
          uStack_310 = param_7;
          uStack_308 = param_8;
          func_0x0001080e01a8(auStack_300);
          func_0x00010b8fe100(apppplStack_340);
          func_0x0001080e08ac(apppcStack_408,apppplStack_340);
          pppppplVar8 = (long ******)apppplStack_340;
        }
        uStack_3e8 = 2;
        func_0x0001080e0bc0(pppppplVar8);
        func_0x0001080e0bc0(auStack_2b8);
        func_0x00010b8e58cc(&ppppplStack_298);
        FUN_10b8eeb60(&uStack_3e0,apppcStack_408);
        func_0x0001080e0bc0(apppcStack_408);
LAB_10b8eeaa4:
        if (2 < param_7) {
          func_0x00010b8eee70(param_2,pcVar13,&ppppplStack_430,param_6 + 0x48,1,param_8);
        }
        func_0x00010b8fddac();
        goto LAB_10b8eead4;
      }
      goto LAB_10b8eeb54;
    }
LAB_10b8ee70c:
    FUN_10b93c510(apppcStack_408,param_2[0x11],&ppppplStack_430);
    ppppcVar11 = (code ****)apppcStack_408[0];
    func_0x00010b92dd78();
    if ((int)ppppcVar11 != 0) {
      func_0x00010b8fe15c();
      ppppplStack_320 = (long *****)&ppppplStack_430;
      uStack_318 = extraout_x8_14;
      func_0x00010b8fde38();
      func_0x00010b8fdf54(&ppppplStack_298);
      if (iVar7 == 0) {
        uStack_318 = uStack_290;
        ppppplStack_320 = ppppplStack_298;
        if (-1 < (char)bStack_281) {
          uStack_318 = (ulong)bStack_281;
          ppppplStack_320 = (long *****)&ppppplStack_298;
        }
        func_0x00010b8fe818();
      }
      else {
        func_0x000107c31084();
        func_0x000107c31080(auStack_470);
        FUN_10b99f560(&ppppplStack_320,auStack_470);
        func_0x00010b8fe28c();
        func_0x000104bda960(ppppplStack_320);
        func_0x00010b8fdb48();
        func_0x00010b8fe150();
        func_0x00010b8fd79c();
      }
      func_0x00010b8fe7d8();
      func_0x0001080d5af4(apppcStack_408[0]);
LAB_10b8eead4:
      uVar5 = bStack_458 == 1;
      if ((bool)uVar5) {
        func_0x00010b8fe7bc();
        func_0x000107c278f8(auStack_468[0]);
      }
      func_0x00010b8fe7ac();
      ppppplStack_320 = ppppplStack_438;
      FUN_10b8f4c14(&ppppplStack_298,pppppcStack_440,&ppppplStack_320);
      func_0x00010b8fe7b4();
      func_0x000107c278f8(ppppplStack_320);
      func_0x00010b8fe798();
      func_0x00010b8bc430(&ppppplStack_430);
      goto LAB_10b8eeb1c;
    }
    ppppcVar11 = (code ****)apppcStack_408[0];
    FUN_10b92d094(&ppppplStack_298,apppcStack_408[0],(ulong)&ppppplStack_430 | 8);
    ppppplVar21 = ppppplStack_298;
    if ((long ******)ppppplStack_298 != (long ******)0x1) {
      func_0x00010b8fe28c();
      func_0x00010b8fe150();
      func_0x00010b8fd79c();
LAB_10b8eea88:
      func_0x00010b8fbe80(&ppppplStack_298);
      func_0x0001080d5af4(apppcStack_408[0]);
      if ((long ******)ppppplVar21 == (long ******)0x1) goto LAB_10b8eeaa4;
      goto LAB_10b8eead4;
    }
    FUN_10b8eeb88();
    ppppcVar17 = ppppcVar11;
    func_0x00010b8eebd0();
    if (ppppcVar11 == (code ****)0x0) {
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      func_0x0001080e0bc0(&ppppplStack_320);
      goto LAB_10b8eea88;
    }
    pppppcVar10 = param_2[0xb1];
    if (pppppcVar10 < param_2[0xb2]) {
      *pppppcVar10 = ppppcVar11;
      pppppcVar10[1] = (code ****)0x0;
      pppppcVar14 = pppppcVar10 + 4;
      pppppcVar10[2] = ppppcVar17;
      pppppcVar10[3] = (code ****)0x0;
LAB_10b8ee9cc:
      param_2[0xb1] = pppppcVar14;
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      pppppplVar8 = &ppppplStack_320;
      func_0x0001080e0bc0();
      FUN_10b8eeb88();
      lVar19 = (long)pppppplVar8 - (long)param_2[0xb1][-4];
      func_0x00010b8eebd0();
      pppppcVar10 = param_2[0xb1];
      ppppcVar11 = pppppcVar10[-3];
      lVar18 = (long)pppppplVar8 - (long)pppppcVar10[-2];
      ppppcVar17 = pppppcVar10[-1];
      param_2[0xb1] = pppppcVar10 + -4;
      if (param_2[0xb0] != pppppcVar10 + -4) {
        pppppcVar10[-7] = (code ****)((long)pppppcVar10[-7] + lVar19);
        pppppcVar10[-5] = (code ****)((long)pppppcVar10[-5] + lVar18);
      }
      ppppppcVar12 = param_2;
      (*(code *)(*param_2)[0x1a])();
      pppppcVar10 = *ppppppcVar12;
      if (pppppcVar10 != (code *****)0x0) {
        (*(code *)(*pppppcVar10)[0x21])(pppppcVar10,param_4,lVar19,lVar19 - (long)ppppcVar11);
        (*(code *)(**ppppppcVar12)[0x22])(*ppppppcVar12,param_4,lVar18,lVar18 - (long)ppppcVar17);
      }
      goto LAB_10b8eea88;
    }
    pppppcVar20 = param_2[0xb0];
    lVar18 = (long)pppppcVar10 - (long)pppppcVar20 >> 5;
    uVar1 = lVar18 + 1;
    if (uVar1 >> 0x3b == 0) {
      uVar15 = (long)param_2[0xb2] - (long)pppppcVar20;
      uVar16 = (long)uVar15 >> 4;
      if (uVar16 <= uVar1) {
        uVar16 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar15) {
        uVar16 = 0x7ffffffffffffff;
      }
      if (uVar16 == 0) {
        lVar19 = 0;
      }
      else {
        if (uVar16 >> 0x3b != 0) goto LAB_10b8eeb5c;
        lVar19 = uVar16 << 5;
        __Znwm();
      }
      puVar2 = (undefined8 *)(lVar19 + ((long)pppppcVar10 - (long)pppppcVar20));
      *puVar2 = ppppcVar11;
      puVar2[1] = 0;
      puVar2[2] = ppppcVar17;
      puVar2[3] = 0;
      pppppcVar14 = (code *****)(puVar2 + 4);
      _memcpy(puVar2 + lVar18 * -4,pppppcVar20);
      param_2[0xb0] = (code *****)(puVar2 + lVar18 * -4);
      param_2[0xb1] = pppppcVar14;
      param_2[0xb2] = (code *****)(lVar19 + uVar16 * 0x20);
      if (pppppcVar20 != (code *****)0x0) {
        __ZdlPv(pppppcVar20);
      }
      goto LAB_10b8ee9cc;
    }
  }
  else {
    func_0x00010b8fe28c();
    func_0x00010b8fe150();
    func_0x00010b8fd79c();
LAB_10b8eeb1c:
    FUN_10b8faff8(&lStack_3b8);
    FUN_10b8df100(auStack_420);
    func_0x00010b8fe58c();
    pppppplVar8 = (long ******)apppplStack_3a0;
    func_0x0001080e8dd4(pppppplVar8);
    func_0x00010b8fd3bc(uStack_228);
    if ((bool)uVar5) {
      return pppppplVar8;
    }
    ___stack_chk_fail();
LAB_10b8eeb54:
    func_0x0001080da3e4();
  }
  func_0x00010bdb3f30();
LAB_10b8eeb5c:
  func_0x000104bfe188();
  func_0x00010b8fd9d4();
  func_0x0001080df8d0();
  *(undefined4 *)((long)pcVar13 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return (long ******)pcVar13;
}



/* Entry: 10b8ee190; end: 10b8ee35f;  */

long *****
FUN_10b8ee190(long *****param_1,long *****param_2,undefined8 param_3,code **param_4,
             undefined8 param_5,ulong param_6,ulong param_7,ulong param_8,undefined *param_9,
             undefined8 param_10,code **param_11,code **param_12,undefined4 param_13,
             undefined4 param_14,undefined8 param_15,long *****param_16,undefined4 param_17,
             undefined4 param_18,long *****param_19,code *param_20)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long *****ppppplVar8;
  long *plVar9;
  long ****pppplVar10;
  long ***ppplVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  undefined8 extraout_x8_09;
  ulong extraout_x8_10;
  long ****pppplVar12;
  long *****extraout_x8_11;
  undefined *extraout_x9;
  code *extraout_x9_00;
  code *pcVar13;
  ulong uVar14;
  ulong *extraout_x9_01;
  int extraout_w10;
  ulong uVar15;
  long ***ppplVar16;
  long unaff_x19;
  long *unaff_x20;
  long *****unaff_x21;
  long *****unaff_x22;
  long lVar17;
  code **unaff_x23;
  code **unaff_x24;
  code **ppcVar18;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  long lVar19;
  long *****unaff_x27;
  long ****pppplVar20;
  undefined8 unaff_x28;
  long ****pppplVar21;
  long *****unaff_x30;
  undefined8 in_stack_00000088;
  undefined1 auStack_3d0 [8];
  undefined8 auStack_3c8 [2];
  byte bStack_3b8;
  undefined1 auStack_3b0 [16];
  long ****pppplStack_3a0;
  long ****pppplStack_398;
  long ****pppplStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  long **applStack_368 [4];
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  long lStack_318;
  long ****pppplStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [88];
  undefined1 uStack_2a8;
  long ***appplStack_2a0 [4];
  long ****pppplStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 auStack_260 [56];
  undefined1 uStack_228;
  undefined1 auStack_218 [32];
  long ****pppplStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  undefined8 uStack_188;
  undefined8 uStack_170;
  long ****pppplStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  code **ppcStack_150;
  code **ppcStack_148;
  long ****pppplStack_140;
  long ****pppplStack_138;
  long **pplStack_110;
  long lStack_108;
  long ****pppplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [16];
  long ***ppplStack_a0;
  long lStack_98;
  long ***ppplStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long lStack_68;
  long ****pppplStack_58;
  long ****pppplStack_50;
  undefined8 uStack_48;
  code **ppcStack_40;
  code **ppcStack_38;
  long ****pppplStack_30;
  long ****pppplStack_28;
  
  func_0x00010b8fe46c();
  func_0x00010b8fd358();
  in_stack_00000088 = extraout_x8;
  func_0x00010b8fd5f8(&param_17);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    unaff_x22 = (long *****)&param_17;
    FUN_10b93c510(&param_16,unaff_x21[0x11],&param_17);
    ppppplVar8 = param_16;
    func_0x00010b92dd78();
    if ((int)ppppplVar8 == 0) {
      FUN_10b92d230(&param_11,param_16);
      param_2 = (long *****)((long)param_12 - (long)param_11 >> 3);
      func_0x00010b8fdb90(*unaff_x20);
      unaff_x22 = (long *****)&stack0x00000068;
      (**(code **)(extraout_x8_02 + 0x88))(&stack0x00000068);
      func_0x00010b8fd91c();
      ppcVar18 = param_12;
      if ((extraout_x8_03 & 1) == 0) {
        func_0x00010b8fd2ec();
        ppcVar18 = unaff_x24;
      }
      else {
        unaff_x21 = (long *****)0x0;
        unaff_x25 = &param_19;
        unaff_x26 = &UNK_10f7d0ef0;
        unaff_x23 = param_11;
        do {
          in_ZR = unaff_x23 == ppcVar18;
          if ((bool)in_ZR) {
            param_2 = (long *****)&stack0x00000068;
            func_0x00010b8fddac();
            break;
          }
          if (*unaff_x23 == (code *)0x0) {
            param_10 = 0;
            param_9 = unaff_x26;
          }
          else {
            func_0x00010b8fdc0c();
            param_10 = extraout_x8_04;
            param_9 = extraout_x9;
          }
          plVar9 = (long *)*unaff_x20;
          func_0x00010b8fdb80();
          param_2 = (long *****)register0x00000008;
          (*extraout_x9_00)(&param_19);
          func_0x00010b8feafc();
          if ((bool)in_ZR) {
            ppppplVar8 = (long *****)((long)unaff_x21 + 1);
            param_2 = (long *****)&stack0x00000070;
            param_4 = &param_20;
            (**(code **)(*plVar9 + 0x108))();
            func_0x00010b8fd91c();
            unaff_x30 = unaff_x21;
            unaff_x21 = ppppplVar8;
            if ((extraout_x8_05 & 1) == 0) {
              plVar9 = (long *)*unaff_x20;
              goto LAB_10b8ee2fc;
            }
            unaff_x28 = 1;
          }
          else {
LAB_10b8ee2fc:
            unaff_x28 = 0;
            func_0x00010b8fd79c(plVar9[0x28]);
          }
          func_0x00010b8fddf8();
          unaff_x23 = unaff_x23 + 1;
          unaff_x27 = unaff_x21;
        } while ((int)unaff_x28 != 0);
      }
      func_0x00010b8fe194();
      func_0x000104bfe1e0(&param_11);
    }
    else {
      func_0x000107c31084();
      func_0x00010b8fe15c();
      param_19 = unaff_x22;
      param_20 = extraout_x8_01;
      func_0x00010b8fde38();
      param_4 = (code **)&param_19;
      func_0x00010b8fdf54(&stack0x00000068);
      func_0x00010b8fdf18(&param_15);
      FUN_10b99f560(&param_19,&param_15);
      param_2 = (long *****)&param_19;
      func_0x00010b8fd500();
      func_0x00010b8fe660();
      func_0x000107c278f8(param_15);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000068);
      unaff_x21 = ppppplVar8;
      ppcVar18 = unaff_x24;
    }
    param_1 = param_16;
    func_0x0001080d5af4();
    unaff_x24 = ppcVar18;
  }
  func_0x00010b8fe184();
  func_0x00010b8fd3bc(in_stack_00000088);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  ppcStack_40 = unaff_x24;
  ppcStack_38 = unaff_x23;
  pppplStack_30 = (long ****)unaff_x22;
  pppplStack_28 = (long ****)unaff_x21;
  func_0x00010b8fd358();
  uStack_48 = extraout_x8_06;
  func_0x00010b8fd5f8(&ppplStack_90);
  func_0x00010b8fd91c();
  iVar7 = (int)param_5;
  if ((extraout_x8_07 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    ppplStack_a0 = (long ***)0x0;
    lStack_98 = 0;
    func_0x00010b8fd8f4();
    pppplStack_58 = (long ****)param_1;
    pppplStack_50 = (long ****)param_2;
    func_0x00010b8fe014();
    iVar6 = (int)param_1;
    param_2 = &pppplStack_58;
    (**(code **)(extraout_x8_08 + 0x180))();
    iVar7 = (int)param_5;
    if (iVar6 == 0) {
      lStack_108 = unaff_x20[6];
      pplStack_110 = (long **)0x0;
      func_0x00010b8fd9e8(*unaff_x20);
      uStack_d8 = 0;
      uStack_d0 = CONCAT71(uStack_d0._1_7_,4);
      uStack_c8 = 0;
      uStack_c0 = 1;
      uStack_b8 = 0;
      pppplStack_e0 = (long ****)&pplStack_110;
      FUN_10b8e143c(auStack_b0);
      FUN_10b8e6bb8(&ppplStack_a0,auStack_b0);
      FUN_10b8e552c(auStack_b0);
LAB_10b8ee420:
      iVar7 = (int)param_5;
      unaff_x22 = &pppplStack_e0;
      pppplVar10 = (long ****)ppplStack_a0;
      lVar17 = lStack_98;
      pppplStack_e0 = (long ****)unaff_x21;
      if (lStack_98 != 0) {
        do {
          func_0x00010b8fd9c4();
          iVar7 = (int)param_5;
        } while (extraout_w10 != 0);
      }
      pcStack_88 = FUN_10b8fbb84;
      ppuStack_80 = &PTR_DAT_110d73cc8;
      unaff_x23 = &pcStack_88;
      uStack_d8 = 0;
      uStack_d0 = 0;
      param_2 = (long *****)&ppplStack_90;
      param_4 = &pcStack_88;
      unaff_x30 = (long *****)0x0;
      pppplStack_78 = (long ****)unaff_x21;
      ppplStack_70 = (long ***)pppplVar10;
      lStack_68 = lVar17;
      FUN_10b93d234();
      func_0x00010b8fd604(ppuStack_80);
      FUN_10b8e552c(&uStack_d8);
    }
    else if ((*(byte *)((long)unaff_x21[0x11] + 0x6c) & 1) != 0) goto LAB_10b8ee420;
    func_0x00010b8fd2ec();
    param_1 = (long *****)&ppplStack_a0;
    FUN_10b8e552c();
  }
  func_0x00010b8fe58c();
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar6 = (int)param_1;
  uStack_170 = unaff_x28;
  pppplStack_168 = (long ****)unaff_x27;
  puStack_160 = unaff_x26;
  puStack_158 = unaff_x25;
  ppcStack_150 = unaff_x24;
  ppcStack_148 = unaff_x23;
  pppplStack_140 = (long ****)unaff_x22;
  pppplStack_138 = (long ****)unaff_x21;
  func_0x00010b8fd408();
  auStack_300[0] = 0;
  uStack_2a8 = 0;
  uStack_188 = extraout_x8_09;
  func_0x000105c3b044();
  if (iVar6 != 0) {
    func_0x00010b9a7520(&pppplStack_1f8,&UNK_10f7cbf58,0x12,param_4);
    func_0x00010b8a6ed0(auStack_300,&pppplStack_1f8);
    func_0x00010b8fe7d8();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_370 = 0;
  if (*(char *)(param_2 + 0x6e) == '\x01') {
    pppplVar10 = param_2[0x6c];
    func_0x00010b8fdad4();
    if ((int)pppplVar10 != 0) {
      func_0x000107c31084();
      pcVar13 = *param_4;
      if (pcVar13 == (code *)0x0) {
        pppplStack_280 = (long ****)&UNK_10f7d0ef0;
        uStack_278 = 0;
      }
      else {
        pppplStack_280 = (long ****)(pcVar13 + 0x18);
        uStack_278 = (ulong)*(uint *)(pcVar13 + 0xc);
      }
      func_0x000107c2793c(&UNK_10f7cbf6b);
      func_0x00010b8fe304(&pppplStack_1f8);
      func_0x000107c31080(&pppplStack_280,pppplVar10,&pppplStack_1f8);
      func_0x000107c31060(&uStack_370,&pppplStack_280);
      func_0x000107c278f8(pppplStack_280);
      func_0x00010b8fe7d8();
    }
  }
  FUN_10b8df048(auStack_380,param_2,&uStack_370);
  FUN_10b98dc84(&lStack_318,param_4);
  pppplVar10 = pppplStack_310;
  uVar5 = lStack_318 == 1;
  if ((bool)uVar5) {
    uStack_388 = uStack_308;
    pppplStack_390 = pppplStack_310;
    pppplStack_310 = (long ****)0x0;
    uStack_308 = 0;
    if ((long *****)pppplVar10 != (long *****)0x0) {
      ppppplVar8 = (long *****)(pppplVar10 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar8,0x10);
        if (bVar4) {
          *(int *)ppppplVar8 = *(int *)ppppplVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppplStack_1f8 = pppplVar10;
    pppplStack_3a0 = (long ****)param_2;
    FUN_10b8f4c14(&pppplStack_398,param_2,&pppplStack_1f8);
    func_0x00010b8fe7b4();
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    func_0x0001080e0180(&uStack_340);
    uStack_320 = 0;
    if (*param_4 == (code *)0x0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    (*(code *)(*unaff_x30)[8])(auStack_3c8,unaff_x30,auStack_3b0);
    if (bStack_3b8 == 1) {
      iVar6 = (int)param_2[0x11];
      func_0x00010b93db08();
      if (iVar6 == 0) goto LAB_10b8ee70c;
      if ((bStack_3b8 & 1) != 0) {
        pppplVar10 = param_2[0x11];
        FUN_10b93db60(pppplVar10,auStack_3c8);
        if ((int)pppplVar10 == 0) goto LAB_10b8ee70c;
        FUN_10b8e5870(&pppplStack_1f8,param_2 + 0x8c);
        iVar7 = (int)auStack_218;
        func_0x0001080e0180();
        pppplStack_280 = (long ****)((ulong)pppplStack_280 & 0xffffffffffffff00);
        uStack_228 = 0;
        func_0x000105c3b044();
        if (iVar7 != 0) {
          FUN_10b8c7650(&pppplStack_280,&UNK_10f7cbfbf);
        }
        if (*param_4 == (code *)0x0) {
          func_0x00010b8fddb4();
        }
        else {
          func_0x00010b8fdc0c();
        }
        func_0x00010b8fe818(applStack_368);
        func_0x0001080df8d0(auStack_218,applStack_368);
        func_0x0001080e0bc0(applStack_368);
        func_0x0001080e8dd4(&pppplStack_280);
        if ((*(byte *)(param_8 + 8) & 1) == 0) {
          func_0x00010b8fe150();
          uStack_270 = extraout_x9_01[1];
          uStack_278 = *extraout_x9_01;
          uStack_268 = uStack_268 & 0xffffffffffffff00;
          pppplStack_280 = (long ****)extraout_x8_11;
          func_0x0001080e08ac(applStack_368,&pppplStack_280);
          ppppplVar8 = &pppplStack_280;
        }
        else {
          pppplStack_280 = (long ****)unaff_x30;
          uStack_278 = param_6;
          uStack_270 = param_7;
          uStack_268 = param_8;
          func_0x0001080e01a8(auStack_260);
          func_0x00010b8fe100(appplStack_2a0);
          func_0x0001080e08ac(applStack_368,appplStack_2a0);
          ppppplVar8 = (long *****)appplStack_2a0;
        }
        uStack_348 = 2;
        func_0x0001080e0bc0(ppppplVar8);
        func_0x0001080e0bc0(auStack_218);
        func_0x00010b8e58cc(&pppplStack_1f8);
        FUN_10b8eeb60(&uStack_340,applStack_368);
        func_0x0001080e0bc0(applStack_368);
LAB_10b8eeaa4:
        if (2 < param_7) {
          func_0x00010b8eee70(param_2,unaff_x30,&pppplStack_390,param_6 + 0x48,1,param_8);
        }
        func_0x00010b8fddac();
        goto LAB_10b8eead4;
      }
      goto LAB_10b8eeb54;
    }
LAB_10b8ee70c:
    FUN_10b93c510(applStack_368,param_2[0x11],&pppplStack_390);
    ppplVar11 = (long ***)applStack_368[0];
    func_0x00010b92dd78();
    if ((int)ppplVar11 != 0) {
      func_0x00010b8fe15c();
      pppplStack_280 = (long ****)&pppplStack_390;
      uStack_278 = extraout_x8_10;
      func_0x00010b8fde38();
      func_0x00010b8fdf54(&pppplStack_1f8);
      if (iVar7 == 0) {
        uStack_278 = uStack_1f0;
        pppplStack_280 = pppplStack_1f8;
        if (-1 < (char)bStack_1e1) {
          uStack_278 = (ulong)bStack_1e1;
          pppplStack_280 = (long ****)&pppplStack_1f8;
        }
        func_0x00010b8fe818();
      }
      else {
        func_0x000107c31084();
        func_0x000107c31080(auStack_3d0);
        FUN_10b99f560(&pppplStack_280,auStack_3d0);
        func_0x00010b8fe28c();
        func_0x000104bda960(pppplStack_280);
        func_0x00010b8fdb48();
        func_0x00010b8fe150();
        func_0x00010b8fd79c();
      }
      func_0x00010b8fe7d8();
      func_0x0001080d5af4(applStack_368[0]);
LAB_10b8eead4:
      uVar5 = bStack_3b8 == 1;
      if ((bool)uVar5) {
        func_0x00010b8fe7bc();
        func_0x000107c278f8(auStack_3c8[0]);
      }
      func_0x00010b8fe7ac();
      pppplStack_280 = pppplStack_398;
      FUN_10b8f4c14(&pppplStack_1f8,pppplStack_3a0,&pppplStack_280);
      func_0x00010b8fe7b4();
      func_0x000107c278f8(pppplStack_280);
      func_0x00010b8fe798();
      func_0x00010b8bc430(&pppplStack_390);
      goto LAB_10b8eeb1c;
    }
    ppplVar11 = (long ***)applStack_368[0];
    FUN_10b92d094(&pppplStack_1f8,applStack_368[0],(ulong)&pppplStack_390 | 8);
    pppplVar10 = pppplStack_1f8;
    if ((long *****)pppplStack_1f8 != (long *****)0x1) {
      func_0x00010b8fe28c();
      func_0x00010b8fe150();
      func_0x00010b8fd79c();
LAB_10b8eea88:
      func_0x00010b8fbe80(&pppplStack_1f8);
      func_0x0001080d5af4(applStack_368[0]);
      if ((long *****)pppplVar10 == (long *****)0x1) goto LAB_10b8eeaa4;
      goto LAB_10b8eead4;
    }
    FUN_10b8eeb88();
    ppplVar16 = ppplVar11;
    func_0x00010b8eebd0();
    if (ppplVar11 == (long ***)0x0) {
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      func_0x0001080e0bc0(&pppplStack_280);
      goto LAB_10b8eea88;
    }
    pppplVar12 = param_2[0xb1];
    if (pppplVar12 < param_2[0xb2]) {
      *pppplVar12 = ppplVar11;
      pppplVar12[1] = (long ***)0x0;
      pppplVar21 = pppplVar12 + 4;
      pppplVar12[2] = ppplVar16;
      pppplVar12[3] = (long ***)0x0;
LAB_10b8ee9cc:
      param_2[0xb1] = pppplVar21;
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      ppppplVar8 = &pppplStack_280;
      func_0x0001080e0bc0();
      FUN_10b8eeb88();
      lVar19 = (long)ppppplVar8 - (long)param_2[0xb1][-4];
      func_0x00010b8eebd0();
      pppplVar12 = param_2[0xb1];
      ppplVar11 = pppplVar12[-3];
      lVar17 = (long)ppppplVar8 - (long)pppplVar12[-2];
      ppplVar16 = pppplVar12[-1];
      param_2[0xb1] = pppplVar12 + -4;
      if (param_2[0xb0] != pppplVar12 + -4) {
        pppplVar12[-7] = (long ***)((long)pppplVar12[-7] + lVar19);
        pppplVar12[-5] = (long ***)((long)pppplVar12[-5] + lVar17);
      }
      ppppplVar8 = param_2;
      (*(code *)(*param_2)[0x1a])();
      pppplVar12 = *ppppplVar8;
      if (pppplVar12 != (long ****)0x0) {
        (*(code *)(*pppplVar12)[0x21])(pppplVar12,param_4,lVar19,lVar19 - (long)ppplVar11);
        (*(code *)(**ppppplVar8)[0x22])(*ppppplVar8,param_4,lVar17,lVar17 - (long)ppplVar16);
      }
      goto LAB_10b8eea88;
    }
    pppplVar20 = param_2[0xb0];
    lVar17 = (long)pppplVar12 - (long)pppplVar20 >> 5;
    uVar1 = lVar17 + 1;
    if (uVar1 >> 0x3b == 0) {
      uVar14 = (long)param_2[0xb2] - (long)pppplVar20;
      uVar15 = (long)uVar14 >> 4;
      if (uVar15 <= uVar1) {
        uVar15 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar14) {
        uVar15 = 0x7ffffffffffffff;
      }
      if (uVar15 == 0) {
        lVar19 = 0;
      }
      else {
        if (uVar15 >> 0x3b != 0) goto LAB_10b8eeb5c;
        lVar19 = uVar15 << 5;
        __Znwm();
      }
      puVar2 = (undefined8 *)(lVar19 + ((long)pppplVar12 - (long)pppplVar20));
      *puVar2 = ppplVar11;
      puVar2[1] = 0;
      puVar2[2] = ppplVar16;
      puVar2[3] = 0;
      pppplVar21 = (long ****)(puVar2 + 4);
      _memcpy(puVar2 + lVar17 * -4,pppplVar20);
      param_2[0xb0] = (long ****)(puVar2 + lVar17 * -4);
      param_2[0xb1] = pppplVar21;
      param_2[0xb2] = (long ****)(lVar19 + uVar15 * 0x20);
      if (pppplVar20 != (long ****)0x0) {
        __ZdlPv(pppplVar20);
      }
      goto LAB_10b8ee9cc;
    }
  }
  else {
    func_0x00010b8fe28c();
    func_0x00010b8fe150();
    func_0x00010b8fd79c();
LAB_10b8eeb1c:
    FUN_10b8faff8(&lStack_318);
    FUN_10b8df100(auStack_380);
    func_0x00010b8fe58c();
    ppppplVar8 = (long *****)auStack_300;
    func_0x0001080e8dd4(ppppplVar8);
    func_0x00010b8fd3bc(uStack_188);
    if ((bool)uVar5) {
      return ppppplVar8;
    }
    ___stack_chk_fail();
LAB_10b8eeb54:
    func_0x0001080da3e4();
  }
  func_0x00010bdb3f30();
LAB_10b8eeb5c:
  func_0x000104bfe188();
  func_0x00010b8fd9d4();
  func_0x0001080df8d0();
  *(undefined4 *)(unaff_x30 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return unaff_x30;
}



/* Entry: 10b8ee360; end: 10b8ee4bf;  */

long *****
FUN_10b8ee360(long *****param_1,long *****param_2,long *****param_3,code **param_4,
             undefined8 param_5,ulong param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long ****pppplVar8;
  long ***ppplVar9;
  long *****ppppplVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  long ****pppplVar11;
  long *****extraout_x8_04;
  code *pcVar12;
  ulong uVar13;
  ulong *extraout_x9;
  int extraout_w10;
  ulong uVar14;
  long ***ppplVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar16;
  long lVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  undefined1 auStack_3d0 [8];
  undefined8 auStack_3c8 [2];
  byte bStack_3b8;
  undefined1 auStack_3b0 [16];
  long ****pppplStack_3a0;
  long ****pppplStack_398;
  long ****pppplStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [16];
  undefined8 uStack_370;
  long **applStack_368 [4];
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  long lStack_318;
  long ****pppplStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [88];
  undefined1 uStack_2a8;
  long ***appplStack_2a0 [4];
  long ****pppplStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  undefined1 auStack_260 [56];
  undefined1 uStack_228;
  undefined1 auStack_218 [32];
  long ****pppplStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  undefined8 uStack_188;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [16];
  long ***ppplStack_a0;
  long lStack_98;
  long ***ppplStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long ****pppplStack_58;
  long ****pppplStack_50;
  undefined8 uStack_48;
  
  func_0x00010b8fd358();
  uStack_48 = extraout_x8;
  func_0x00010b8fd5f8(&ppplStack_90);
  func_0x00010b8fd91c();
  iVar7 = (int)param_5;
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    ppplStack_a0 = (long ***)0x0;
    lStack_98 = 0;
    func_0x00010b8fd8f4();
    pppplStack_58 = (long ****)param_1;
    pppplStack_50 = (long ****)param_2;
    func_0x00010b8fe014();
    iVar6 = (int)param_1;
    param_2 = &pppplStack_58;
    (**(code **)(extraout_x8_01 + 0x180))();
    iVar7 = (int)param_5;
    if (iVar6 == 0) {
      func_0x00010b8fd9e8(*unaff_x20);
      uStack_d8 = 0;
      uStack_d0 = CONCAT71(uStack_d0._1_7_,4);
      uStack_c8 = 0;
      uStack_c0 = 1;
      uStack_b8 = 0;
      FUN_10b8e143c(auStack_b0);
      FUN_10b8e6bb8(&ppplStack_a0,auStack_b0);
      FUN_10b8e552c(auStack_b0);
LAB_10b8ee420:
      iVar7 = (int)param_5;
      if (lStack_98 != 0) {
        do {
          func_0x00010b8fd9c4();
          iVar7 = (int)param_5;
        } while (extraout_w10 != 0);
      }
      pcStack_88 = FUN_10b8fbb84;
      ppuStack_80 = &PTR_DAT_110d73cc8;
      uStack_d8 = 0;
      uStack_d0 = 0;
      param_2 = (long *****)&ppplStack_90;
      param_4 = &pcStack_88;
      param_3 = (long *****)0x0;
      FUN_10b93d234();
      func_0x00010b8fd604(ppuStack_80);
      FUN_10b8e552c(&uStack_d8);
    }
    else if ((*(byte *)(*(long *)(unaff_x21 + 0x88) + 0x6c) & 1) != 0) goto LAB_10b8ee420;
    func_0x00010b8fd2ec();
    param_1 = (long *****)&ppplStack_a0;
    FUN_10b8e552c();
  }
  func_0x00010b8fe58c();
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar6 = (int)param_1;
  func_0x00010b8fd408();
  auStack_300[0] = 0;
  uStack_2a8 = 0;
  uStack_188 = extraout_x8_02;
  func_0x000105c3b044();
  if (iVar6 != 0) {
    func_0x00010b9a7520(&pppplStack_1f8,&UNK_10f7cbf58,0x12,param_4);
    func_0x00010b8a6ed0(auStack_300,&pppplStack_1f8);
    func_0x00010b8fe7d8();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_370 = 0;
  if (*(char *)(param_2 + 0x6e) == '\x01') {
    pppplVar8 = param_2[0x6c];
    func_0x00010b8fdad4();
    if ((int)pppplVar8 != 0) {
      func_0x000107c31084();
      pcVar12 = *param_4;
      if (pcVar12 == (code *)0x0) {
        pppplStack_280 = (long ****)&UNK_10f7d0ef0;
        uStack_278 = 0;
      }
      else {
        pppplStack_280 = (long ****)(pcVar12 + 0x18);
        uStack_278 = (ulong)*(uint *)(pcVar12 + 0xc);
      }
      func_0x000107c2793c(&UNK_10f7cbf6b);
      func_0x00010b8fe304(&pppplStack_1f8);
      func_0x000107c31080(&pppplStack_280,pppplVar8,&pppplStack_1f8);
      func_0x000107c31060(&uStack_370,&pppplStack_280);
      func_0x000107c278f8(pppplStack_280);
      func_0x00010b8fe7d8();
    }
  }
  FUN_10b8df048(auStack_380,param_2,&uStack_370);
  FUN_10b98dc84(&lStack_318,param_4);
  pppplVar8 = pppplStack_310;
  uVar5 = lStack_318 == 1;
  if ((bool)uVar5) {
    uStack_388 = uStack_308;
    pppplStack_390 = pppplStack_310;
    pppplStack_310 = (long ****)0x0;
    uStack_308 = 0;
    if ((long *****)pppplVar8 != (long *****)0x0) {
      ppppplVar10 = (long *****)(pppplVar8 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
        if (bVar4) {
          *(int *)ppppplVar10 = *(int *)ppppplVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppplStack_1f8 = pppplVar8;
    pppplStack_3a0 = (long ****)param_2;
    FUN_10b8f4c14(&pppplStack_398,param_2,&pppplStack_1f8);
    func_0x00010b8fe7b4();
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    func_0x0001080e0180(&uStack_340);
    uStack_320 = 0;
    if (*param_4 == (code *)0x0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    (*(code *)(*param_3)[8])(auStack_3c8,param_3,auStack_3b0);
    if (bStack_3b8 == 1) {
      iVar6 = (int)param_2[0x11];
      func_0x00010b93db08();
      if (iVar6 == 0) goto LAB_10b8ee70c;
      if ((bStack_3b8 & 1) != 0) {
        pppplVar8 = param_2[0x11];
        FUN_10b93db60(pppplVar8,auStack_3c8);
        if ((int)pppplVar8 == 0) goto LAB_10b8ee70c;
        FUN_10b8e5870(&pppplStack_1f8,param_2 + 0x8c);
        iVar7 = (int)auStack_218;
        func_0x0001080e0180();
        pppplStack_280 = (long ****)((ulong)pppplStack_280 & 0xffffffffffffff00);
        uStack_228 = 0;
        func_0x000105c3b044();
        if (iVar7 != 0) {
          FUN_10b8c7650(&pppplStack_280,&UNK_10f7cbfbf);
        }
        if (*param_4 == (code *)0x0) {
          func_0x00010b8fddb4();
        }
        else {
          func_0x00010b8fdc0c();
        }
        func_0x00010b8fe818(applStack_368);
        func_0x0001080df8d0(auStack_218,applStack_368);
        func_0x0001080e0bc0(applStack_368);
        func_0x0001080e8dd4(&pppplStack_280);
        if ((*(byte *)(param_8 + 8) & 1) == 0) {
          func_0x00010b8fe150();
          uStack_270 = extraout_x9[1];
          uStack_278 = *extraout_x9;
          uStack_268 = uStack_268 & 0xffffffffffffff00;
          pppplStack_280 = (long ****)extraout_x8_04;
          func_0x0001080e08ac(applStack_368,&pppplStack_280);
          ppppplVar10 = &pppplStack_280;
        }
        else {
          pppplStack_280 = (long ****)param_3;
          uStack_278 = param_6;
          uStack_270 = param_7;
          uStack_268 = param_8;
          func_0x0001080e01a8(auStack_260);
          func_0x00010b8fe100(appplStack_2a0);
          func_0x0001080e08ac(applStack_368,appplStack_2a0);
          ppppplVar10 = (long *****)appplStack_2a0;
        }
        uStack_348 = 2;
        func_0x0001080e0bc0(ppppplVar10);
        func_0x0001080e0bc0(auStack_218);
        func_0x00010b8e58cc(&pppplStack_1f8);
        FUN_10b8eeb60(&uStack_340,applStack_368);
        func_0x0001080e0bc0(applStack_368);
LAB_10b8eeaa4:
        if (2 < param_7) {
          func_0x00010b8eee70(param_2,param_3,&pppplStack_390,param_6 + 0x48,1,param_8);
        }
        func_0x00010b8fddac();
        goto LAB_10b8eead4;
      }
      goto LAB_10b8eeb54;
    }
LAB_10b8ee70c:
    FUN_10b93c510(applStack_368,param_2[0x11],&pppplStack_390);
    ppplVar9 = (long ***)applStack_368[0];
    func_0x00010b92dd78();
    if ((int)ppplVar9 != 0) {
      func_0x00010b8fe15c();
      pppplStack_280 = (long ****)&pppplStack_390;
      uStack_278 = extraout_x8_03;
      func_0x00010b8fde38();
      func_0x00010b8fdf54(&pppplStack_1f8);
      if (iVar7 == 0) {
        uStack_278 = uStack_1f0;
        pppplStack_280 = pppplStack_1f8;
        if (-1 < (char)bStack_1e1) {
          uStack_278 = (ulong)bStack_1e1;
          pppplStack_280 = (long ****)&pppplStack_1f8;
        }
        func_0x00010b8fe818();
      }
      else {
        func_0x000107c31084();
        func_0x000107c31080(auStack_3d0);
        FUN_10b99f560(&pppplStack_280,auStack_3d0);
        func_0x00010b8fe28c();
        func_0x000104bda960(pppplStack_280);
        func_0x00010b8fdb48();
        func_0x00010b8fe150();
        func_0x00010b8fd79c();
      }
      func_0x00010b8fe7d8();
      func_0x0001080d5af4(applStack_368[0]);
LAB_10b8eead4:
      uVar5 = bStack_3b8 == 1;
      if ((bool)uVar5) {
        func_0x00010b8fe7bc();
        func_0x000107c278f8(auStack_3c8[0]);
      }
      func_0x00010b8fe7ac();
      pppplStack_280 = pppplStack_398;
      FUN_10b8f4c14(&pppplStack_1f8,pppplStack_3a0,&pppplStack_280);
      func_0x00010b8fe7b4();
      func_0x000107c278f8(pppplStack_280);
      func_0x00010b8fe798();
      func_0x00010b8bc430(&pppplStack_390);
      goto LAB_10b8eeb1c;
    }
    ppplVar9 = (long ***)applStack_368[0];
    FUN_10b92d094(&pppplStack_1f8,applStack_368[0],(ulong)&pppplStack_390 | 8);
    pppplVar8 = pppplStack_1f8;
    if ((long *****)pppplStack_1f8 != (long *****)0x1) {
      func_0x00010b8fe28c();
      func_0x00010b8fe150();
      func_0x00010b8fd79c();
LAB_10b8eea88:
      func_0x00010b8fbe80(&pppplStack_1f8);
      func_0x0001080d5af4(applStack_368[0]);
      if ((long *****)pppplVar8 == (long *****)0x1) goto LAB_10b8eeaa4;
      goto LAB_10b8eead4;
    }
    FUN_10b8eeb88();
    ppplVar15 = ppplVar9;
    func_0x00010b8eebd0();
    if (ppplVar9 == (long ***)0x0) {
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      func_0x0001080e0bc0(&pppplStack_280);
      goto LAB_10b8eea88;
    }
    pppplVar11 = param_2[0xb1];
    if (pppplVar11 < param_2[0xb2]) {
      *pppplVar11 = ppplVar9;
      pppplVar11[1] = (long ***)0x0;
      pppplVar19 = pppplVar11 + 4;
      pppplVar11[2] = ppplVar15;
      pppplVar11[3] = (long ***)0x0;
LAB_10b8ee9cc:
      param_2[0xb1] = pppplVar19;
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      ppppplVar10 = &pppplStack_280;
      func_0x0001080e0bc0();
      FUN_10b8eeb88();
      lVar17 = (long)ppppplVar10 - (long)param_2[0xb1][-4];
      func_0x00010b8eebd0();
      pppplVar11 = param_2[0xb1];
      ppplVar9 = pppplVar11[-3];
      lVar16 = (long)ppppplVar10 - (long)pppplVar11[-2];
      ppplVar15 = pppplVar11[-1];
      param_2[0xb1] = pppplVar11 + -4;
      if (param_2[0xb0] != pppplVar11 + -4) {
        pppplVar11[-7] = (long ***)((long)pppplVar11[-7] + lVar17);
        pppplVar11[-5] = (long ***)((long)pppplVar11[-5] + lVar16);
      }
      ppppplVar10 = param_2;
      (*(code *)(*param_2)[0x1a])();
      pppplVar11 = *ppppplVar10;
      if (pppplVar11 != (long ****)0x0) {
        (*(code *)(*pppplVar11)[0x21])(pppplVar11,param_4,lVar17,lVar17 - (long)ppplVar9);
        (*(code *)(**ppppplVar10)[0x22])(*ppppplVar10,param_4,lVar16,lVar16 - (long)ppplVar15);
      }
      goto LAB_10b8eea88;
    }
    pppplVar18 = param_2[0xb0];
    lVar16 = (long)pppplVar11 - (long)pppplVar18 >> 5;
    uVar1 = lVar16 + 1;
    if (uVar1 >> 0x3b == 0) {
      uVar13 = (long)param_2[0xb2] - (long)pppplVar18;
      uVar14 = (long)uVar13 >> 4;
      if (uVar14 <= uVar1) {
        uVar14 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar13) {
        uVar14 = 0x7ffffffffffffff;
      }
      if (uVar14 == 0) {
        lVar17 = 0;
      }
      else {
        if (uVar14 >> 0x3b != 0) goto LAB_10b8eeb5c;
        lVar17 = uVar14 << 5;
        __Znwm();
      }
      puVar2 = (undefined8 *)(lVar17 + ((long)pppplVar11 - (long)pppplVar18));
      *puVar2 = ppplVar9;
      puVar2[1] = 0;
      puVar2[2] = ppplVar15;
      puVar2[3] = 0;
      pppplVar19 = (long ****)(puVar2 + 4);
      _memcpy(puVar2 + lVar16 * -4,pppplVar18);
      param_2[0xb0] = (long ****)(puVar2 + lVar16 * -4);
      param_2[0xb1] = pppplVar19;
      param_2[0xb2] = (long ****)(lVar17 + uVar14 * 0x20);
      if (pppplVar18 != (long ****)0x0) {
        __ZdlPv(pppplVar18);
      }
      goto LAB_10b8ee9cc;
    }
  }
  else {
    func_0x00010b8fe28c();
    func_0x00010b8fe150();
    func_0x00010b8fd79c();
LAB_10b8eeb1c:
    FUN_10b8faff8(&lStack_318);
    FUN_10b8df100(auStack_380);
    func_0x00010b8fe58c();
    ppppplVar10 = (long *****)auStack_300;
    func_0x0001080e8dd4(ppppplVar10);
    func_0x00010b8fd3bc(uStack_188);
    if ((bool)uVar5) {
      return ppppplVar10;
    }
    ___stack_chk_fail();
LAB_10b8eeb54:
    func_0x0001080da3e4();
  }
  func_0x00010bdb3f30();
LAB_10b8eeb5c:
  func_0x000104bfe188();
  func_0x00010b8fd9d4();
  func_0x0001080df8d0();
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_3;
}



/* Entry: 10b8ee4c0; end: 10b8eeb5f;  */

long **** FUN_10b8ee4c0(int param_1,long *param_2,long ****param_3,long *param_4,int param_5,
                       ulong param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long ***ppplVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  long ****pppplVar8;
  long *plVar9;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long *plVar10;
  long ****extraout_x8_01;
  long lVar11;
  ulong uVar12;
  ulong *extraout_x9;
  ulong uVar13;
  long lVar14;
  long unaff_x19;
  long lVar15;
  long lVar16;
  undefined1 auStack_2c0 [8];
  undefined8 auStack_2b8 [2];
  byte bStack_2a8;
  undefined1 auStack_2a0 [16];
  long *plStack_290;
  long ***ppplStack_288;
  long ***ppplStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [16];
  undefined8 uStack_260;
  long alStack_258 [4];
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined4 uStack_210;
  long lStack_208;
  long ***ppplStack_200;
  undefined8 uStack_1f8;
  long **applStack_1f0 [11];
  undefined1 uStack_198;
  long **applStack_190 [4];
  long ***ppplStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [56];
  undefined1 uStack_118;
  undefined1 auStack_108 [32];
  long ***ppplStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 uStack_78;
  
  func_0x00010b8fd408();
  applStack_1f0[0]._0_1_ = 0;
  uStack_198 = 0;
  uStack_78 = extraout_x8;
  func_0x000105c3b044();
  if (param_1 != 0) {
    func_0x00010b9a7520(&ppplStack_e8,&UNK_10f7cbf58,0x12,param_4);
    func_0x00010b8a6ed0(applStack_1f0,&ppplStack_e8);
    func_0x00010b8fe7d8();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_260 = 0;
  if ((char)param_2[0x6e] == '\x01') {
    lVar7 = param_2[0x6c];
    func_0x00010b8fdad4();
    if ((int)lVar7 != 0) {
      func_0x000107c31084();
      lVar11 = *param_4;
      if (lVar11 == 0) {
        ppplStack_170 = (long ***)&UNK_10f7d0ef0;
        uStack_168 = 0;
      }
      else {
        ppplStack_170 = (long ***)(lVar11 + 0x18);
        uStack_168 = (ulong)*(uint *)(lVar11 + 0xc);
      }
      func_0x000107c2793c(&UNK_10f7cbf6b);
      func_0x00010b8fe304(&ppplStack_e8);
      func_0x000107c31080(&ppplStack_170,lVar7,&ppplStack_e8);
      func_0x000107c31060(&uStack_260,&ppplStack_170);
      func_0x000107c278f8(ppplStack_170);
      func_0x00010b8fe7d8();
    }
  }
  FUN_10b8df048(auStack_270,param_2,&uStack_260);
  FUN_10b98dc84(&lStack_208,param_4);
  ppplVar4 = ppplStack_200;
  uVar5 = lStack_208 == 1;
  if ((bool)uVar5) {
    uStack_278 = uStack_1f8;
    ppplStack_280 = ppplStack_200;
    ppplStack_200 = (long ***)0x0;
    uStack_1f8 = 0;
    if ((long ****)ppplVar4 != (long ****)0x0) {
      pppplVar8 = (long ****)(ppplVar4 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppplVar8,0x10);
        if (bVar3) {
          *(int *)pppplVar8 = *(int *)pppplVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppplStack_e8 = ppplVar4;
    plStack_290 = param_2;
    FUN_10b8f4c14(&ppplStack_288,param_2,&ppplStack_e8);
    func_0x00010b8fe7b4();
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    func_0x0001080e0180(&uStack_230);
    uStack_210 = 0;
    if (*param_4 == 0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    (*(code *)(*param_3)[8])(auStack_2b8,param_3,auStack_2a0);
    if (bStack_2a8 == 1) {
      iVar6 = (int)param_2[0x11];
      func_0x00010b93db08();
      if (iVar6 == 0) goto LAB_10b8ee70c;
      if ((bStack_2a8 & 1) != 0) {
        lVar7 = param_2[0x11];
        FUN_10b93db60(lVar7,auStack_2b8);
        if ((int)lVar7 == 0) goto LAB_10b8ee70c;
        FUN_10b8e5870(&ppplStack_e8,param_2 + 0x8c);
        iVar6 = (int)auStack_108;
        func_0x0001080e0180();
        ppplStack_170 = (long ***)((ulong)ppplStack_170 & 0xffffffffffffff00);
        uStack_118 = 0;
        func_0x000105c3b044();
        if (iVar6 != 0) {
          FUN_10b8c7650(&ppplStack_170,&UNK_10f7cbfbf);
        }
        if (*param_4 == 0) {
          func_0x00010b8fddb4();
        }
        else {
          func_0x00010b8fdc0c();
        }
        func_0x00010b8fe818(alStack_258);
        func_0x0001080df8d0(auStack_108,alStack_258);
        func_0x0001080e0bc0(alStack_258);
        func_0x0001080e8dd4(&ppplStack_170);
        if ((*(byte *)(param_8 + 8) & 1) == 0) {
          func_0x00010b8fe150();
          uStack_160 = extraout_x9[1];
          uStack_168 = *extraout_x9;
          uStack_158 = uStack_158 & 0xffffffffffffff00;
          ppplStack_170 = (long ***)extraout_x8_01;
          func_0x0001080e08ac(alStack_258,&ppplStack_170);
          pppplVar8 = &ppplStack_170;
        }
        else {
          ppplStack_170 = (long ***)param_3;
          uStack_168 = param_6;
          uStack_160 = param_7;
          uStack_158 = param_8;
          func_0x0001080e01a8(auStack_150);
          func_0x00010b8fe100(applStack_190);
          func_0x0001080e08ac(alStack_258,applStack_190);
          pppplVar8 = (long ****)applStack_190;
        }
        uStack_238 = 2;
        func_0x0001080e0bc0(pppplVar8);
        func_0x0001080e0bc0(auStack_108);
        func_0x00010b8e58cc(&ppplStack_e8);
        FUN_10b8eeb60(&uStack_230,alStack_258);
        func_0x0001080e0bc0(alStack_258);
LAB_10b8eeaa4:
        if (2 < param_7) {
          func_0x00010b8eee70(param_2,param_3,&ppplStack_280,param_6 + 0x48,1,param_8);
        }
        func_0x00010b8fddac();
        goto LAB_10b8eead4;
      }
      goto LAB_10b8eeb54;
    }
LAB_10b8ee70c:
    FUN_10b93c510(alStack_258,param_2[0x11],&ppplStack_280);
    lVar7 = alStack_258[0];
    func_0x00010b92dd78();
    if ((int)lVar7 != 0) {
      func_0x00010b8fe15c();
      ppplStack_170 = (long ***)&ppplStack_280;
      uStack_168 = extraout_x8_00;
      func_0x00010b8fde38();
      func_0x00010b8fdf54(&ppplStack_e8);
      if (param_5 == 0) {
        uStack_168 = uStack_e0;
        ppplStack_170 = ppplStack_e8;
        if (-1 < (char)bStack_d1) {
          uStack_168 = (ulong)bStack_d1;
          ppplStack_170 = (long ***)&ppplStack_e8;
        }
        func_0x00010b8fe818();
      }
      else {
        func_0x000107c31084();
        func_0x000107c31080(auStack_2c0);
        FUN_10b99f560(&ppplStack_170,auStack_2c0);
        func_0x00010b8fe28c();
        func_0x000104bda960(ppplStack_170);
        func_0x00010b8fdb48();
        func_0x00010b8fe150();
        func_0x00010b8fd79c();
      }
      func_0x00010b8fe7d8();
      func_0x0001080d5af4(alStack_258[0]);
LAB_10b8eead4:
      uVar5 = bStack_2a8 == 1;
      if ((bool)uVar5) {
        func_0x00010b8fe7bc();
        func_0x000107c278f8(auStack_2b8[0]);
      }
      func_0x00010b8fe7ac();
      ppplStack_170 = ppplStack_288;
      FUN_10b8f4c14(&ppplStack_e8,plStack_290,&ppplStack_170);
      func_0x00010b8fe7b4();
      func_0x000107c278f8(ppplStack_170);
      func_0x00010b8fe798();
      func_0x00010b8bc430(&ppplStack_280);
      goto LAB_10b8eeb1c;
    }
    lVar7 = alStack_258[0];
    FUN_10b92d094(&ppplStack_e8,alStack_258[0],(ulong)&ppplStack_280 | 8);
    ppplVar4 = ppplStack_e8;
    if ((long ****)ppplStack_e8 != (long ****)0x1) {
      func_0x00010b8fe28c();
      func_0x00010b8fe150();
      func_0x00010b8fd79c();
LAB_10b8eea88:
      func_0x00010b8fbe80(&ppplStack_e8);
      func_0x0001080d5af4(alStack_258[0]);
      if ((long ****)ppplVar4 == (long ****)0x1) goto LAB_10b8eeaa4;
      goto LAB_10b8eead4;
    }
    FUN_10b8eeb88();
    lVar11 = lVar7;
    func_0x00010b8eebd0();
    if (lVar7 == 0) {
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      func_0x0001080e0bc0(&ppplStack_170);
      goto LAB_10b8eea88;
    }
    plVar10 = (long *)param_2[0xb1];
    if (plVar10 < (long *)param_2[0xb2]) {
      *plVar10 = lVar7;
      plVar10[1] = 0;
      plVar9 = plVar10 + 4;
      plVar10[2] = lVar11;
      plVar10[3] = 0;
LAB_10b8ee9cc:
      param_2[0xb1] = (long)plVar9;
      func_0x00010b8fdbd8();
      func_0x00010b8fe7a0();
      pppplVar8 = &ppplStack_170;
      func_0x0001080e0bc0();
      FUN_10b8eeb88();
      lVar16 = (long)pppplVar8 - *(long *)(param_2[0xb1] + -0x20);
      func_0x00010b8eebd0();
      lVar11 = param_2[0xb1];
      lVar7 = *(long *)(lVar11 + -0x18);
      lVar15 = (long)pppplVar8 - *(long *)(lVar11 + -0x10);
      lVar14 = *(long *)(lVar11 + -8);
      param_2[0xb1] = lVar11 + -0x20;
      if (param_2[0xb0] != lVar11 + -0x20) {
        *(long *)(lVar11 + -0x38) = *(long *)(lVar11 + -0x38) + lVar16;
        *(long *)(lVar11 + -0x28) = *(long *)(lVar11 + -0x28) + lVar15;
      }
      plVar10 = param_2;
      (**(code **)(*param_2 + 0xd0))();
      plVar9 = (long *)*plVar10;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x108))(plVar9,param_4,lVar16,lVar16 - lVar7);
        (**(code **)(*(long *)*plVar10 + 0x110))((long *)*plVar10,param_4,lVar15,lVar15 - lVar14);
      }
      goto LAB_10b8eea88;
    }
    lVar15 = param_2[0xb0];
    lVar14 = (long)plVar10 - lVar15 >> 5;
    uVar1 = lVar14 + 1;
    if (uVar1 >> 0x3b == 0) {
      uVar12 = param_2[0xb2] - lVar15;
      uVar13 = (long)uVar12 >> 4;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7fffffffffffffdf < uVar12) {
        uVar13 = 0x7ffffffffffffff;
      }
      if (uVar13 == 0) {
        lVar16 = 0;
      }
      else {
        if (uVar13 >> 0x3b != 0) goto LAB_10b8eeb5c;
        lVar16 = uVar13 << 5;
        __Znwm();
      }
      plVar10 = (long *)(lVar16 + ((long)plVar10 - lVar15));
      *plVar10 = lVar7;
      plVar10[1] = 0;
      plVar10[2] = lVar11;
      plVar10[3] = 0;
      plVar9 = plVar10 + 4;
      _memcpy(plVar10 + lVar14 * -4,lVar15);
      param_2[0xb0] = (long)(plVar10 + lVar14 * -4);
      param_2[0xb1] = (long)plVar9;
      param_2[0xb2] = lVar16 + uVar13 * 0x20;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_10b8ee9cc;
    }
  }
  else {
    func_0x00010b8fe28c();
    func_0x00010b8fe150();
    func_0x00010b8fd79c();
LAB_10b8eeb1c:
    FUN_10b8faff8(&lStack_208);
    FUN_10b8df100(auStack_270);
    func_0x00010b8fe58c();
    pppplVar8 = (long ****)applStack_1f0;
    func_0x0001080e8dd4(pppplVar8);
    func_0x00010b8fd3bc(uStack_78);
    if ((bool)uVar5) {
      return pppplVar8;
    }
    ___stack_chk_fail();
LAB_10b8eeb54:
    func_0x0001080da3e4();
  }
  func_0x00010bdb3f30();
LAB_10b8eeb5c:
  func_0x000104bfe188();
  func_0x00010b8fd9d4();
  func_0x0001080df8d0();
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(unaff_x19 + 0x20);
  return param_3;
}



/* Entry: 10b8eeb60; end: 10b8eeb87;  */

void FUN_10b8eeb60(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8fd9d4();
  func_0x0001080df8d0();
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 10b8eeb88; end: 10b8eebef;  */

undefined8 FUN_10b8eeb88(void)

{
  int iVar1;
  undefined4 uStack_3c;
  undefined1 auStack_38 [12];
  undefined8 uStack_2c;
  
  uStack_3c = 10;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x12,auStack_38,&uStack_3c);
  if (iVar1 != 0) {
    uStack_2c = 0;
  }
  return uStack_2c;
}



/* Entry: 10b8eebf0; end: 10b8ef1b7;  */

void FUN_10b8eebf0(undefined8 param_1,long param_2,long *param_3,long **param_4,long *param_5,
                  long param_6,long **param_7,ulong param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  long **pplVar4;
  long **pplVar5;
  long lVar6;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  undefined8 extraout_x8_03;
  long **pplVar7;
  long lVar8;
  long *extraout_x9;
  int extraout_w11;
  long unaff_x19;
  undefined8 uVar9;
  long **pplVar10;
  long *plVar11;
  undefined1 uStack_389;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long *plStack_358;
  undefined1 auStack_350 [16];
  long *plStack_340;
  long *plStack_338;
  long *plStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  long **pplStack_310;
  undefined1 uStack_300;
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [24];
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined1 auStack_2a0 [16];
  long *plStack_290;
  long lStack_288;
  undefined1 auStack_268 [32];
  undefined8 uStack_248;
  long *aplStack_1d8 [2];
  long *aplStack_1c8 [3];
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [32];
  long *plStack_180;
  long lStack_178;
  long **pplStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [56];
  undefined1 uStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [112];
  long *plStack_90;
  ulong uStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  pplVar7 = param_4;
  plVar11 = param_5;
  lVar6 = param_6;
  func_0x00010b8fd408();
  uStack_68 = extraout_x8;
  FUN_10b8e5870(auStack_100,param_2 + 0x460);
  puVar3 = auStack_120;
  func_0x0001080e0180();
  plStack_180 = (long *)((ulong)plStack_180 & 0xffffffffffffff00);
  uStack_128 = 0;
  func_0x000105c3b044();
  if ((int)puVar3 != 0) {
    func_0x000107c31084();
    lVar8 = *param_5;
    if (lVar8 == 0) {
      plStack_90 = (long *)&UNK_10f7d0ef0;
      uStack_88 = 0;
    }
    else {
      plStack_90 = (long *)(lVar8 + 0x18);
      uStack_88 = (ulong)*(uint *)(lVar8 + 0xc);
    }
    plStack_80 = param_4[2];
    uStack_78 = 0;
    func_0x000107c2793c(&UNK_10f7cbf97);
    pplVar7 = &plStack_90;
    func_0x000107c3173c(auStack_1a0);
    func_0x000107c31080(aplStack_1c8,puVar3,auStack_1a0);
    func_0x00010b9a7520(&plStack_90,&UNK_10f7cbf84,0x12,aplStack_1c8);
    func_0x00010b8a6ed0(&plStack_180,&plStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_90);
    func_0x00010b8fdbd0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
  }
  FUN_10b9024d0(&plStack_90,param_4);
  uVar1 = (char)uStack_78 == '\x01';
  if ((bool)uVar1) {
    if (*param_5 == 0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    pplVar5 = aplStack_1c8;
    func_0x00010b8fe7f8(auStack_1a0);
    func_0x00010b8fe670();
    func_0x00010b8fddf8();
    uVar1 = (char)uStack_78 == '\x01';
    if (((bool)uVar1) && (plStack_90 != (long *)0x0)) {
      func_0x00010b8fd5d8();
    }
    pplVar10 = (long **)0x1;
  }
  else {
    plStack_1b0 = param_4[1];
    plStack_1a8 = param_4[2];
    FUN_10b902418(aplStack_1c8,&plStack_1b0);
    if (*param_5 == 0) {
      func_0x00010b8fddb4();
    }
    else {
      func_0x00010b8fdc0c();
    }
    pplVar5 = aplStack_1d8;
    func_0x00010b8fe7f8(auStack_1a0);
    func_0x00010b8fe670();
    func_0x00010b8fddf8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(aplStack_1c8);
    pplVar10 = (long **)0x0;
  }
  func_0x0001080e8dd4(&plStack_180);
  if ((*(byte *)(param_8 + 8) & 1) == 0) {
    func_0x00010b8fe150();
    pplStack_170 = (long **)extraout_x9[1];
    lStack_178 = *extraout_x9;
    uStack_168 = uStack_168 & 0xffffffffffffff00;
    plStack_180 = extraout_x8_00;
    func_0x00010b8fddac();
    *(int *)(unaff_x19 + 0x20) = (int)pplVar10;
    pplVar4 = &plStack_180;
  }
  else {
    plStack_180 = param_3;
    lStack_178 = param_6;
    pplStack_170 = param_7;
    uStack_168 = param_8;
    func_0x0001080e01a8(auStack_160);
    pplVar5 = &plStack_180;
    (**(code **)(*param_3 + 0x110))(&plStack_90,param_3,auStack_118);
    func_0x00010b8fddac();
    *(int *)(unaff_x19 + 0x20) = (int)pplVar10;
    pplVar4 = &plStack_90;
  }
  func_0x0001080e0bc0(pplVar4);
  func_0x0001080e0bc0(auStack_120);
  func_0x00010b8e58cc(auStack_100);
  func_0x00010b8fd3bc(uStack_68);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b8fd4b8();
    uVar1 = 0;
    uStack_248 = extraout_x8_01;
    if (*(char *)(lVar6 + 8) == '\x01') {
      func_0x00010b8fd9b8();
      FUN_10b8ea5e0();
      uVar1 = 0;
      unaff_x19 = lVar6;
      param_7 = pplVar7;
      pplVar10 = pplVar5;
      if ((*pplVar5 == plRam00000001137fcfe0) && (uVar1 = 0, pplVar5[1] == plRam00000001137fcfe8)) {
        plStack_328 = (long *)&UNK_10f7cc798;
        uStack_320 = 0x13;
        func_0x00010b8fe078(auStack_268);
        func_0x00010b9000a8(&plStack_2c0,lVar6,auStack_268);
        FUN_10b8eb83c(param_8 + 0x188,&plStack_2c0);
        func_0x00010b8fb190(&plStack_2c0);
        func_0x00010b8fe610();
        uVar1 = *(long *)(param_8 + 0x188) == 1;
        if (!(bool)uVar1) {
          FUN_10b8f23fc(param_8,&UNK_10f7cc7ac,0xe,param_8 + 400);
        }
        pplVar10 = &plStack_328;
        if (((ulong)plVar11 & 1) != 0) goto LAB_10b8ef10c;
        plStack_328 = (long *)&UNK_10f7cc7bb;
        uStack_320 = 0x19;
        func_0x00010b8fe078(&plStack_2c0);
        pplVar7 = &plStack_290;
        FUN_10b8f2484(&plStack_290,lVar6,&plStack_2c0);
        func_0x0001080e0bc0(&plStack_2c0);
        if (plStack_290 != (long *)0x1) {
          plStack_2c0 = (long *)0x2;
          uVar1 = 0;
          uStack_2b8 = 0;
          if (lStack_288 != 0) {
            do {
              func_0x00010b8fe168();
              uStack_2b8 = extraout_x8_03;
            } while (extraout_w11 != 0);
          }
          FUN_10b8e32c8();
          FUN_10b8e5504(&plStack_2c0);
          goto LAB_10b8ef104;
        }
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        plStack_2c0 = param_3;
        lStack_2a8 = lVar6;
        func_0x0001080e01a8(auStack_2a0);
        func_0x00010b8fe100(auStack_2e0);
        uVar1 = *(char *)(lStack_2a8 + 8) == '\x01';
        if (!(bool)uVar1) {
          pplVar7 = *(long ***)(param_8 + 0x140);
          FUN_10b9a0084(&uStack_388);
          plStack_328 = (long *)0x2;
          uStack_320 = uStack_388;
          uStack_388 = 0;
          FUN_10b8e32c8(pplVar7,&plStack_328);
          FUN_10b8e5504(&plStack_328);
          func_0x00010b8fdd9c();
          goto LAB_10b8ef100;
        }
        param_7 = (long **)0x1137fcfc0;
        if ((bRam00000001137fcfc8 & 1) == 0) goto LAB_10b8ef194;
        goto LAB_10b8ef008;
      }
    }
    while (func_0x00010b8fd3bc(uStack_248), !(bool)uVar1) {
      ___stack_chk_fail();
      lVar6 = unaff_x19;
LAB_10b8ef194:
      iVar2 = 0x137fcfc8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x00010b8fe584(&UNK_10f7cc7d5);
        func_0x00010b8fe77c();
      }
LAB_10b8ef008:
      uVar9 = *(undefined8 *)(param_8 + 0x140);
      uStack_388 = 0;
      uStack_380 = 0;
      func_0x00010b8fd698();
      uStack_320 = 0;
      uStack_318 = 1;
      pplVar10[4] = (long *)0x0;
      uStack_300 = 0;
      pplVar7 = &plStack_358;
      plStack_328 = extraout_x8_02;
      pplStack_310 = param_7;
      FUN_10b9a3a64(&plStack_358,&plStack_328);
      uStack_389 = 0;
      FUN_10b8e1630(&plStack_340,param_3,auStack_2d8,&plStack_358,lVar6,&uStack_389);
      pplVar10[6] = (long *)0x1;
      pplVar10[8] = plStack_338;
      pplVar10[7] = plStack_340;
      plStack_340 = (long *)0x0;
      plStack_338 = (long *)0x0;
      FUN_10b8e32c8(uVar9,auStack_2f8);
      FUN_10b8e5504(auStack_2f8);
      func_0x00010b8fe70c();
      FUN_10b9a3d64(auStack_350);
LAB_10b8ef100:
      func_0x00010b8fe7ac();
LAB_10b8ef104:
      func_0x00010b8fb190(&plStack_290);
      unaff_x19 = lVar6;
      param_7 = pplVar7;
LAB_10b8ef10c:
      if ((*(long *)(param_8 + 0x2f8) != 0) && (uVar1 = 0, *(long *)(param_8 + 0x188) == 1)) {
        plVar11 = *(long **)(param_8 + 0x2e8);
        pplVar10[0xe] = *(long **)(param_8 + 0x2f0);
        pplVar10[0xd] = plVar11;
        func_0x00010b8fc890(&plStack_2c0);
        pplVar7 = (long **)pplVar10[0xd];
        pplVar10[0xe] = pplVar10[0xe];
        pplVar10[0xd] = pplVar10[0xd];
        param_7 = (long **)(*(long *)(param_8 + 0x2e8) + *(long *)(param_8 + 0x300));
        while (uVar1 = pplVar7 == param_7, !(bool)uVar1) {
          plStack_328 = (long *)0x0;
          uStack_320 = 0;
          func_0x0001080e01a8(&plStack_328);
          func_0x00010b8fea48();
          FUN_10b8f24e8();
          FUN_10b8f25ec(&plStack_2c0);
          pplVar7 = (long **)pplVar10[0xd];
        }
      }
    }
    return;
  }
  return;
}



/* Entry: 10b8ef1b8; end: 10b8ef403;  */

void FUN_10b8ef1b8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x00010b8fd5f8(auStack_38);
  if ((*(byte *)(param_2[3] + 8) & 1) == 0) {
    func_0x00010b8fd30c(*param_2);
  }
  else {
    func_0x00010b8fd928();
    FUN_10b8ee4c0();
  }
  func_0x00010b8fd9e0();
  return;
}



/* Entry: 10b8ef404; end: 10b8ef6db;  */

void FUN_10b8ef404(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  int extraout_w9;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar5;
  long *unaff_x22;
  long lVar6;
  undefined8 in_register_00005008;
  undefined8 uVar7;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [8];
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  func_0x00010b8fd358();
  uStack_48 = extraout_x8;
  func_0x00010b8fd5f8(auStack_d8);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
    plVar5 = unaff_x21;
    lVar6 = param_1;
    uVar7 = in_register_00005008;
    goto LAB_10b8ef68c;
  }
  unaff_x22 = &lStack_90;
  FUN_10b98dc84(&lStack_90,auStack_d8);
  uVar7 = uStack_80;
  lVar6 = lStack_88;
  in_ZR = lStack_90 == 1;
  if (!(bool)in_ZR) {
    func_0x00010b8fd500();
    goto LAB_10b8ef684;
  }
  unaff_x22 = &lStack_f0;
  uStack_e8 = uStack_80;
  lStack_f0 = lStack_88;
  lStack_88 = 0;
  uStack_80 = 0;
  FUN_10b93c510(&plStack_f8,unaff_x21[0x11],&lStack_f0);
  plVar5 = unaff_x21 + 0x14;
  unaff_x21 = &lStack_a0;
  plVar3 = plStack_f8;
  FUN_10b92d514(&lStack_a0,plStack_f8,(ulong)unaff_x22 | 8,*plVar5);
  plVar5 = plStack_98;
  in_ZR = lStack_a0 == 1;
  if (!(bool)in_ZR) {
    func_0x00010b8fd500();
    goto LAB_10b8ef66c;
  }
  plStack_98 = (long *)0x0;
  unaff_x22 = (long *)0x1137fcfb0;
  if ((bRam00000001137fcfb8 & 1) == 0) goto LAB_10b8ef6b8;
  do {
    func_0x00010b8fd698();
    uStack_c8 = 0;
    uStack_c0 = 2;
    uStack_b0 = 0;
    uStack_a8 = 0;
    plStack_b8 = unaff_x22;
    if ((plVar5 != (long *)0x0) && (plVar5[2] != 0)) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    func_0x00010b8fe6ec();
    pcStack_78 = FUN_10b8fbec8;
    ppuStack_70 = &PTR_FUN_110d73ce8;
    plStack_68 = plVar5;
    FUN_10b8de86c();
    func_0x00010b8fd604(ppuStack_70);
    do {
      func_0x00010b8fdb60();
    } while (extraout_w9 != 0);
    plStack_d0 = plVar3;
    func_0x00010b8fdb90();
    (**(code **)(extraout_x8_01 + 0x70))(&pcStack_78);
    func_0x0001080e0c4c(plStack_d0);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x18) + 8) & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      if ((plVar5 != (long *)0x0) && (plVar5[2] != 0)) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b8fdea0();
      (*extraout_x9)(&plStack_d0);
      plVar4 = plVar5;
      if (plVar5 != (long *)0x0) {
        func_0x00010b8fd5d8();
      }
      func_0x00010b8fe44c();
      if ((extraout_x8_02 & 1) == 0) {
        func_0x00010b8fd87c();
LAB_10b8ef638:
        *(undefined8 *)(unaff_x19 + 0x10) = uVar7;
        *(long *)(unaff_x19 + 8) = lVar6;
        *(undefined1 *)(unaff_x19 + 0x18) = 0;
      }
      else {
        (**(code **)(*plVar4 + 0xf0))();
        func_0x00010b8fd91c();
        if ((extraout_x8_03 & 1) == 0) {
          func_0x00010b8fd340();
          goto LAB_10b8ef638;
        }
        func_0x00010b8fddac();
      }
      func_0x0001080e0bc0(&plStack_d0);
    }
    func_0x0001080e0bc0(&pcStack_78);
    do {
      func_0x00010b8fe9cc();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3 + 1,0x10);
      if (bVar2) {
        plVar3[1] = extraout_x8_04;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010b8fd734();
    }
    FUN_10b8bb3c0(plVar5);
    unaff_x21 = plVar5;
    unaff_x22 = plVar3;
LAB_10b8ef66c:
    func_0x00010b8fbea4(&lStack_a0);
    func_0x0001080d5af4(plStack_f8);
    func_0x00010b8bc430(&lStack_f0);
    param_1 = lVar6;
    in_register_00005008 = uVar7;
LAB_10b8ef684:
    FUN_10b8faff8(&lStack_90);
    plVar5 = unaff_x21;
    lVar6 = param_1;
    uVar7 = in_register_00005008;
LAB_10b8ef68c:
    func_0x00010b8fe650();
    func_0x00010b8fd3bc(uStack_48);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
LAB_10b8ef6b8:
    plVar3 = (long *)0x1137fcfb8;
    ___cxa_guard_acquire();
    if ((int)plVar3 != 0) {
      plVar3 = (long *)&UNK_10f7cc009;
      func_0x00010b8fe584();
      func_0x00010b8fe77c();
    }
  } while( true );
}



/* Entry: 10b8ef6dc; end: 10b8ef8eb;  */

void FUN_10b8ef6dc(void)

{
  undefined8 uVar1;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  long lStack_40;
  char cStack_38;
  byte bStack_37;
  
  func_0x00010b8fd538();
  func_0x00010b8fd830(&lStack_40);
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    if (((cStack_38 == '\b') && ((bStack_37 & 1) != 0)) && (lStack_40 != 0)) {
      do {
        func_0x00010b8fe168();
      } while (extraout_w11 != 0);
      func_0x00010b8ebb10();
      FUN_10b8bf698();
      func_0x00010b8fdfc0();
      uVar1 = extraout_x8_00;
    }
    else {
      func_0x00010b8fdf30();
      func_0x00010b8fd500();
      func_0x00010b8fdd68();
      uVar1 = 0;
    }
    func_0x000104bd4e64(uVar1);
  }
  func_0x00010b8fdbfc();
  return;
}



/* Entry: 10b8ef8ec; end: 10b8efcbb;  */

void FUN_10b8ef8ec(void)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int extraout_w10;
  long unaff_x21;
  long *plVar5;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  func_0x00010b8feb10();
  func_0x00010b8fd538();
  func_0x00010b8fd830(&stack0x00000020);
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8efa4c;
  }
  func_0x00010b8fda80(&stack0x00000010);
  func_0x00010b8e5e04();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    FUN_10b926c30(&stack0x00000008,*(undefined8 *)(unaff_x21 + 0x88),&stack0x00000020);
    puVar4 = *(undefined8 **)(unaff_x21 + 0x88);
    FUN_10b926c30(puVar4,&stack0x00000010);
    if ((in_stack_00000008 == 0) || (in_stack_00000000 == 0)) {
      func_0x00010b8fe868();
      func_0x00010b8fd500();
      func_0x00010b8fe0d8();
    }
    else {
      func_0x00010b8fe784();
      plVar5 = puVar4 + 1;
      *plVar5 = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_DAT_110d73d18;
      puVar1 = puVar4 + 3;
      FUN_10b930b70(puVar1,&stack0x00000008);
      if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        in_stack_00000030 = puVar1;
        in_stack_00000038 = puVar4;
        func_0x000107c278e4(puVar4 + 4,&stack0x00000030);
        func_0x000107c284e8(&stack0x00000030);
        if (puVar4[5] != 0) goto LAB_10b8efa0c;
      }
      else {
LAB_10b8efa0c:
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10 != 0);
      }
      in_stack_00000030 = puVar1;
      func_0x00010b8fdb70();
      func_0x00010b8fdb20();
      if (in_stack_00000030 != (undefined8 *)0x0) {
        func_0x00010b8fd5d8();
      }
      func_0x00010b8fc02c(puVar1);
    }
    func_0x0001080d5938(in_stack_00000000);
    func_0x0001080d5938(in_stack_00000008);
  }
  func_0x00010b8fdbfc();
LAB_10b8efa4c:
  func_0x00010b8fe08c();
  return;
}



/* Entry: 10b8efcbc; end: 10b8effef;  */

void FUN_10b8efcbc(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 *extraout_x8_02;
  long lVar9;
  long lVar10;
  long extraout_x8_03;
  undefined8 *extraout_x8_04;
  ulong extraout_x8_05;
  long lVar11;
  long *extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar12;
  ulong extraout_x10;
  ulong uVar13;
  ulong extraout_x11;
  long lVar14;
  long extraout_x12;
  undefined8 *extraout_x13;
  ulong uVar15;
  long extraout_x14;
  ulong extraout_x15;
  long unaff_x19;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 uVar16;
  long *in_stack_00000008;
  long in_stack_00000010;
  char cStack0000000000000018;
  byte bStack0000000000000019;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000038;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000e0;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long *plStack_28;
  long lStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x00010b8fe46c();
  plVar8 = param_2;
  func_0x00010b8fd4b8();
  in_stack_00000088 = extraout_x8_00;
  func_0x00010b8fd830(&stack0x00000010);
  func_0x00010b8fe2ac();
  lVar11 = in_stack_00000010;
  if ((extraout_x8_01 & 1) == 0) {
    func_0x00010b8fd458(*param_2);
    goto LAB_10b8efef0;
  }
  in_ZR = cStack0000000000000018 == '\b';
  unaff_x19 = 0;
  if ((((bool)in_ZR) && ((bStack0000000000000019 & 1) != 0)) &&
     (unaff_x19 = lVar11, in_stack_00000010 != 0)) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10 != 0);
    if (*(long *)(lVar11 + 0x20) == 0) goto LAB_10b8efec8;
    in_stack_00000048 = 0;
    func_0x00010b8fe178();
    in_stack_00000028 = (long *)0x0;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    puVar6 = (undefined8 *)(lVar11 + 0x10);
    in_stack_00000020 = extraout_x8_02;
    func_0x00010527d444();
    lVar9 = *(long *)(lVar11 + 0x10);
    lVar11 = *(long *)(lVar11 + 0x28);
    in_stack_00000050 = puVar6;
    in_stack_00000058 = plVar8;
    while (plVar8 = in_stack_00000058, in_ZR = in_stack_00000050 == (undefined8 *)(lVar9 + lVar11),
          !(bool)in_ZR) {
      FUN_10b926c30(&stack0x00000008,param_1[0x11],in_stack_00000058 + 1);
      unaff_x23 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) {
        FUN_10b99f5f8();
        plVar8 = (long *)register0x00000008;
        func_0x00010b8fdab0();
        func_0x00010b8fdd68();
      }
      else {
        unaff_x24 = (long *)&stack0x00000020;
        FUN_10b8fc070(unaff_x24,plVar8);
        lVar10 = 0;
        uVar15 = (ulong)unaff_x24 >> 7;
        uVar13 = ((ulong)unaff_x24 & 0x7f) * 0x101010101010101;
        lVar14 = *plVar8;
        plVar7 = in_stack_00000028;
        uVar12 = in_stack_00000038;
        puVar6 = in_stack_00000020;
        while( true ) {
          uVar13 = *(ulong *)((long)puVar6 + (uVar15 & uVar12)) ^ uVar13;
          for (uVar13 = uVar13 + 0xfefefefefefefeff & (uVar13 ^ 0xffffffffffffffff) &
                        0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
            uVar2 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            puVar6 = (undefined8 *)
                     ((uVar15 & uVar12) + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                     uVar12);
            in_ZR = 1;
            if (plVar7[(long)puVar6 * 2] == lVar14) goto LAB_10b8efe90;
          }
          func_0x00010b8fea54(lVar10);
          in_ZR = (extraout_x15 & 0x8080808080808080) == 0;
          if (!(bool)in_ZR) break;
          lVar10 = extraout_x8_03 + 8;
          uVar15 = lVar10 + extraout_x14;
          plVar7 = extraout_x9;
          uVar12 = extraout_x10;
          uVar13 = extraout_x11;
          lVar14 = extraout_x12;
          puVar6 = extraout_x13;
        }
        puVar6 = &stack0x00000020;
        FUN_10b8fc0b0(puVar6,unaff_x24);
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          piVar1 = (int *)(lVar10 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        in_stack_00000028[(long)puVar6 * 2] = lVar10;
        (in_stack_00000028 + (long)puVar6 * 2)[1] = 0;
        bVar5 = (byte)unaff_x24 & 0x7f;
        *(byte *)((long)in_stack_00000020 + (long)puVar6) = bVar5;
        *(byte *)((long)in_stack_00000020 +
                 (in_stack_00000038 & 7) + (in_stack_00000038 & (ulong)(puVar6 + -1)) + 1) = bVar5;
        plVar7 = in_stack_00000028;
LAB_10b8efe90:
        plVar8 = (long *)&stack0x00000008;
        func_0x00010b8d0b74(plVar7 + (long)puVar6 * 2 + 1);
      }
      func_0x0001080d5938(in_stack_00000008);
      if (unaff_x23 == (long *)0x0) goto LAB_10b8effe0;
      func_0x00010527d4cc(&stack0x00000050);
    }
    param_1 = (undefined8 *)0x70;
    __Znwm();
    func_0x00010b8fea94();
    *param_1 = &PTR_DAT_110d73db8;
    param_1 = param_1 + 3;
    plVar8 = in_stack_00000028;
    uVar16 = in_stack_00000030;
    uVar15 = in_stack_00000038;
    func_0x00010b8fe178();
    in_stack_00000028 = (long *)0x0;
    in_stack_00000030 = 0;
    in_stack_00000038 = 0;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000048 = 0;
    puVar6 = extraout_x8_04;
    in_stack_00000050 = in_stack_00000020;
    in_stack_00000058 = plVar8;
    in_stack_00000060 = uVar16;
    in_stack_00000068 = uVar15;
    FUN_10b93f7ac(param_1,&stack0x00000050);
    in_stack_00000020 = puVar6;
    FUN_10b8f78dc(&stack0x00000050);
    if ((unaff_x23[5] == 0) || (in_ZR = *(long *)(unaff_x23[5] + 8) == -1, (bool)in_ZR)) {
      in_stack_00000050 = param_1;
      in_stack_00000058 = unaff_x23;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(unaff_x24,0x10);
        if (bVar4) {
          *unaff_x24 = *unaff_x24 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      func_0x000107c278e4(unaff_x23 + 4,&stack0x00000050);
      func_0x000107c284e8(&stack0x00000050);
      if (unaff_x23[5] != 0) goto LAB_10b8effac;
    }
    else {
LAB_10b8effac:
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10_00 != 0);
    }
    in_stack_00000050 = param_1;
    func_0x00010b8fdea0();
    plVar8 = (long *)&stack0x00000050;
    (*extraout_x9_00)(extraout_x8);
    if (in_stack_00000050 != (undefined8 *)0x0) {
      func_0x00010b8fd5d8();
    }
    func_0x00010b8fc374(param_1);
LAB_10b8effe0:
    FUN_10b8f78dc(&stack0x00000020);
  }
  else {
LAB_10b8efec8:
    FUN_10b99f5f8(&stack0x00000050,&UNK_10f7cc130);
    plVar8 = (long *)&stack0x00000050;
    func_0x00010b8fdab0();
    func_0x000104bda960(in_stack_00000050);
  }
  func_0x000104bd4e64(unaff_x19);
LAB_10b8efef0:
  func_0x00010b8fdbfc();
  func_0x00010b8fd3bc(in_stack_00000088);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_8 = FUN_10b8efff0;
  puStack_30 = param_1;
  plStack_28 = param_2;
  lStack_18 = unaff_x19;
  puStack_10 = &stack0x000000e0;
  func_0x00010b8e5fd8(&plStack_70,plVar8,0);
  plVar7 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    func_0x00010b8fe128(plStack_70,&PTR_DAT_1107e3600,&PTR_DAT_110d7da90);
  }
  func_0x00010b8a17e0();
  if (plStack_70 != (long *)0x0) {
    func_0x00010b8fd5d8();
  }
  func_0x00010b8fd91c();
  if ((extraout_x8_05 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else if (plVar7 == (long *)0x0) {
    func_0x00010b8fdf30();
    func_0x00010b8fd500();
    func_0x00010b8fdd68();
  }
  else {
    (**(code **)(*plVar7 + 0x38))(auStack_40,plVar7);
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    func_0x00010b8fd9e8(*plVar8);
    func_0x00010b8fe7cc();
    func_0x00010b8fe118();
  }
  func_0x0001080cb914(plVar7);
  return;
}



/* Entry: 10b8efff0; end: 10b8f00bb;  */

void FUN_10b8efff0(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong extraout_x8;
  long *plStack_70;
  undefined8 uStack_68;
  undefined1 auStack_40 [16];
  
  func_0x00010b8e5fd8(&plStack_70,param_2,0);
  plVar1 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    func_0x00010b8fe128(plStack_70,&PTR_DAT_1107e3600,&PTR_DAT_110d7da90);
  }
  func_0x00010b8a17e0();
  if (plStack_70 != (long *)0x0) {
    func_0x00010b8fd5d8();
  }
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else if (plVar1 == (long *)0x0) {
    func_0x00010b8fdf30();
    func_0x00010b8fd500();
    func_0x00010b8fdd68();
  }
  else {
    (**(code **)(*plVar1 + 0x38))(auStack_40,plVar1);
    plStack_70 = (long *)0x0;
    uStack_68 = 0;
    func_0x00010b8fd9e8(*param_2);
    func_0x00010b8fe7cc();
    func_0x00010b8fe118();
  }
  func_0x0001080cb914(plVar1);
  return;
}



/* Entry: 10b8f00bc; end: 10b8f0737;  */

void FUN_10b8f00bc(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long lVar6;
  int extraout_w9;
  int extraout_w10;
  undefined8 unaff_x20;
  long unaff_x21;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  long *plStack_70;
  undefined8 *puStack_68;
  
  func_0x00010b8fd538();
  func_0x00010b8fd830(auStack_80);
  func_0x00010b8fd91c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8f02a0;
  }
  func_0x00010b8fda80(&lStack_88);
  func_0x00010b8e5edc();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
LAB_10b8f0294:
    func_0x00010b8fd2ec();
  }
  else {
    func_0x00010b8fe358();
    func_0x00010b8e5e9c();
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) == 0) goto LAB_10b8f0294;
    func_0x00010b8e5e9c();
    func_0x00010b8fd91c();
    if ((extraout_x8_02 & 1) == 0) goto LAB_10b8f0294;
    uVar3 = unaff_x20;
    func_0x00010b8fe80c();
    func_0x00010b8fd91c();
    if ((extraout_x8_03 & 1) == 0) goto LAB_10b8f0294;
    puVar4 = *(undefined8 **)(unaff_x21 + 0x88);
    FUN_10b926c30(&lStack_90,puVar4,auStack_80);
    lVar6 = lStack_88;
    if (lStack_90 == 0) {
      func_0x00010b8fe868();
      func_0x00010b8fd500();
      func_0x00010b8fe0d8();
    }
    else {
      func_0x00010b8fdb18();
      plVar7 = puVar4 + 1;
      *plVar7 = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_DAT_110d73e08;
      plVar8 = puVar4 + 3;
      *plVar8 = (long)&PTR_FUN_110d72cd8;
      if (lVar6 != 0) {
        do {
          func_0x00010b8fd7f4();
        } while (extraout_w10 != 0);
      }
      puVar4[4] = lVar6;
      plVar5 = (long *)0x40;
      __Znwm();
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_70 = plVar8;
      puStack_68 = puVar4;
      FUN_10b8e2f34(plVar5,&lStack_90,&plStack_70);
      func_0x00010b8d1018(&plStack_70);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uStack_98 = 1;
      uStack_a0 = 0;
      plStack_70 = plVar8;
      puStack_68 = puVar4;
      (**(code **)(*(long *)(lStack_90 + 0x18) + 0x28))
                (lStack_90 + 0x18,&plStack_70,param_1,unaff_x20,uVar3,&uStack_a0);
      func_0x00010b8fe0e8();
      func_0x00010b8d1018(&plStack_70);
      plVar7 = plVar5 + 1;
      do {
        func_0x00010b8fe3dc();
      } while (extraout_w9 != 0);
      plStack_70 = plVar5;
      func_0x00010b8fdb90();
      func_0x00010b8fdb20();
      func_0x0001080e0c4c(plStack_70);
      do {
        lVar6 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      func_0x000107c27b90(puVar4);
    }
    func_0x0001080d5938(lStack_90);
  }
  func_0x000104bda3ac(lStack_88);
LAB_10b8f02a0:
  func_0x00010b8fe08c();
  return;
}



/* Entry: 10b8f0738; end: 10b8f085f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10b8f0738(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  long alStack_90 [2];
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  puVar5 = &uStack_d0;
  func_0x00010b8fd3e0();
  puVar4 = param_1;
  uStack_58 = extraout_x8;
  if ((*(byte *)(param_1 + 0xaf) & 1) == 0) {
    puVar4 = param_2;
    func_0x00010b8fda14(alStack_90);
    func_0x00010b8fd91c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x00010b8fd2ec();
      func_0x00010b8fe658();
      goto LAB_10b8f0848;
    }
    func_0x00010b8fda80(&uStack_a0);
    func_0x00010b8e5e04();
    bVar1 = *(byte *)(param_2[3] + 8);
    if ((bVar1 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fe604();
      if (alStack_90[0] != 0) {
        do {
          func_0x00010b8fd810();
        } while (extraout_w10 != 0);
      }
      uVar3 = uStack_98;
      uVar2 = uStack_a0;
      uStack_a0 = 0;
      uStack_98 = 0;
      alStack_90[1] = 0x10b8f7958;
      ppuStack_80 = &PTR_FUN_110d736e0;
      func_0x00010b8fdb18();
      puVar4[1] = uStack_c8;
      *puVar4 = uStack_d0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar4[2] = alStack_90[0];
      puVar4[3] = uVar2;
      *(undefined2 *)(puVar4 + 4) = uVar3;
      uStack_b0 = 0;
      puStack_78 = puVar4;
      FUN_10b8ec1c8(param_1[0x13],alStack_90 + 1);
      (*(code *)*ppuStack_80)(&ppuStack_80);
      FUN_10b8f0860(&uStack_d0);
      puVar4 = puVar5;
    }
    func_0x00010b8fe118();
    func_0x00010b8fe658();
    if (bVar1 == 0) goto LAB_10b8f0848;
  }
  func_0x00010b8fd2ec();
LAB_10b8f0848:
  func_0x00010b8fd3bc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fe824();
    func_0x000107c278f4(unaff_x19 + 2);
    puVar4 = unaff_x19;
    func_0x00010b8e9e78();
    if (puVar4 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return unaff_x19;
  }
  return puVar4;
}



/* Entry: 10b8f0860; end: 10b8f0887;  */

long FUN_10b8f0860(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b8fe824();
  func_0x000107c278f4(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x00010b8e9e78();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b8f0888; end: 10b8f0967;  */

undefined1 * FUN_10b8f0888(undefined1 *param_1,undefined1 *param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  undefined1 *unaff_x19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  puVar3 = &uStack_a0;
  func_0x00010b8fd3e0();
  puVar2 = param_1;
  uStack_48 = extraout_x8;
  if ((param_1[0x578] & 1) == 0) {
    puVar2 = param_2;
    func_0x00010b8fda14(&lStack_80,param_2);
    bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + 8);
    if ((bVar1 & 1) == 0) {
      func_0x00010b8fd2ec();
    }
    else {
      func_0x00010b8fe604();
      uStack_58 = 0;
      if (lStack_80 != 0) {
        do {
          func_0x00010b8fdb28();
          uStack_58 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      pcStack_78 = FUN_10b8f7a3c;
      ppuStack_70 = &PTR_DAT_110d73700;
      uStack_60 = uStack_98;
      uStack_68 = uStack_a0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_10b8ec1c8(*(undefined8 *)(param_1 + 0x98),&pcStack_78);
      func_0x00010b8fd604(ppuStack_70);
      FUN_10b8f0968(&uStack_a0);
      puVar2 = (undefined1 *)puVar3;
    }
    func_0x00010b8fdb48();
    if (bVar1 == 0) goto LAB_10b8f0944;
  }
  func_0x00010b8fd2ec();
LAB_10b8f0944:
  func_0x00010b8fd3bc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fdf68();
    func_0x000107c278f4();
    puVar2 = unaff_x19;
    func_0x00010b8e9e78();
    if (puVar2 != (undefined1 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return unaff_x19;
  }
  return puVar2;
}



/* Entry: 10b8f0968; end: 10b8f098b;  */

long FUN_10b8f0968(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b8fdf68();
  func_0x000107c278f4();
  lVar1 = unaff_x19;
  func_0x00010b8e9e78();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b8f098c; end: 10b8f09df;  */

void FUN_10b8f098c(undefined8 param_1,undefined8 param_2)

{
  int extraout_w8;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x00010b8fd538();
  func_0x00010b8e5edc(&uStack_38,param_2,0);
  func_0x00010b8fd91c();
  if (extraout_w8 == 1) {
    func_0x00010b94bd64(*(undefined8 *)(unaff_x21 + 0x98),&uStack_38);
  }
  func_0x00010b8fd2ec();
  func_0x000104bda3ac(uStack_38);
  return;
}



/* Entry: 10b8f09e0; end: 10b8f0ba7;  */

void FUN_10b8f09e0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar4;
  int extraout_w12;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  ulong uStack_110;
  undefined8 uStack_108;
  code **ppcStack_100;
  undefined8 auStack_f8 [5];
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  code **ppcStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b8fd358();
  uVar5 = *param_2;
  uStack_58 = extraout_x8;
  func_0x00010b8fd6ec();
  ppuStack_b0 = *(undefined ***)(unaff_x20 + 0x30);
  pcStack_b8 = (code *)0x0;
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  ppcStack_88 = &pcStack_b8;
  lStack_80 = 0;
  uStack_78 = 4;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_d0 = param_1;
  puStack_c8 = param_2;
  FUN_10b8e143c(&uStack_110,uVar5,&uStack_d0,&ppcStack_88,*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(ulong *)(unaff_x20 + 0x10) == 2;
  if (*(ulong *)(unaff_x20 + 0x10) < 2) {
    iVar2 = 0;
LAB_10b8f0a9c:
    uVar5 = 0;
  }
  else {
    func_0x00010b8fda80();
    func_0x00010b8e5e9c();
    func_0x00010b8fd91c();
    if ((extraout_x8_00 & 1) == 0) {
LAB_10b8f0a90:
      func_0x00010b8fd2ec();
      goto LAB_10b8f0b74;
    }
    iVar2 = (int)uVar5;
    uVar1 = *(ulong *)(unaff_x20 + 0x10) == 3;
    if (*(ulong *)(unaff_x20 + 0x10) < 3) goto LAB_10b8f0a9c;
    func_0x00010b8fe358();
    func_0x00010b8e5dc4();
    func_0x00010b8fd91c();
    if ((extraout_x8_01 & 1) == 0) goto LAB_10b8f0a90;
  }
  uStack_c0 = (undefined1)uVar5;
  uVar4 = uStack_110;
  if ((*(long *)(uStack_110 + 8) != 0) && (*(long *)(*(long *)(uStack_110 + 8) + 0x10) != 0)) {
    do {
      func_0x00010b8fe3ac();
      uStack_c0 = (undefined1)uVar5;
      uVar4 = extraout_x8_02;
    } while (extraout_w12 != 0);
  }
  uStack_a0 = uStack_108;
  uStack_110 = 0;
  uStack_108 = 0;
  pcStack_b8 = FUN_10b8f7b18;
  ppuStack_b0 = &PTR_FUN_110d73720;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_98 = CONCAT71(uStack_98._1_7_,uStack_c0);
  uStack_a8 = uVar4;
  FUN_10b8eb114(&ppcStack_88);
  func_0x00010b8fdfb4(ppuStack_b0);
  func_0x00010b8fe70c();
  func_0x00010b8fe108();
  unaff_x21 = (long *)unaff_x21[0x6c];
  ppcStack_100 = ppcStack_88;
  (**(code **)(lStack_80 + 0x10))(auStack_f8,&lStack_80);
  (**(code **)(*unaff_x21 + 0x30))(unaff_x21,&ppcStack_100,(long)iVar2 * 1000000);
  func_0x00010b8fdfb4(auStack_f8[0]);
  func_0x00010b8fe39c();
  func_0x00010b8fd604(lStack_80);
LAB_10b8f0b74:
  puVar3 = &uStack_110;
  FUN_10b8e552c(puVar3);
  iVar2 = (int)puVar3;
  func_0x00010b8fd3bc(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b8fd538();
    func_0x00010b8fd634();
    func_0x00010b8fd91c();
    if (extraout_w8 == 1) {
      (**(code **)(*(long *)unaff_x21[0x6c] + 0x38))((long *)unaff_x21[0x6c],(long)iVar2);
    }
    func_0x00010b8fd2ec();
    return;
  }
  return;
}



/* Entry: 10b8f0ba8; end: 10b8f0bef;  */

void FUN_10b8f0ba8(int param_1)

{
  int extraout_w8;
  long unaff_x21;
  
  func_0x00010b8fd538();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if (extraout_w8 == 1) {
    (**(code **)(**(long **)(unaff_x21 + 0x360) + 0x38))
              (*(long **)(unaff_x21 + 0x360),(long)param_1);
  }
  func_0x00010b8fd2ec();
  return;
}



/* Entry: 10b8f0bf0; end: 10b8f0d3f;  */

void FUN_10b8f0bf0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar1;
  long unaff_x21;
  long lVar2;
  long unaff_x22;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_38 [8];
  long lStack_30;
  
  func_0x00010b8feb10();
  func_0x00010b8fd358();
  in_stack_00000038 = extraout_x8;
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
    goto LAB_10b8f0d28;
  }
  in_stack_00000008 = (undefined8 *)0x0;
  func_0x00010b8fe9d8();
  if ((bool)in_ZR) {
    func_0x00010b8c292c(&stack0x00000008,unaff_x21 + 0x460);
LAB_10b8f0c80:
    func_0x00010b8fe1ac();
    param_1 = in_stack_00000008;
    FUN_10b98caf8();
    puVar3 = *(undefined8 **)(unaff_x21 + 0x470);
    in_ZR = puVar3 == *(undefined8 **)(unaff_x21 + 0x478);
    if (puVar3 < *(undefined8 **)(unaff_x21 + 0x478)) {
      puVar5 = puVar3 + 1;
      *puVar3 = in_stack_00000000;
    }
    else {
      unaff_x22 = unaff_x21 + 0x478;
      lVar1 = unaff_x21 + 0x468;
      FUN_10b8c464c(lVar1,((long)puVar3 - *(long *)(unaff_x21 + 0x468) >> 3) + 1);
      lVar4 = *(long *)(unaff_x21 + 0x470);
      lVar6 = *(long *)(unaff_x21 + 0x468);
      lVar2 = 0;
      in_stack_00000030 = unaff_x22;
      if (lVar1 != 0) {
        lVar2 = unaff_x22;
        FUN_10b8c470c();
      }
      in_stack_00000018 = (undefined8 *)(lVar2 + (lVar4 - lVar6));
      in_stack_00000028 = lVar2 + lVar1 * 8;
      in_stack_00000020 = in_stack_00000018 + 1;
      *in_stack_00000018 = in_stack_00000000;
      in_stack_00000010 = lVar2;
      FUN_10b8c468c(unaff_x21 + 0x468,&stack0x00000010);
      puVar5 = *(undefined8 **)(unaff_x21 + 0x470);
      param_1 = &stack0x00000010;
      func_0x00010b8c47a0();
    }
    *(undefined8 **)(unaff_x21 + 0x470) = puVar5;
    func_0x00010b8fd2ec();
    func_0x00010b8fe2c0();
  }
  else {
    func_0x00010b8fe5c8(&stack0x00000010);
    unaff_x22 = in_stack_00000010;
    if (in_stack_00000010 == 1) {
      func_0x0001080d04a4(&stack0x00000008,&stack0x00000018);
    }
    else {
      func_0x00010b8fd500();
    }
    param_1 = &stack0x00000010;
    FUN_10b8fb358();
    in_ZR = 0;
    if (unaff_x22 == 1) goto LAB_10b8f0c80;
  }
  func_0x00010b8fe108();
LAB_10b8f0d28:
  func_0x00010b8fd3bc(in_stack_00000038);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_1[0x8e];
  lStack_30 = unaff_x22;
  if (param_1[0x8d] != lVar1) {
    lVar2 = *(long *)(lVar1 + -8);
    *(undefined8 *)(lVar1 + -8) = 0;
    FUN_10b8f0dc4(param_1 + 0x8d);
    FUN_10b98caf8(lVar2);
    func_0x00010b8fd2ec();
    if (lVar2 != 0) {
      func_0x0001003a90c4(&stack0xffffffffffffffe0);
      return;
    }
    return;
  }
  FUN_10b99f5f8(auStack_38,&UNK_10f7cc1c0);
  func_0x00010b8fd500();
  func_0x00010b8fdd9c();
  return;
}



/* Entry: 10b8f0d40; end: 10b8f0dc3;  */

void FUN_10b8f0d40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x470);
  if (*(long *)(param_1 + 0x468) == lVar1) {
    FUN_10b99f5f8(auStack_38,&UNK_10f7cc1c0);
    func_0x00010b8fd500();
    func_0x00010b8fdd9c();
    return;
  }
  lVar2 = *(long *)(lVar1 + -8);
  *(undefined8 *)(lVar1 + -8) = 0;
  FUN_10b8f0dc4(param_1 + 0x468);
  FUN_10b98caf8(lVar2);
  FUN_10b8fd2ec();
  if (lVar2 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10b8f0dc4; end: 10b8f0dcf;  */

void FUN_10b8f0dc4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8) + -8;
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x0001052768f0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10b8f0dd0; end: 10b8f0dff;  */

void FUN_10b8f0dd0(long param_1)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010b8fe280();
  func_0x00010b8c2a68();
  plVar1 = (long *)*unaff_x19;
  if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8dba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x230))();
    return;
  }
  *unaff_x20 = plVar1[0x20];
  lVar2 = plVar1[0x21];
  unaff_x20[2] = plVar1[0x22];
  unaff_x20[1] = lVar2;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 10b8f0e00; end: 10b8f0eff;  */

void FUN_10b8f0e00(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  int extraout_w11;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  
  func_0x00010b8feb54();
  func_0x00010b8fe1ac();
  plVar4 = *(long **)(param_1 + 0x488);
  if (plVar4 < *(long **)(param_1 + 0x490)) {
    if ((in_stack_00000000 != 0) && (*(long *)(in_stack_00000000 + 0x10) != 0)) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    plVar6 = plVar4 + 1;
    *plVar4 = in_stack_00000000;
  }
  else {
    lVar2 = param_1 + 0x490;
    lVar1 = param_1 + 0x480;
    FUN_10b8c464c(lVar1,((long)plVar4 - *(long *)(param_1 + 0x480) >> 3) + 1);
    lVar5 = *(long *)(param_1 + 0x488);
    lVar7 = *(long *)(param_1 + 0x480);
    lVar3 = 0;
    in_stack_00000028 = lVar2;
    if (lVar1 != 0) {
      FUN_10b8c470c();
      lVar3 = lVar2;
    }
    plVar4 = (long *)(lVar3 + (lVar5 - lVar7));
    in_stack_00000020 = lVar3 + lVar1 * 8;
    in_stack_00000008 = lVar3;
    in_stack_00000010 = plVar4;
    if ((in_stack_00000000 != 0) && (*(long *)(in_stack_00000000 + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
        plVar4 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    in_stack_00000018 = plVar4 + 1;
    *plVar4 = in_stack_00000000;
    FUN_10b8c468c(param_1 + 0x480,&stack0x00000008);
    plVar6 = *(long **)(param_1 + 0x488);
    func_0x00010b8c47a0(&stack0x00000008);
  }
  *(long **)(param_1 + 0x488) = plVar6;
  FUN_10b8dba18(extraout_x8,*param_2,*(undefined4 *)(in_stack_00000000 + 0x18));
  func_0x000105276914(in_stack_00000000);
  return;
}



/* Entry: 10b8f0f00; end: 10b8f0f77;  */

void FUN_10b8f0f00(int param_1)

{
  int extraout_w8;
  long unaff_x21;
  long *plVar1;
  
  func_0x00010b8fd538();
  func_0x00010b8fd634();
  func_0x00010b8fd91c();
  if (extraout_w8 == 1) {
    for (plVar1 = *(long **)(unaff_x21 + 0x480); plVar1 != *(long **)(unaff_x21 + 0x488);
        plVar1 = plVar1 + 1) {
      if (*(int *)(*plVar1 + 0x18) == param_1) {
        func_0x00010b8c2a3c(plVar1);
        FUN_10b8f0f78(plVar1,*(long *)(unaff_x21 + 0x488) + -8);
        FUN_10b8f0dc4(unaff_x21 + 0x480);
        break;
      }
    }
  }
  func_0x00010b8fd2ec();
  return;
}



/* Entry: 10b8f0f78; end: 10b8f0fa3;  */

void FUN_10b8f0f78(void)

{
  func_0x00010b8fea28();
  func_0x0001080d04a4();
  func_0x00010b8fdcc8();
  func_0x0001080d04a4();
  func_0x00010b8fe108();
  return;
}



/* Entry: 10b8f0fa4; end: 10b8f10ab;  */

void FUN_10b8f0fa4(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uStack_90;
  ulong uStack_88;
  double dStack_60;
  undefined2 uStack_58;
  double dStack_50;
  undefined2 uStack_48;
  undefined1 auStack_40 [16];
  
  uVar1 = *param_2;
  puVar2 = param_2;
  func_0x00010b8fde94();
  uStack_88 = uStack_88 & 0xffffffffffff0000;
  uStack_90 = 0;
  dStack_50 = (double)uVar1;
  uStack_48 = 6;
  FUN_10b9aa86c(&uStack_90,&UNK_10f7cc1d7,0x10,&dStack_50);
  dStack_60 = (double)puVar2;
  uStack_58 = 6;
  FUN_10b9aa86c(&uStack_90,&UNK_10f7cc1e8,0xc,&dStack_60);
  FUN_10b9a8f04(auStack_40,&uStack_90);
  func_0x00010b8fe118();
  func_0x00010b8fe56c();
  func_0x00010b8fe0e8();
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010b8fd9e8(*param_2);
  func_0x00010b8fe7cc();
  FUN_10b9a8d98(auStack_40);
  return;
}



/* Entry: 10b8f10ac; end: 10b8f10eb;  */

void FUN_10b8f10ac(void)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  FUN_10b8eb398(&puStack_38);
  for (puVar1 = puStack_38; puVar1 != puStack_30; puVar1 = puVar1 + 1) {
    func_0x00010b8f1d50(*puVar1);
  }
  FUN_10b8f634c(&puStack_38);
  return;
}



/* Entry: 10b8f10ec; end: 10b8f1193;  */

void FUN_10b8f10ec(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar8;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *puVar9;
  undefined8 unaff_x22;
  undefined1 **ppuVar10;
  code *pcVar11;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  long alStack_48 [2];
  undefined8 uStack_38;
  
  func_0x00010b8fe280();
  func_0x00010b8fd4b8();
  uStack_38 = extraout_x8;
  func_0x00010b8fd6ec();
  func_0x00010b8fe3ec();
  plVar5 = alStack_48;
  func_0x00010b8fe0a8();
  func_0x00010b8fd3bc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uStack_58 = 0x10b8f1140;
    ppuVar10 = &puStack_60;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b8fe280();
    func_0x00010b8fd4b8();
    puVar9 = (undefined1 *)*plVar5;
    uStack_88 = extraout_x8_00;
    func_0x00010b8fd6ec();
    func_0x00010b8fe3ec();
    puVar6 = auStack_98;
    func_0x00010b8fe0a8();
    func_0x00010b8fd3bc(uStack_88);
    if (!(bool)in_ZR) {
      pcVar11 = FUN_10b8f1194;
      ___stack_chk_fail();
      puVar2 = auStack_a0;
      uVar4 = extraout_x8_01;
      puVar1 = (undefined1 *)(param_1 + 0x558);
      while( true ) {
        puVar7 = puVar1;
        *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x28) = puVar9;
        *(undefined8 **)(puVar2 + -0x20) = unaff_x20;
        *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 ***)(puVar2 + -0x10) = ppuVar10;
        *(code **)(puVar2 + -8) = pcVar11;
        ppuVar10 = (undefined1 **)(puVar2 + -0x10);
        func_0x00010b8fda54();
        func_0x00010b8fd3f4();
        func_0x00010b8fd6ec();
        *(undefined8 *)(puVar2 + -0x48) = uVar4;
        *(undefined1 **)(puVar2 + -0x40) = puVar6;
        func_0x00010b8fe014();
        iVar3 = (int)uVar4;
        (**(code **)(extraout_x8_02 + 400))();
        if (iVar3 == 0) {
          *(undefined8 *)(puVar2 + -0x88) = 0;
          *(undefined8 *)(puVar2 + -0x80) = 0;
          puVar6 = puVar2 + -0x88;
          FUN_10b8e6bb8(puVar7);
          puVar9 = puVar2 + -0x88;
        }
        else {
          uVar4 = *unaff_x20;
          uVar8 = unaff_x20[6];
          *(undefined8 *)(puVar2 + -0xb8) = 0;
          *(undefined8 *)(puVar2 + -0xb0) = uVar8;
          func_0x00010b8fd698(uVar4);
          *(undefined8 *)(puVar2 + -0x88) = extraout_x8_03;
          *(undefined8 *)(puVar2 + -0x80) = 0;
          func_0x00010b8fe3fc(4);
          FUN_10b8e143c(puVar2 + -0x58);
          puVar6 = puVar2 + -0x58;
          FUN_10b8e6bb8(puVar7);
          puVar9 = puVar2 + -0x58;
        }
        FUN_10b8e552c();
        func_0x00010b8fd2ec();
        func_0x00010b8fd38c();
        if ((bool)in_ZR) break;
        pcVar11 = FUN_10b8f1258;
        ___stack_chk_fail();
        puVar2 = puVar2 + -0xc0;
        uVar4 = extraout_x8_04;
        puVar1 = puVar9 + 0x568;
        puVar9 = puVar7;
      }
      return;
    }
  }
  return;
}



/* Entry: 10b8f1194; end: 10b8f119f;  */

void FUN_10b8f1194(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  puVar4 = (undefined1 *)(param_2 + 0x558);
  while( true ) {
    puVar5 = puVar4;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    func_0x00010b8fda54();
    func_0x00010b8fd3f4();
    func_0x00010b8fd6ec();
    *(undefined8 *)(puVar1 + -0x48) = param_1;
    *(undefined1 **)(puVar1 + -0x40) = param_3;
    func_0x00010b8fe014();
    iVar2 = (int)param_1;
    (**(code **)(extraout_x8 + 400))();
    if (iVar2 == 0) {
      *(undefined8 *)(puVar1 + -0x88) = 0;
      *(undefined8 *)(puVar1 + -0x80) = 0;
      param_3 = puVar1 + -0x88;
      FUN_10b8e6bb8(puVar5);
      puVar4 = puVar1 + -0x88;
    }
    else {
      uVar3 = *unaff_x20;
      uVar6 = unaff_x20[6];
      *(undefined8 *)(puVar1 + -0xb8) = 0;
      *(undefined8 *)(puVar1 + -0xb0) = uVar6;
      func_0x00010b8fd698(uVar3);
      *(undefined8 *)(puVar1 + -0x88) = extraout_x8_00;
      *(undefined8 *)(puVar1 + -0x80) = 0;
      func_0x00010b8fe3fc(4);
      FUN_10b8e143c(puVar1 + -0x58);
      param_3 = puVar1 + -0x58;
      FUN_10b8e6bb8(puVar5);
      puVar4 = puVar1 + -0x58;
    }
    FUN_10b8e552c();
    func_0x00010b8fd2ec();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f1258;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0xc0;
    param_1 = extraout_x8_01;
    puVar4 = puVar4 + 0x568;
    unaff_x21 = puVar5;
  }
  return;
}



/* Entry: 10b8f11a0; end: 10b8f1257;  */

void FUN_10b8f11a0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar4 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fda54();
    func_0x00010b8fd3f4();
    func_0x00010b8fd6ec();
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) = param_2;
    func_0x00010b8fe014();
    iVar1 = (int)param_1;
    (**(code **)(extraout_x8 + 400))();
    if (iVar1 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      param_2 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10b8e6bb8(puVar4);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x88);
    }
    else {
      uVar2 = *unaff_x20;
      uVar5 = unaff_x20[6];
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar5;
      func_0x00010b8fd698(uVar2);
      *(undefined8 *)((long)register0x00000008 + -0x88) = extraout_x8_00;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      func_0x00010b8fe3fc(4);
      FUN_10b8e143c((undefined1 *)((long)register0x00000008 + -0x58));
      param_2 = (undefined1 *)((long)register0x00000008 + -0x58);
      FUN_10b8e6bb8(puVar4);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x58);
    }
    FUN_10b8e552c();
    func_0x00010b8fd2ec();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f1258;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = extraout_x8_01;
    param_3 = puVar3 + 0x568;
    unaff_x21 = puVar4;
  }
  return;
}



/* Entry: 10b8f1258; end: 10b8f1263;  */

void FUN_10b8f1258(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar1 = param_2 + 0x568;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fda54();
    func_0x00010b8fd3f4();
    func_0x00010b8fd6ec();
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) = param_3;
    func_0x00010b8fe014();
    iVar2 = (int)param_1;
    (**(code **)(extraout_x8 + 400))();
    if (iVar2 == 0) {
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      param_3 = (undefined1 *)((long)register0x00000008 + -0x88);
      FUN_10b8e6bb8(puVar1);
      param_2 = (undefined1 *)((long)register0x00000008 + -0x88);
    }
    else {
      uVar3 = *unaff_x20;
      uVar4 = unaff_x20[6];
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar4;
      func_0x00010b8fd698(uVar3);
      *(undefined8 *)((long)register0x00000008 + -0x88) = extraout_x8_00;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      func_0x00010b8fe3fc(4);
      FUN_10b8e143c((undefined1 *)((long)register0x00000008 + -0x58));
      param_3 = (undefined1 *)((long)register0x00000008 + -0x58);
      FUN_10b8e6bb8(puVar1);
      param_2 = (undefined1 *)((long)register0x00000008 + -0x58);
    }
    FUN_10b8e552c();
    func_0x00010b8fd2ec();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) break;
    unaff_x30 = FUN_10b8f1258;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = extraout_x8_01;
    unaff_x21 = puVar1;
  }
  return;
}



/* Entry: 10b8f1264; end: 10b8f153b;  */

/* WARNING: Possible PIC construction at 0x00010b8f14f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f14f4) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1538) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1630) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1658) */
/* WARNING: Removing unreachable block (ram,0x00010b8f165c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1664) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1688) */
/* WARNING: Removing unreachable block (ram,0x00010b8f168c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1694) */
/* WARNING: Removing unreachable block (ram,0x00010b8f16c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f16e8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f16ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f16f4) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1700) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1704) */
/* WARNING: Removing unreachable block (ram,0x00010b8f170c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1714) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1718) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1734) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1738) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1740) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1744) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1754) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1758) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1760) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1768) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1790) */
/* WARNING: Removing unreachable block (ram,0x00010b8f17c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1878) */
/* WARNING: Removing unreachable block (ram,0x00010b8f17f0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f189c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1854) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18a4) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18b8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1788) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd984) */
/* WARNING: Removing unreachable block (ram,0x00010b8f16c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd57c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1614) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1508) */
/* WARNING: Removing unreachable block (ram,0x00010b8fde74) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b8f1264(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *apuStack_98 [2];
  undefined1 auStack_88 [8];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  func_0x00010b8fd3e0();
  func_0x00010b8fddc0();
  func_0x00010b8fe340(&puStack_80);
  __ZNSt3__15mutex4lockEv(param_1 + 0x16);
  func_0x00010b8fe328();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x16);
  FUN_10b8eac40(puStack_80);
  lVar7 = param_1[0x97];
  for (lVar6 = param_1[0x96]; lVar6 != lVar7; lVar6 = lVar6 + 8) {
    FUN_10b8f1634(puStack_80,lVar6);
  }
  lVar7 = param_1[0x9a];
  for (lVar6 = param_1[0x99]; lVar6 != lVar7; lVar6 = lVar6 + 0x10) {
    FUN_10b8f16cc(puStack_80,lVar6,lVar6 + 8);
  }
  puVar3 = param_1;
  FUN_10b8e999c();
  func_0x00010b8fda14(auStack_88,param_2);
  puVar4 = (undefined8 *)0xb0;
  __Znwm();
  plVar8 = puVar4 + 1;
  *plVar8 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110d73ea8;
  puStack_78 = puVar3;
  if ((puStack_80 != (undefined8 *)0x0) && (puStack_80[2] != 0)) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  puVar3 = puVar4 + 3;
  apuStack_98[0] = puStack_80;
  ppuVar5 = &puStack_78;
  FUN_10b9109d8(puVar3,ppuVar5,apuStack_98,auStack_88);
  func_0x00010b8e8bd0(apuStack_98[0]);
  func_0x00010b8e8bd0(puStack_78);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuVar5 = &puStack_78;
    puStack_78 = puVar3;
    puStack_70 = puVar4;
    func_0x000107c278e4(puVar4 + 4);
    func_0x000107c284e8(&puStack_78);
  }
  func_0x00010b8fe184();
  func_0x00010b8e8bd0(0);
  FUN_10b910afc(puVar3);
  if ((*(byte *)(param_2[3] + 8) & 1) == 0) {
    func_0x00010b8fd30c(*param_2);
    goto LAB_10b8f14ec;
  }
  if (puVar4[5] != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10_00 != 0);
  }
  apuStack_98[0] = puVar3;
  func_0x00010b8fdea0();
  func_0x00010b8fe1fc(&puStack_78);
  if (apuStack_98[0] != (undefined8 *)0x0) {
    func_0x00010b8fd5d8();
  }
  func_0x00010b8fe42c();
  if ((extraout_x8 & 1) == 0) {
LAB_10b8f14d0:
    *unaff_x19 = ppuVar5[0x28];
    puVar10 = ppuVar5[0x2a];
    puVar9 = ppuVar5[0x29];
LAB_10b8f14e0:
    unaff_x19[2] = puVar10;
    unaff_x19[1] = puVar9;
    *(undefined1 *)(unaff_x19 + 3) = 0;
  }
  else {
    func_0x00010b8fd900(param_1);
    func_0x00010b8fe42c();
    if ((extraout_x8_00 & 1) == 0) goto LAB_10b8f14d0;
    func_0x00010b8fd900(param_1);
    func_0x00010b8fe42c();
    if ((extraout_x8_01 & 1) == 0) goto LAB_10b8f14d0;
    func_0x00010b8fd900(param_1);
    if ((*(byte *)(param_2[3] + 8) & 1) == 0) {
      lVar6 = *param_2;
      *unaff_x19 = *(undefined8 *)(lVar6 + 0x140);
      puVar10 = *(undefined8 **)(lVar6 + 0x150);
      puVar9 = *(undefined8 **)(lVar6 + 0x148);
      goto LAB_10b8f14e0;
    }
    __ZNSt3__15mutex4lockEv(param_1 + 0xa2);
    func_0x00010b8fe700();
    func_0x00010b8fe78c();
    func_0x00010b8e8a98(apuStack_98);
    __ZNSt3__15mutex6unlockEv(param_1 + 0xa2);
    func_0x00010b8fddac();
  }
  func_0x00010b8fe37c();
LAB_10b8f14ec:
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uStack_c8 = 0x10b8f14f4;
  uStack_d8 = puVar4[5];
  uStack_e0 = puVar4[4];
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x0001003a90c4(&uStack_e0);
  return;
}



/* Entry: 10b8f153c; end: 10b8f1633;  */

/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b8f153c(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined1 *param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  byte param_13)

{
  undefined4 uVar1;
  undefined1 uVar2;
  code cVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code **ppcVar9;
  code *pcVar10;
  long *plVar11;
  code **ppcVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar15;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [24];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined1 *puStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  code **ppcStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  code **ppcStack_1c8;
  long *plStack_1c0;
  code **ppcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  long lStack_198;
  code *pcStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  long lStack_170;
  code *pcStack_168;
  long *plStack_150;
  long lStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  code *pcStack_128;
  undefined **ppuStack_120;
  long *plStack_118;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined4 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 auStack_90 [2];
  long alStack_80 [2];
  long *plStack_70;
  undefined8 uStack_68;
  
  uStack_a0 = param_6;
  puStack_98 = param_1;
  func_0x00010b8fd4b8();
  uStack_68 = extraout_x8;
  FUN_10b8fc430(alStack_80,1);
  uVar1 = *param_7;
  uVar2 = *param_8;
  plStack_70[2] = 0;
  *plStack_70 = (long)&PTR_FUN_110d73e58;
  plStack_70[1] = 0;
  bStack_a8 = param_13 & 1;
  uStack_b8 = param_11;
  uStack_b0 = param_12;
  uStack_c0 = param_9;
  plVar14 = param_3;
  FUN_10b8ea810(plStack_70 + 3,param_2,param_3,param_4,param_5,uStack_a0,uVar1,uVar2);
  plVar11 = plStack_70;
  plStack_70 = (long *)0x0;
  func_0x00010b8fc414(auStack_90,plVar11 + 3);
  plVar6 = alStack_80;
  FUN_10b8fc51c();
  *puStack_98 = auStack_90[0];
  func_0x00010b8fd3bc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10b8f1634;
  plVar7 = plVar6;
  uStack_f0 = param_5;
  uStack_e8 = (ulong)param_13;
  puStack_e0 = param_7;
  puStack_d8 = param_8;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b8fd3f4();
  lVar15 = *plVar11;
  if (lVar15 != 0) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10 != 0);
  }
  pcStack_128 = FUN_10b8f8a84;
  ppuStack_120 = &PTR_DAT_110d73840;
  func_0x00010b8fe2b8();
  *plVar7 = (long)plVar6;
  if (lVar15 != 0) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10_00 != 0);
  }
  plVar7[1] = lVar15;
  ppcVar12 = &pcStack_128;
  plStack_118 = plVar7;
  FUN_10b8ebbf0(plVar6);
  func_0x00010b8fd6f8(ppuStack_120);
  lVar8 = lVar15;
  FUN_10b8f5f88();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_10b8f16cc;
  plStack_150 = plVar6;
  lStack_148 = lVar15;
  ppuStack_140 = &puStack_d0;
  func_0x00010b8fd430();
  lStack_1a0 = 0;
  if (*plVar14 != 0) {
    do {
      func_0x00010b8fdb28();
      lStack_1a0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  pcStack_190 = *ppcVar12;
  if (pcStack_190 != (code *)0x0) {
    pcVar10 = pcStack_190 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar5) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcStack_188 = FUN_10b8f8f10;
  ppuStack_180 = &PTR_DAT_110d73860;
  uStack_178 = 0;
  lStack_198 = lVar8;
  if (lStack_1a0 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_178 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  lStack_170 = lStack_198;
  if (pcStack_190 != (code *)0x0) {
    pcVar10 = pcStack_190 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar5) {
        *(int *)pcVar10 = *(int *)pcVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcStack_168 = pcStack_190;
  func_0x00010b8fe6bc();
  func_0x00010b8fd728(ppuStack_180);
  FUN_10b8f2f78(&lStack_1a0);
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1a8 = FUN_10b8f1794;
  plStack_1e0 = param_3;
  uStack_1d8 = param_4;
  uStack_1d0 = param_5;
  ppcStack_1c8 = &pcStack_128;
  plStack_1c0 = plVar6;
  ppcStack_1b8 = &pcStack_188;
  pppuStack_1b0 = &ppuStack_140;
  func_0x00010b8fd474();
  func_0x00010b8f1bbc(&lStack_200);
  if (lStack_200 != 0) {
    uVar13 = 0;
    ppcVar9 = ppcVar12;
    FUN_10b8e5ce4();
    pcVar10 = *ppcVar12;
    ppcStack_1f8 = ppcVar9;
    uStack_1f0 = uVar13;
    (**(code **)(*(long *)pcVar10 + 400))(pcVar10,&ppcStack_1f8);
    if (((ulong)pcVar10 & 1) == 0) {
      FUN_10b99f5f8(&puStack_240,&UNK_10f7cc218);
      func_0x00010b8fdab0();
      func_0x000104bda960(puStack_240);
      goto LAB_10b8f18b8;
    }
    pcVar10 = *ppcVar12;
    func_0x00010b8fdcbc();
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c31088(auStack_278,&UNK_10f686181);
    puStack_240 = auStack_270;
    uStack_238 = 0;
    uStack_230 = 2;
    uStack_220 = 0;
    uStack_218 = 0;
    puStack_228 = auStack_278;
    FUN_10b8e143c(&uStack_210,pcVar10,&ppcStack_1f8,&puStack_240,ppcVar12[3]);
    func_0x00010b8fdbd0();
    cVar3 = ppcVar12[3][8];
    if (((byte)cVar3 & 1) == 0) {
      func_0x00010b8fd458(*ppcVar12);
    }
    else {
      uStack_288 = uStack_208;
      uStack_290 = uStack_210;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010b910b80(lStack_200,&uStack_290);
      FUN_10b8e552c(&uStack_290);
    }
    FUN_10b8e552c(&uStack_210);
    if (cVar3 == (code)0x0) goto LAB_10b8f18b8;
  }
  func_0x00010b8fd458(*ppcVar12);
LAB_10b8f18b8:
  if (lStack_200 == 0) {
    return;
  }
  uStack_298 = 0x10b8f18c0;
  uStack_2a8 = *(undefined8 *)(lStack_200 + 0x10);
  uStack_2b0 = *(undefined8 *)(lStack_200 + 8);
  pppuStack_2a0 = &pppuStack_1b0;
  func_0x0001003a90c4(&uStack_2b0);
  return;
}



/* Entry: 10b8f1634; end: 10b8f16cb;  */

/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b8f1634(undefined8 *param_1,long *param_2,long *param_3)

{
  code cVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  long lVar5;
  code **ppcVar6;
  code *pcVar7;
  code **ppcVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar10;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  code **ppcStack_138;
  undefined8 uStack_130;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  
  puVar4 = param_1;
  func_0x00010b8fd3f4();
  lVar10 = *param_2;
  if (lVar10 != 0) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10 != 0);
  }
  pcStack_68 = FUN_10b8f8a84;
  ppuStack_60 = &PTR_DAT_110d73840;
  func_0x00010b8fe2b8();
  *puVar4 = param_1;
  if (lVar10 != 0) {
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10_00 != 0);
  }
  puVar4[1] = lVar10;
  ppcVar8 = &pcStack_68;
  puStack_58 = puVar4;
  FUN_10b8ebbf0(param_1);
  func_0x00010b8fd6f8(ppuStack_60);
  lVar5 = lVar10;
  FUN_10b8f5f88();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b8f16cc;
  puStack_90 = param_1;
  lStack_88 = lVar10;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b8fd430();
  lStack_e0 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b8fdb28();
      lStack_e0 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  pcStack_d0 = *ppcVar8;
  if (pcStack_d0 != (code *)0x0) {
    pcVar7 = pcStack_d0 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *(int *)pcVar7 = *(int *)pcVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_c8 = FUN_10b8f8f10;
  ppuStack_c0 = &PTR_DAT_110d73860;
  uStack_b8 = 0;
  lStack_d8 = lVar5;
  if (lStack_e0 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_b8 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  lStack_b0 = lStack_d8;
  if (pcStack_d0 != (code *)0x0) {
    pcVar7 = pcStack_d0 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
      if (bVar3) {
        *(int *)pcVar7 = *(int *)pcVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_a8 = pcStack_d0;
  func_0x00010b8fe6bc();
  func_0x00010b8fd728(ppuStack_c0);
  FUN_10b8f2f78(&lStack_e0);
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10b8f1794;
  ppuStack_f0 = &puStack_80;
  func_0x00010b8fd474();
  func_0x00010b8f1bbc(&lStack_140);
  if (lStack_140 != 0) {
    uVar9 = 0;
    ppcVar6 = ppcVar8;
    FUN_10b8e5ce4();
    pcVar7 = *ppcVar8;
    ppcStack_138 = ppcVar6;
    uStack_130 = uVar9;
    (**(code **)(*(long *)pcVar7 + 400))(pcVar7,&ppcStack_138);
    if (((ulong)pcVar7 & 1) == 0) {
      FUN_10b99f5f8(&puStack_180,&UNK_10f7cc218);
      func_0x00010b8fdab0();
      func_0x000104bda960(puStack_180);
      goto LAB_10b8f18b8;
    }
    pcVar7 = *ppcVar8;
    func_0x00010b8fdcbc();
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c31088(auStack_1b8,&UNK_10f686181);
    puStack_180 = auStack_1b0;
    uStack_178 = 0;
    uStack_170 = 2;
    uStack_160 = 0;
    uStack_158 = 0;
    puStack_168 = auStack_1b8;
    FUN_10b8e143c(&uStack_150,pcVar7,&ppcStack_138,&puStack_180,ppcVar8[3]);
    func_0x00010b8fdbd0();
    cVar1 = ppcVar8[3][8];
    if (((byte)cVar1 & 1) == 0) {
      func_0x00010b8fd458(*ppcVar8);
    }
    else {
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_150 = 0;
      uStack_148 = 0;
      func_0x00010b910b80(lStack_140,&uStack_1d0);
      FUN_10b8e552c(&uStack_1d0);
    }
    FUN_10b8e552c(&uStack_150);
    if (cVar1 == (code)0x0) goto LAB_10b8f18b8;
  }
  func_0x00010b8fd458(*ppcVar8);
LAB_10b8f18b8:
  if (lStack_140 == 0) {
    return;
  }
  uStack_1d8 = 0x10b8f18c0;
  uStack_1e8 = *(undefined8 *)(lStack_140 + 0x10);
  uStack_1f0 = *(undefined8 *)(lStack_140 + 8);
  pppuStack_1e0 = &ppuStack_f0;
  func_0x0001003a90c4(&uStack_1f0);
  return;
}



/* Entry: 10b8f16cc; end: 10b8f1793;  */

/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b8f16cc(undefined8 param_1,ulong *param_2,long *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  ulong *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong *puStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  func_0x00010b8fd430();
  lStack_70 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010b8fdb28();
      lStack_70 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_60 = *param_2;
  if (uStack_60 != 0) {
    piVar1 = (int *)(uStack_60 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_58 = FUN_10b8f8f10;
  ppuStack_50 = &PTR_DAT_110d73860;
  uStack_48 = 0;
  uStack_68 = param_1;
  if (lStack_70 != 0) {
    do {
      func_0x00010b8fdb28();
      uStack_48 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  uStack_40 = uStack_68;
  if (uStack_60 != 0) {
    piVar1 = (int *)(uStack_60 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_38 = uStack_60;
  func_0x00010b8fe6bc();
  func_0x00010b8fd728(ppuStack_50);
  FUN_10b8f2f78(&lStack_70);
  func_0x00010b8fd3a4();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b8f1794;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010b8fd474();
  func_0x00010b8f1bbc(&lStack_d0);
  if (lStack_d0 != 0) {
    uVar7 = 0;
    puVar5 = param_2;
    FUN_10b8e5ce4();
    plVar6 = (long *)*param_2;
    puStack_c8 = puVar5;
    uStack_c0 = uVar7;
    (**(code **)(*plVar6 + 400))(plVar6,&puStack_c8);
    if (((ulong)plVar6 & 1) == 0) {
      FUN_10b99f5f8(&puStack_110,&UNK_10f7cc218);
      func_0x00010b8fdab0();
      func_0x000104bda960(puStack_110);
      goto LAB_10b8f18b8;
    }
    uVar8 = *param_2;
    func_0x00010b8fdcbc();
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    func_0x000107c31088(auStack_148,&UNK_10f686181);
    puStack_110 = auStack_140;
    uStack_108 = 0;
    uStack_100 = 2;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puStack_f8 = auStack_148;
    FUN_10b8e143c(&uStack_e0,uVar8,&puStack_c8,&puStack_110,param_2[3]);
    func_0x00010b8fdbd0();
    bVar2 = *(byte *)(param_2[3] + 8);
    if ((bVar2 & 1) == 0) {
      func_0x00010b8fd458(*param_2);
    }
    else {
      uStack_158 = uStack_d8;
      uStack_160 = uStack_e0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      func_0x00010b910b80(lStack_d0,&uStack_160);
      FUN_10b8e552c(&uStack_160);
    }
    FUN_10b8e552c(&uStack_e0);
    if (bVar2 == 0) goto LAB_10b8f18b8;
  }
  func_0x00010b8fd458(*param_2);
LAB_10b8f18b8:
  if (lStack_d0 == 0) {
    return;
  }
  uStack_168 = 0x10b8f18c0;
  uStack_178 = *(undefined8 *)(lStack_d0 + 0x10);
  uStack_180 = *(undefined8 *)(lStack_d0 + 8);
  ppuStack_170 = &puStack_80;
  func_0x0001003a90c4(&uStack_180);
  return;
}



/* Entry: 10b8f1794; end: 10b8f19ef;  */

/* WARNING: Possible PIC construction at 0x00010b8f18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8f19d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f18c0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18e0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1918) */
/* WARNING: Removing unreachable block (ram,0x00010b8f195c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1930) */
/* WARNING: Removing unreachable block (ram,0x00010b8f196c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f193c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1978) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ac) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19a0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19b0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19c8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f194c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1964) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d0) */
/* WARNING: Removing unreachable block (ram,0x00010b8f18cc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fdc78) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19d8) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19ec) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a1c) */
/* WARNING: Removing unreachable block (ram,0x00010b8f1a24) */
/* WARNING: Removing unreachable block (ram,0x00010b8f19e4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd444) */

void FUN_10b8f1794(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong *puStack_58;
  undefined8 uStack_50;
  
  func_0x00010b8fd474();
  func_0x00010b8f1bbc(&lStack_60);
  if (lStack_60 != 0) {
    uVar4 = 0;
    puVar2 = param_2;
    FUN_10b8e5ce4();
    plVar3 = (long *)*param_2;
    puStack_58 = puVar2;
    uStack_50 = uVar4;
    (**(code **)(*plVar3 + 400))(plVar3,&puStack_58);
    if (((ulong)plVar3 & 1) == 0) {
      FUN_10b99f5f8(&puStack_a0,&UNK_10f7cc218);
      func_0x00010b8fdab0();
      func_0x000104bda960(puStack_a0);
      goto LAB_10b8f18b8;
    }
    uVar5 = *param_2;
    func_0x00010b8fdcbc();
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    func_0x000107c31088(auStack_d8,&UNK_10f686181);
    puStack_a0 = auStack_d0;
    uStack_98 = 0;
    uStack_90 = 2;
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_88 = auStack_d8;
    FUN_10b8e143c(&uStack_70,uVar5,&puStack_58,&puStack_a0,param_2[3]);
    func_0x00010b8fdbd0();
    bVar1 = *(byte *)(param_2[3] + 8);
    if ((bVar1 & 1) == 0) {
      func_0x00010b8fd458(*param_2);
    }
    else {
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x00010b910b80(lStack_60,&uStack_f0);
      FUN_10b8e552c(&uStack_f0);
    }
    FUN_10b8e552c(&uStack_70);
    if (bVar1 == 0) goto LAB_10b8f18b8;
  }
  func_0x00010b8fd458(*param_2);
LAB_10b8f18b8:
  if (lStack_60 != 0) {
    uStack_f8 = 0x10b8f18c0;
    uStack_108 = *(undefined8 *)(lStack_60 + 0x10);
    uStack_110 = *(undefined8 *)(lStack_60 + 8);
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x0001003a90c4(&uStack_110);
    return;
  }
  return;
}



/* Entry: 10b8f19f0; end: 10b8f1a43;  */

void FUN_10b8f19f0(undefined8 param_1,undefined8 *param_2)

{
  long lStack_38;
  
  func_0x00010b8f1bbc(&lStack_38);
  if (lStack_38 != 0) {
    func_0x00010b910d10(lStack_38);
  }
  func_0x00010b8fd30c(*param_2);
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 10b8f1a44; end: 10b8f1b1f;  */

void FUN_10b8f1a44(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  func_0x00010b8fda54();
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  uVar3 = puVar5 == puVar1;
  if (puVar5 < puVar1) {
    uVar10 = *unaff_x20;
    puVar9 = puVar5 + 2;
    puVar5[1] = unaff_x20[1];
    *puVar5 = uVar10;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    lVar8 = (long)puVar5 - *unaff_x19;
    puVar9 = (undefined8 *)((lVar8 >> 4) + 1);
    if ((ulong)puVar9 >> 0x3c != 0) {
      func_0x00010bdb3f3c();
LAB_10b8f1b1c:
      func_0x000104bfe188();
      puStack_70 = puVar5;
      lStack_68 = lVar8;
      func_0x00010b8fe280();
      func_0x00010b8fd4b8();
      lVar8 = *param_2;
      uStack_78 = extraout_x8;
      func_0x00010b8fd6ec();
      func_0x00010b8fe3ec();
      puVar5 = auStack_88;
      (**(code **)(extraout_x8_00 + 0x178))();
      func_0x00010b8fd458(*unaff_x19);
      func_0x00010b8fd3bc(uStack_78);
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      plVar7 = (long *)*puVar5;
      lVar8 = lVar8 + 0x498;
      func_0x000107c28148();
      if ((double)lVar8 / 1000000.0 == 0.0) {
        *extraout_x8_01 = plVar7[0x20];
        lVar8 = plVar7[0x21];
        extraout_x8_01[2] = plVar7[0x22];
        extraout_x8_01[1] = lVar8;
        *(undefined1 *)(extraout_x8_01 + 3) = 0;
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x238))();
      return;
    }
    uVar6 = (long)puVar1 - *unaff_x19;
    puVar5 = (undefined8 *)((long)uVar6 >> 3);
    if ((undefined8 *)((long)uVar6 >> 3) <= puVar9) {
      puVar5 = puVar9;
    }
    uVar3 = uVar6 == 0x7ffffffffffffff0;
    if (0x7fffffffffffffef < uVar6) {
      puVar5 = (undefined8 *)0xfffffffffffffff;
    }
    if (puVar5 == (undefined8 *)0x0) {
      lVar4 = 0;
    }
    else {
      if ((ulong)puVar5 >> 0x3c != 0) goto LAB_10b8f1b1c;
      lVar4 = (long)puVar5 << 4;
      __Znwm();
    }
    puVar1 = (undefined8 *)(lVar4 + lVar8);
    uVar11 = unaff_x20[1];
    uVar10 = *unaff_x20;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    lVar8 = *unaff_x19;
    lVar2 = unaff_x19[1];
    puVar9 = puVar1 + 2;
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    func_0x00010b8fea48();
    _memcpy();
    *unaff_x19 = (long)puVar1 - (lVar2 - lVar8);
    unaff_x19[1] = (long)puVar9;
    unaff_x19[2] = lVar4 + (long)puVar5 * 0x10;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  unaff_x19[1] = (long)puVar9;
  return;
}



/* Entry: 10b8f1b20; end: 10b8f1b7b;  */

void FUN_10b8f1b20(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  undefined8 *unaff_x19;
  long *plVar2;
  long lVar3;
  undefined8 auStack_48 [2];
  undefined8 uStack_38;
  
  func_0x00010b8fe280();
  func_0x00010b8fd4b8();
  lVar3 = *param_2;
  uStack_38 = extraout_x8;
  func_0x00010b8fd6ec();
  func_0x00010b8fe3ec();
  puVar1 = auStack_48;
  (**(code **)(extraout_x8_00 + 0x178))();
  func_0x00010b8fd458(*unaff_x19);
  func_0x00010b8fd3bc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  plVar2 = (long *)*puVar1;
  lVar3 = lVar3 + 0x498;
  func_0x000107c28148();
  if ((double)lVar3 / 1000000.0 == 0.0) {
    *extraout_x8_01 = plVar2[0x20];
    lVar3 = plVar2[0x21];
    extraout_x8_01[2] = plVar2[0x22];
    extraout_x8_01[1] = lVar3;
    *(undefined1 *)(extraout_x8_01 + 3) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x238))();
  return;
}



/* Entry: 10b8f1b7c; end: 10b8f1c23;  */

void FUN_10b8f1b7c(long *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_3;
  param_2 = param_2 + 0x498;
  func_0x000107c28148();
  if ((double)param_2 / 1000000.0 == 0.0) {
    *param_1 = plVar1[0x20];
    lVar2 = plVar1[0x21];
    param_1[2] = plVar1[0x22];
    param_1[1] = lVar2;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8dba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x238))();
  return;
}



/* Entry: 10b8f1c24; end: 10b8f1c27;  */

void FUN_10b8f1c24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b8fd9d4();
  FUN_10b8ea5e0();
  func_0x00010b8feaa8(param_1,param_2,0x1137fcfe0);
  func_0x00010b8fe5ac();
  func_0x00010b8fe338();
  return;
}



/* Entry: 10b8f1c28; end: 10b8f1c5b;  */

void FUN_10b8f1c28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010b8fd9d4();
  FUN_10b8ea5e0();
  func_0x00010b8feaa8(param_1,param_2,0x1137fcfe0);
  func_0x00010b8fe5ac();
  func_0x00010b8fe338();
  return;
}



/* Entry: 10b8f1c5c; end: 10b8f1c63;  */

void FUN_10b8f1c5c(long param_1)

{
  func_0x00010b8fd9d4(param_1 + -0x28);
  FUN_10b8ea5e0();
  func_0x00010b8feaa8();
  func_0x00010b8fe5ac();
  func_0x00010b8fe338();
  return;
}



/* Entry: 10b8f1c64; end: 10b8f1dfb;  */

long ** FUN_10b8f1c64(long **param_1,long *param_2)

{
  long **pplVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long **unaff_x19;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long *plStack_30;
  long **pplStack_28;
  
  pplStack_28 = param_1 + 2;
  plVar3 = *param_1;
  if ((long *)((long)*pplStack_28 - (long)plVar3 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x00010bdb3f48();
      func_0x00010b8fe548();
      if (param_1 < unaff_x19[2]) {
        plVar3 = (long *)*param_2;
        *param_2 = 0;
        param_2[1] = 0;
        pplVar1 = param_1 + 1;
        *param_1 = plVar3;
      }
      else {
        pplVar1 = unaff_x19;
        FUN_10b8f7ce0();
      }
      unaff_x19[1] = (long *)pplVar1;
      return pplVar1 + -1;
    }
    plVar4 = param_1[1];
    plVar2 = param_2;
    FUN_10b8f7c68();
    lStack_40 = (long)param_2 + ((long)plVar4 - (long)plVar3);
    plStack_30 = param_2 + (long)plVar2;
    plStack_48 = param_2;
    lStack_38 = lStack_40;
    func_0x00010b8fdcc8();
    FUN_10b8f7c04();
    param_1 = &plStack_48;
    func_0x00010b8f7c98(param_1);
  }
  return param_1;
}



/* Entry: 10b8f1dfc; end: 10b8f1e2b;  */

void FUN_10b8f1dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = 0;
  func_0x00010b8fe7c4(param_1,&lStack_18,1,param_4,param_2);
  if (lStack_18 != 0) {
    puVar1 = (undefined8 *)(lStack_18 + 8);
    lStack_18 = *(long *)(lStack_18 + 0x10);
    uStack_20 = *puVar1;
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8f1e2c; end: 10b8f1ee7;  */

undefined8 **
FUN_10b8f1e2c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar5;
  undefined8 **ppuVar6;
  code *pcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  long *plVar12;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  code *extraout_x9;
  int extraout_w10;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  long *extraout_x11;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  code **ppcVar16;
  long lVar17;
  undefined8 **ppuVar18;
  long lVar19;
  code *pcVar20;
  long lStack_308;
  code **ppcStack_300;
  long *plStack_2f8;
  undefined8 **ppuStack_2f0;
  code **ppcStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 auStack_2c8 [3];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [8];
  long alStack_298 [3];
  long lStack_280;
  undefined8 **ppuStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *apuStack_250 [4];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [112];
  undefined8 *apuStack_180 [12];
  undefined8 uStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *apuStack_90 [5];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  code **ppcVar7;
  
  func_0x00010b8fd3f4();
  uStack_a8 = 0;
  puStack_98 = (undefined8 *)*param_2;
  ppuVar6 = apuStack_90;
  puStack_a0 = param_1;
  (**(code **)(param_2[1] + 0x18))();
  ppcVar9 = &pcStack_68;
  pcStack_68 = FUN_10b8f7eb0;
  ppuStack_60 = &PTR_DAT_110d73780;
  func_0x00010b8fe214();
  puVar10 = puStack_98;
  *ppuVar6 = puStack_a0;
  ppuVar6[1] = puVar10;
  (*(code *)apuStack_90[0][2])(ppuVar6 + 2,apuStack_90);
  puVar10 = &uStack_a8;
  ppcVar16 = &pcStack_68;
  ppuStack_58 = ppuVar6;
  func_0x00010b8fdf9c();
  func_0x00010b8fd804(ppuStack_60);
  ppuVar18 = apuStack_90;
  (*(code *)*apuStack_90[0])(ppuVar18);
  func_0x00010b8fe108();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return ppuVar18;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_10b8f1ee8;
  ppcVar11 = ppcVar16;
  plVar12 = param_4;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010b8feab4();
  func_0x00010b8fd4b8();
  ppuVar18 = (undefined8 **)(puVar10 + 0x22);
  ppcVar7 = ppcVar11;
  uStack_120 = extraout_x8;
  FUN_10b8f2338();
  func_0x00010b8fe98c();
  if ((bool)in_ZR) {
    ppcVar7 = ppcVar16;
    FUN_10b98ea44(auStack_2c8);
    iVar5 = (int)ppcVar7;
    func_0x00010b8fe63c();
    if (iVar5 != 0) {
      func_0x00010b8fe978();
      plVar12 = extraout_x11;
      puVar10 = extraout_x10;
      if (in_NG == in_OV) {
        plVar12 = extraout_x8_00;
        puVar10 = auStack_2c8;
      }
      FUN_10b9a7544(auStack_1f0,&UNK_10f7cc785,0x12,puVar10,plVar12);
      func_0x00010b8a6ed0(apuStack_180,auStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
    }
    FUN_10b8e5870(auStack_1f0,ppuVar6 + 0x8c);
    FUN_10b93c510(&uStack_2d0,ppuVar6[0x11],ppcVar16);
    func_0x00010b8fe978();
    apuStack_250[0] = extraout_x10_00;
    if (in_NG == in_OV) {
      apuStack_250[0] = auStack_2c8;
    }
    ppcVar7 = (code **)param_4[1];
    func_0x00010b8fdc80(*param_4);
    (*extraout_x9)(auStack_210);
    if ((*(byte *)(param_4[1] + 8) & 1) == 0) {
      pcStack_68 = (code *)0x0;
      ppuStack_60 = (undefined **)0x0;
    }
    else {
      func_0x0001080e08ac(apuStack_250,auStack_210);
      lStack_280 = *param_4;
      lStack_268 = param_4[1];
      uStack_230 = *(undefined8 *)(lStack_280 + 0xc0);
      uStack_220 = *(undefined8 *)(lStack_280 + 0xd0);
      uStack_228 = *(undefined8 *)(lStack_280 + 200);
      uStack_218 = 0;
      uStack_270 = 2;
      ppuStack_278 = apuStack_250;
      func_0x00010b8fdb50(&lStack_280);
      ppcVar7 = (code **)(ppuVar6 + 0x3b);
      plVar12 = &lStack_280;
      FUN_10b8dbbec(auStack_2a0,*param_4,ppuVar6 + 0x37,ppcVar7,plVar12);
      lVar17 = param_4[1];
      if ((*(byte *)(lVar17 + 8) & 1) == 0) {
        pcStack_68 = (code *)0x0;
        ppuStack_60 = (undefined **)0x0;
      }
      else {
        lVar19 = *param_4;
        pcVar8 = (code *)0x88;
        __Znwm();
        pcVar20 = pcVar8 + 8;
        *(long *)pcVar20 = 0;
        *(undefined8 *)(pcVar8 + 0x10) = 0;
        *(undefined ***)pcVar8 = &PTR_FUN_110d73ef8;
        pcVar1 = pcVar8 + 0x18;
        uStack_2b0 = uStack_2d0;
        uStack_2d0 = 0;
        FUN_10b8e9fa0(pcVar1,&uStack_2b0,lVar19,alStack_298,lVar17);
        func_0x0001080d5af4(uStack_2b0);
        ppcVar9 = (code **)(ppuVar6 + 0x22);
        pcStack_68 = pcVar1;
        ppuStack_60 = (undefined **)pcVar8;
        FUN_10b8fc5b8(ppcVar9,ppcVar16);
        lVar17 = 0;
        uVar13 = (ulong)ppcVar9 >> 7;
        while( true ) {
          uVar13 = uVar13 & (ulong)ppuVar6[0x25];
          uVar14 = *(ulong *)((long)ppuVar6[0x22] + uVar13);
          uVar15 = uVar14 ^ ((ulong)ppcVar9 & 0x7f) * 0x101010101010101;
          for (uVar15 = uVar15 + 0xfefefefefefefeff & (uVar15 ^ 0xffffffffffffffff) &
                        0x8080808080808080; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
            uVar2 = (uVar15 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar15 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            puVar10 = ppuVar6[0x23];
            ppuVar18 = (undefined8 **)
                       (uVar13 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                       (ulong)ppuVar6[0x25]);
            if (((code *)puVar10[(long)ppuVar18 * 4] == *ppcVar16) &&
               (in_ZR = 1, (code *)(puVar10 + (long)ppuVar18 * 4)[1] == ppcVar16[1]))
            goto LAB_10b8f21ac;
          }
          in_ZR = (uVar14 & ~uVar14 << 6 & 0x8080808080808080) == 0;
          if (!(bool)in_ZR) break;
          lVar17 = lVar17 + 8;
          uVar13 = lVar17 + uVar13;
        }
        ppuVar18 = ppuVar6 + 0x22;
        FUN_10b8fc604(ppuVar18,ppcVar9);
        puVar10 = ppuVar6[0x23] + (long)ppuVar18 * 4;
        FUN_10b8bc3c4(puVar10,ppcVar16);
        puVar10[2] = 0;
        puVar10[3] = 0;
        *(byte *)((long)ppuVar6[0x22] + (long)ppuVar18) = (byte)ppcVar9 & 0x7f;
        func_0x00010b8fd5c0();
        puVar10 = ppuVar6[0x23];
LAB_10b8f21ac:
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar20,0x10);
          if (bVar4) {
            *(long *)pcVar20 = *(long *)pcVar20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_2a8 = puVar10[(long)ppuVar18 * 4 + 3];
        uStack_2b0 = puVar10[(long)ppuVar18 * 4 + 2];
        puVar10[(long)ppuVar18 * 4 + 2] = pcVar1;
        puVar10[(long)ppuVar18 * 4 + 3] = pcVar8;
        func_0x00010b8fc594(&uStack_2b0);
        plVar12 = alStack_298;
        func_0x00010b8eee70(ppuVar6,*param_4,ppcVar16,plVar12,0,param_4[1]);
        ppcVar7 = ppcVar16;
      }
      func_0x0001080e0bc0(auStack_2a0);
      ppcVar16 = (code **)0x20;
      ppuVar6 = apuStack_250;
      do {
        func_0x00010b8fe020();
        func_0x00010b8fdfcc();
      } while (!(bool)in_ZR);
    }
    func_0x0001080e0bc0(auStack_210);
    func_0x0001080d5af4(uStack_2d0);
    func_0x00010b8e58cc(auStack_1f0);
    ppuVar18 = apuStack_180;
    func_0x0001080e8dd4();
    func_0x00010b8fe120();
  }
  else {
    ppuStack_60 = (undefined **)ppcVar11[3];
    pcStack_68 = ppcVar11[2];
    if (ppcVar11[3] != (code *)0x0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b8fd3bc(uStack_120);
  if ((bool)in_ZR) {
    return ppuVar18;
  }
  ___stack_chk_fail();
  pcStack_2d8 = FUN_10b8f2244;
  ppcStack_300 = ppcVar9;
  plStack_2f8 = param_4;
  ppuStack_2f0 = ppuVar6;
  ppcStack_2e8 = ppcVar16;
  ppuStack_2e0 = &puStack_c0;
  FUN_10b8c43b4(&lStack_308,ppuVar18[0x12]);
  lVar17 = lStack_308;
  if (lStack_308 == 0) {
    lStack_308 = 0;
  }
  else {
    FUN_10b8f22bc(ppuVar18,&lStack_308,ppcVar7,plVar12);
  }
  func_0x000105276914(lStack_308);
  return (undefined8 **)(ulong)(lVar17 != 0);
}



/* Entry: 10b8f1ee8; end: 10b8f2243;  */

undefined1 * FUN_10b8f1ee8(undefined8 param_1,long param_2,undefined1 **param_3,long *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined1 *puVar10;
  long *extraout_x8_00;
  code *extraout_x9;
  int extraout_w10;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  long *extraout_x11;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 **unaff_x20;
  undefined1 **unaff_x22;
  long lVar14;
  undefined1 **ppuVar15;
  long lVar16;
  undefined1 *puVar17;
  long lStack_258;
  undefined1 **ppuStack_250;
  long *plStack_248;
  undefined1 **ppuStack_240;
  undefined1 **ppuStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [8];
  long alStack_1e8 [3];
  long lStack_1d0;
  undefined1 **ppuStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 *apuStack_1a0 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [112];
  undefined1 auStack_d0 [96];
  undefined8 uStack_70;
  
  ppuVar8 = param_3;
  plVar9 = param_4;
  func_0x00010b8feab4();
  func_0x00010b8fd4b8();
  puVar7 = (undefined1 *)(param_2 + 0x110);
  ppuVar15 = ppuVar8;
  uStack_70 = extraout_x8;
  FUN_10b8f2338();
  func_0x00010b8fe98c();
  if ((bool)in_ZR) {
    ppuVar15 = param_3;
    FUN_10b98ea44(auStack_218);
    iVar5 = (int)ppuVar15;
    func_0x00010b8fe63c();
    if (iVar5 != 0) {
      func_0x00010b8fe978();
      plVar9 = extraout_x11;
      puVar7 = extraout_x10;
      if (in_NG == in_OV) {
        plVar9 = extraout_x8_00;
        puVar7 = auStack_218;
      }
      FUN_10b9a7544(auStack_140,&UNK_10f7cc785,0x12,puVar7,plVar9);
      func_0x00010b8a6ed0(auStack_d0,auStack_140);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
    }
    FUN_10b8e5870(auStack_140,unaff_x20 + 0x8c);
    FUN_10b93c510(&uStack_220,unaff_x20[0x11],param_3);
    func_0x00010b8fe978();
    apuStack_1a0[0] = extraout_x10_00;
    if (in_NG == in_OV) {
      apuStack_1a0[0] = auStack_218;
    }
    ppuVar15 = (undefined1 **)param_4[1];
    func_0x00010b8fdc80(*param_4);
    (*extraout_x9)(auStack_160);
    if ((*(byte *)(param_4[1] + 8) & 1) == 0) {
      *unaff_x22 = (undefined1 *)0x0;
      unaff_x22[1] = (undefined1 *)0x0;
    }
    else {
      func_0x0001080e08ac(apuStack_1a0,auStack_160);
      lStack_1d0 = *param_4;
      lStack_1b8 = param_4[1];
      uStack_180 = *(undefined8 *)(lStack_1d0 + 0xc0);
      uStack_170 = *(undefined8 *)(lStack_1d0 + 0xd0);
      uStack_178 = *(undefined8 *)(lStack_1d0 + 200);
      uStack_168 = 0;
      uStack_1c0 = 2;
      ppuStack_1c8 = apuStack_1a0;
      func_0x00010b8fdb50(&lStack_1d0);
      ppuVar15 = unaff_x20 + 0x3b;
      plVar9 = &lStack_1d0;
      FUN_10b8dbbec(auStack_1f0,*param_4,unaff_x20 + 0x37,ppuVar15,plVar9);
      lVar14 = param_4[1];
      if ((*(byte *)(lVar14 + 8) & 1) == 0) {
        *unaff_x22 = (undefined1 *)0x0;
        unaff_x22[1] = (undefined1 *)0x0;
      }
      else {
        lVar16 = *param_4;
        puVar6 = (undefined8 *)0x88;
        __Znwm();
        plVar9 = puVar6 + 1;
        *plVar9 = 0;
        puVar6[2] = 0;
        *puVar6 = &PTR_FUN_110d73ef8;
        puVar1 = puVar6 + 3;
        uStack_200 = uStack_220;
        uStack_220 = 0;
        FUN_10b8e9fa0(puVar1,&uStack_200,lVar16,alStack_1e8,lVar14);
        func_0x0001080d5af4(uStack_200);
        *unaff_x22 = (undefined1 *)puVar1;
        unaff_x22[1] = (undefined1 *)puVar6;
        unaff_x22 = unaff_x20 + 0x22;
        FUN_10b8fc5b8(unaff_x22,param_3);
        lVar14 = 0;
        uVar11 = (ulong)unaff_x22 >> 7;
        while( true ) {
          uVar11 = uVar11 & (ulong)unaff_x20[0x25];
          uVar12 = *(ulong *)(unaff_x20[0x22] + uVar11);
          uVar13 = uVar12 ^ ((ulong)unaff_x22 & 0x7f) * 0x101010101010101;
          for (uVar13 = uVar13 + 0xfefefefefefefeff & (uVar13 ^ 0xffffffffffffffff) &
                        0x8080808080808080; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
            uVar2 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            puVar7 = unaff_x20[0x23];
            ppuVar15 = (undefined1 **)
                       (uVar11 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                       (ulong)unaff_x20[0x25]);
            if ((*(undefined1 **)(puVar7 + (long)ppuVar15 * 0x20) == *param_3) &&
               (in_ZR = 1,
               *(undefined1 **)((long)(puVar7 + (long)ppuVar15 * 0x20) + 8) == param_3[1]))
            goto LAB_10b8f21ac;
          }
          in_ZR = (uVar12 & ~uVar12 << 6 & 0x8080808080808080) == 0;
          if (!(bool)in_ZR) break;
          lVar14 = lVar14 + 8;
          uVar11 = lVar14 + uVar11;
        }
        ppuVar15 = unaff_x20 + 0x22;
        FUN_10b8fc604(ppuVar15,unaff_x22);
        puVar7 = unaff_x20[0x23] + (long)ppuVar15 * 0x20;
        FUN_10b8bc3c4(puVar7,param_3);
        *(undefined8 *)(puVar7 + 0x10) = 0;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        unaff_x20[0x22][(long)ppuVar15] = (byte)unaff_x22 & 0x7f;
        func_0x00010b8fd5c0();
        puVar7 = unaff_x20[0x23];
LAB_10b8f21ac:
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        uStack_1f8 = *(undefined8 *)(puVar7 + (long)ppuVar15 * 0x20 + 0x18);
        uStack_200 = *(undefined8 *)(puVar7 + (long)ppuVar15 * 0x20 + 0x10);
        *(undefined8 **)(puVar7 + (long)ppuVar15 * 0x20 + 0x10) = puVar1;
        *(undefined8 **)(puVar7 + (long)ppuVar15 * 0x20 + 0x18) = puVar6;
        func_0x00010b8fc594(&uStack_200);
        plVar9 = alStack_1e8;
        func_0x00010b8eee70();
        ppuVar15 = param_3;
      }
      func_0x0001080e0bc0(auStack_1f0);
      param_3 = (undefined1 **)0x20;
      unaff_x20 = apuStack_1a0;
      do {
        func_0x00010b8fe020();
        func_0x00010b8fdfcc();
      } while (!(bool)in_ZR);
    }
    func_0x0001080e0bc0(auStack_160);
    func_0x0001080d5af4(uStack_220);
    func_0x00010b8e58cc(auStack_140);
    puVar7 = auStack_d0;
    func_0x0001080e8dd4();
    func_0x00010b8fe120();
  }
  else {
    puVar10 = ppuVar8[3];
    puVar17 = ppuVar8[2];
    unaff_x22[1] = ppuVar8[3];
    *unaff_x22 = puVar17;
    if (puVar10 != (undefined1 *)0x0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b8fd3bc(uStack_70);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10b8f2244;
  ppuStack_250 = unaff_x22;
  plStack_248 = param_4;
  ppuStack_240 = unaff_x20;
  ppuStack_238 = param_3;
  puStack_230 = &stack0xfffffffffffffff0;
  FUN_10b8c43b4(&lStack_258,*(undefined8 *)(puVar7 + 0x90));
  lVar14 = lStack_258;
  if (lStack_258 == 0) {
    lStack_258 = 0;
  }
  else {
    FUN_10b8f22bc(puVar7,&lStack_258,ppuVar15,plVar9);
  }
  func_0x000105276914(lStack_258);
  return (undefined1 *)(ulong)(lVar14 != 0);
}



/* Entry: 10b8f2244; end: 10b8f22bb;  */

bool FUN_10b8f2244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_38;
  
  FUN_10b8c43b4(&lStack_38,*(undefined8 *)(param_1 + 0x90));
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    FUN_10b8f22bc(param_1,&lStack_38,param_3,param_4);
  }
  func_0x000105276914(lStack_38);
  return lVar1 != 0;
}



/* Entry: 10b8f22bc; end: 10b8f22c3;  */

undefined8 **** FUN_10b8f22bc(long param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined8 ****ppppuVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long lVar4;
  long lVar5;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [2];
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  ppppuVar3 = *(undefined8 *****)(param_1 + 0x140);
  ppppuVar1 = ppppuVar3;
  func_0x00010b8e55c0();
  func_0x00010b8e5698(alStack_88);
  if (alStack_88[0] != 0) {
    lStack_90 = *param_2;
    if ((lStack_90 != 0) && (*(long *)(lStack_90 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_90 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10 != 0);
    lVar5 = *param_3;
    pppuStack_a8 = ppppuVar3;
    if (lVar5 != 0) {
      do {
        func_0x00010b8e5788();
      } while (extraout_w10_00 != 0);
    }
    lVar4 = *param_4;
    lStack_a0 = lVar5;
    if (lVar4 != 0) {
      do {
        func_0x00010b8e5628();
      } while (extraout_w10_01 != 0);
    }
    lVar5 = lStack_a0;
    pcStack_78 = FUN_10b8e5140;
    ppuStack_70 = &PTR_FUN_110d72ec8;
    plVar2 = (long *)0x18;
    lStack_98 = lVar4;
    __Znwm();
    *plVar2 = (long)pppuStack_a8;
    pppuStack_a8 = (undefined8 ***)0x0;
    if (lVar5 != 0) {
      do {
        func_0x00010b8e5788();
        lVar4 = lStack_98;
      } while (extraout_w10_02 != 0);
    }
    plVar2[1] = lVar5;
    if (lVar4 != 0) {
      do {
        func_0x00010b8e5628();
      } while (extraout_w10_03 != 0);
    }
    plVar2[2] = lVar4;
    plStack_68 = plVar2;
    func_0x0001080d3888(alStack_88[0],&lStack_90,&pcStack_78);
    func_0x00010b8e55e4(ppuStack_70);
    ppppuVar1 = &pppuStack_a8;
    FUN_10b8e3f0c();
    func_0x00010b8e57c0();
  }
  func_0x00010b8e57b8();
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bddf38(ppppuVar1 + 2);
    func_0x000107c278f4(ppppuVar1 + 1);
    FUN_10b8e47b8(*ppppuVar1);
    return ppppuVar1;
  }
  return ppppuVar1;
}



/* Entry: 10b8f22c4; end: 10b8f2337;  */

long * FUN_10b8f22c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar3 = alStack_50;
  func_0x00010b8fd41c();
  uStack_38 = extraout_x8;
  FUN_10b98dc84(alStack_50,param_3);
  uVar2 = alStack_50[0] == 1;
  if ((bool)uVar2) {
    func_0x00010b8fe53c();
    func_0x00010b8fe5ac();
  }
  else {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  FUN_10b8faff8();
  func_0x00010b8fd3bc(uStack_38);
  if ((bool)uVar2) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010b8fda54();
  FUN_10b8fc5b8();
  lVar6 = 0;
  uVar7 = (ulong)plVar3 >> 7;
  uVar5 = param_4[3];
  while( true ) {
    uVar7 = uVar7 & uVar5;
    uVar8 = *(ulong *)(*param_4 + uVar7);
    uVar9 = uVar8 ^ ((ulong)plVar3 & 0x7f) * 0x101010101010101;
    for (uVar9 = uVar9 + 0xfefefefefefefeff & (uVar9 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar4 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar7 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar5;
      plVar1 = (long *)(param_4[1] + uVar4 * 0x20);
      if ((*plVar1 == *unaff_x20) && (plVar1[1] == unaff_x20[1])) goto LAB_10b8f23f0;
    }
    uVar4 = uVar5;
    if ((uVar8 & ~uVar8 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar7 = lVar6 + uVar7;
  }
LAB_10b8f23f0:
  return (long *)(undefined1 *)(*param_4 + uVar4);
}



/* Entry: 10b8f2338; end: 10b8f23fb;  */

long FUN_10b8f2338(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010b8fda54();
  FUN_10b8fc5b8();
  lVar4 = 0;
  uVar5 = param_1 >> 7;
  uVar3 = unaff_x19[3];
  while( true ) {
    uVar5 = uVar5 & uVar3;
    uVar6 = *(ulong *)(*unaff_x19 + uVar5);
    uVar7 = uVar6 ^ (param_1 & 0x7f) * 0x101010101010101;
    for (uVar7 = uVar7 + 0xfefefefefefefeff & (uVar7 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar5 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar3;
      plVar1 = (long *)(unaff_x19[1] + uVar2 * 0x20);
      if ((*plVar1 == *unaff_x20) && (plVar1[1] == unaff_x20[1])) goto LAB_10b8f23f0;
    }
    uVar2 = uVar3;
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar4 = lVar4 + 8;
    uVar5 = lVar4 + uVar5;
  }
LAB_10b8f23f0:
  return *unaff_x19 + uVar2;
}



/* Entry: 10b8f23fc; end: 10b8f2483;  */

void FUN_10b8f23fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  func_0x00010b8feb10();
  func_0x00010b8fe2d8();
  in_stack_00000028 = 0;
  func_0x000107c31084();
  func_0x000107c2793c(&UNK_10f7cc900);
  func_0x00010b8fe304(&stack0x00000008);
  func_0x00010b8fe268();
  FUN_10b99fa14(&stack0x00000030,param_4,&stack0x00000020);
  func_0x00010b8f3538(param_1,&stack0x00000028,&stack0x00000030,0,0);
  func_0x00010b8fe0d8();
  func_0x00010b8fdb48();
  func_0x00010b8fe120();
  return;
}



/* Entry: 10b8f2484; end: 10b8f24e7;  */

undefined8 * FUN_10b8f2484(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_1 = 1;
    func_0x0001080e08ac(param_1 + 1,param_3);
    return param_1;
  }
  FUN_10b9a0084(&uStack_28,param_2);
  *param_1 = 2;
  param_1[1] = uStack_28;
  uStack_28 = 0;
  puVar1 = (undefined8 *)0x0;
  func_0x000104bda960(0);
  return puVar1;
}



/* Entry: 10b8f24e8; end: 10b8f25eb;  */

long ** FUN_10b8f24e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                     undefined8 *param_5,undefined8 param_6,long param_7)

{
  undefined1 in_ZR;
  long **pplVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined1 auStack_108 [32];
  long *plStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [32];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  plVar2 = param_2;
  func_0x00010b8fd41c();
  uStack_58 = extraout_x8;
  FUN_10b8dba18(auStack_b8,plVar2,param_3);
  uStack_88 = param_4[1];
  uStack_90 = *param_4;
  uStack_80 = 0;
  uStack_68 = param_5[1];
  uStack_70 = *param_5;
  uStack_60 = 0;
  uStack_d8 = 3;
  plStack_e8 = param_2;
  puStack_e0 = auStack_b8;
  lStack_d0 = param_7;
  plStack_98 = param_2;
  plStack_78 = param_2;
  func_0x0001080e01a8(auStack_c8);
  (**(code **)(*param_2 + 0x110))(auStack_108,param_2,param_6,&plStack_e8);
  func_0x00010b8fdda4();
  if ((*(byte *)(param_7 + 8) & 1) == 0) {
    FUN_10b8f279c();
  }
  do {
    pplVar1 = &plStack_78;
    func_0x0001080e0bc0();
    func_0x00010b8fdfcc();
  } while (!(bool)in_ZR);
  func_0x00010b8fd3bc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pplVar1[1] = pplVar1[1] + 5;
    *pplVar1 = (long *)((long)*pplVar1 + 1);
    func_0x00010b8fc890();
    return pplVar1;
  }
  return pplVar1;
}



/* Entry: 10b8f25ec; end: 10b8f26db;  */

long * FUN_10b8f25ec(long *param_1)

{
  param_1[1] = param_1[1] + 0x28;
  *param_1 = *param_1 + 1;
  func_0x00010b8fc890();
  return param_1;
}



/* Entry: 10b8f26dc; end: 10b8f2743;  */

undefined1  [16] FUN_10b8f26dc(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  
  func_0x00010b8fd9d4();
  func_0x00010b8fd3f4();
  func_0x0001080e543c(&uStack_70);
  func_0x00010b8f2664();
  uVar2 = uStack_70;
  func_0x00010b8fdc30();
  puVar3 = auStack_68;
  func_0x00010b948bcc(uVar2);
  func_0x00010b8fd6f8(uStack_60);
  func_0x0001080e5d64();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    auVar4._8_8_ = puVar3;
    auVar4._0_8_ = uStack_70;
    return auVar4;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b8f2744;
  uStack_90 = uStack_70;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10b8fcca8(&uStack_90);
  auVar1._8_8_ = puStack_88;
  auVar1._0_8_ = uStack_90;
  return auVar1;
}



/* Entry: 10b8f2744; end: 10b8f2767;  */

undefined1  [16] FUN_10b8f2744(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10b8fcca8(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b8f2768; end: 10b8f279b;  */

long * FUN_10b8f2768(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_10b8fcca8();
  return param_1;
}



/* Entry: 10b8f279c; end: 10b8f27d7;  */

void FUN_10b8f279c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8fd9b8();
  func_0x00010b8fe87c();
  func_0x00010b8fea48();
  FUN_10b8f23fc(param_1,param_2,param_3);
  func_0x00010b8fdd9c();
  return;
}



/* Entry: 10b8f27d8; end: 10b8f2c0f;  */

/* WARNING: Possible PIC construction at 0x00010b8f2f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f2f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8fe7e8) */

undefined8 ******
FUN_10b8f27d8(undefined8 param_1,undefined8 param_2,long ******param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  long ******pppppplVar5;
  undefined8 ******ppppppuVar6;
  long *****ppppplVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *****pppppuVar9;
  long ******pppppplVar10;
  code **ppcVar11;
  long *****ppppplVar12;
  undefined8 *puVar13;
  long ******pppppplVar14;
  undefined8 extraout_x8;
  long *****ppppplVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  long *****ppppplVar16;
  long *****extraout_x9;
  code *extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long *****ppppplVar17;
  long *****extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  ulong uVar18;
  ulong extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  undefined1 extraout_w12;
  undefined1 extraout_w12_00;
  undefined1 uVar19;
  ulong uVar20;
  ulong extraout_x12;
  long lVar21;
  long extraout_x13;
  ulong uVar22;
  long extraout_x14;
  long extraout_x14_00;
  ulong extraout_x15;
  ulong uVar23;
  undefined8 ******ppppppuVar24;
  long unaff_x20;
  long ******unaff_x22;
  int iVar25;
  long ******unaff_x23;
  code *pcVar26;
  long *****unaff_x24;
  long *****ppppplVar27;
  long ******unaff_x25;
  long lVar28;
  long alStack_308 [3];
  undefined8 *****pppppuStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [24];
  long ****pppplStack_278;
  undefined8 ****ppppuStack_270;
  undefined8 uStack_268;
  long ****pppplStack_260;
  undefined1 auStack_258 [16];
  undefined8 ****ppppuStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 auStack_1e8 [32];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *****pppppuStack_1b0;
  long *****ppppplStack_1a8;
  long ****pppplStack_1a0;
  long *****ppppplStack_198;
  code **ppcStack_190;
  undefined1 *puStack_188;
  undefined8 *****pppppuStack_180;
  undefined8 *****pppppuStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 *****pppppuStack_160;
  undefined8 *****apppppuStack_158 [3];
  undefined1 uStack_140;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 *****pppppuStack_128;
  long *****ppppplStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *****ppppplStack_d0;
  long ****pppplStack_c8;
  undefined8 *****pppppuStack_c0;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  char cStack_a8;
  byte bStack_a7;
  long ****pppplStack_a0;
  long *****ppppplStack_98;
  long ****pppplStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  
  puVar13 = param_4;
  func_0x00010b8fd41c();
  pppplStack_a0 = (long ****)0x0;
  ppppplStack_98 = (long *****)0x0;
  pppplStack_90 = (long ****)((ulong)pppplStack_90 & 0xffffffffffffff00);
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppppplVar27 = &pppplStack_a0;
  uStack_68 = extraout_x8;
  FUN_10b9018fc(&ppppplStack_b0,*puVar13);
  pppppplVar14 = (long ******)param_4[1];
  if (*(char *)(pppppplVar14 + 1) == '\x01') {
    if (((cStack_a8 == '\t') && ((bStack_a7 & 1) != 0)) &&
       ((long ******)ppppplStack_b0 != (long ******)0x0)) {
      do {
        func_0x00010b8fd7f4();
      } while (extraout_w10 != 0);
      unaff_x23 = (long ******)(ppppplStack_b0 + 3);
      unaff_x24 = (long *****)&UNK_10f7cc80e;
      for (lVar28 = (long)ppppplStack_b0[2] << 4; unaff_x22 = (long ******)ppppplStack_b0,
          lVar28 != 0; lVar28 = lVar28 + -0x10) {
        FUN_10b9a9358(&pppppuStack_c0,unaff_x23);
        FUN_10b98dc84(&pppplStack_a0,&pppppuStack_c0);
        func_0x00010b8fdd60();
        if ((long *****)pppplStack_a0 == (long *****)0x1) {
          unaff_x25 = param_3;
          FUN_10b8fc964(param_3,&ppppplStack_98);
          pppppplVar5 = param_3;
          pppppplVar10 = (long ******)ppppplStack_98;
          ppppplVar27 = (long *****)pppplStack_90;
          pppppplVar14 = unaff_x25;
          func_0x00010b8fc984();
          if (((ulong)pppppplVar10 & 1) != 0) {
            ppppplVar15 = param_3[1];
            ppppplVar15[(long)pppppplVar5 * 2] = (long ****)ppppplStack_98;
            ppppplStack_98 = (long *****)0x0;
            (ppppplVar15 + (long)pppppplVar5 * 2)[1] = pppplStack_90;
            pppplStack_90 = (long ****)0x0;
            *(byte *)((long)*param_3 + (long)pppppplVar5) = (byte)unaff_x25 & 0x7f;
            func_0x00010b8fd5a8();
          }
        }
        else {
          pppppplVar14 = &ppppplStack_98;
          func_0x00010b8fe860();
        }
        FUN_10b8faff8(&pppplStack_a0);
        unaff_x23 = unaff_x23 + 2;
      }
    }
    else {
      func_0x00010b8fe868();
      pppppplVar14 = (long ******)&pppplStack_a0;
      func_0x00010b8fe860();
      func_0x00010b8fe0d8();
      unaff_x22 = (long ******)0x0;
    }
    func_0x000104bddf60(unaff_x22);
  }
  else {
    func_0x00010b8fe858();
  }
  ppppppuVar6 = (undefined8 ******)*param_3;
  pppppplVar5 = (long ******)param_3[1];
  FUN_10b8f2744();
  ppppplVar15 = *param_3;
  ppppplVar16 = param_3[3];
  pppppuStack_c0 = ppppppuVar6;
  ppppplStack_b8 = (long *****)pppppplVar5;
  while (ppppplVar12 = ppppplStack_b8,
        uVar3 = (undefined8 ******)pppppuStack_c0 ==
                (undefined8 ******)((long)ppppplVar15 + (long)ppppplVar16), !(bool)uVar3) {
    uVar20 = unaff_x20 + 0x288;
    FUN_10b8fc964(uVar20,ppppplStack_b8);
    lVar28 = 0;
    ppppplVar7 = (long *****)*ppppplVar12;
    ppppplVar17 = (long *****)ppppplVar12[1];
    uVar22 = uVar20 >> 7;
    uVar18 = *(ulong *)(unaff_x20 + 0x2a0);
    uVar20 = (uVar20 & 0x7f) * 0x101010101010101;
    lVar21 = *(long *)(unaff_x20 + 0x288);
    while( true ) {
      uVar20 = *(ulong *)(lVar21 + (uVar22 & uVar18)) ^ uVar20;
      for (uVar20 = uVar20 + 0xfefefefefefefeff & (uVar20 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar20 != 0; uVar20 = uVar20 - 1 & uVar20) {
        uVar23 = (uVar20 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
        uVar23 = (uVar22 & uVar18) + ((ulong)LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) >> 3) & uVar18
        ;
        puVar13 = (undefined8 *)(*(long *)(unaff_x20 + 0x290) + uVar23 * 0x10);
        if (((long *****)*puVar13 == ppppplVar7) && ((long *****)puVar13[1] == ppppplVar17)) {
          uVar2 = uVar23 <= uVar18;
          uVar3 = uVar18 == uVar23;
          if (!(bool)uVar3) {
            func_0x00010b8fe36c(lVar28);
          }
          goto LAB_10b8f2a4c;
        }
      }
      func_0x00010b8fea54();
      uVar3 = (extraout_x15 & 0x8080808080808080) == 0;
      uVar2 = 0;
      if (!(bool)uVar3) break;
      lVar28 = extraout_x8_00 + 8;
      uVar22 = lVar28 + extraout_x14;
      ppppplVar7 = extraout_x9;
      ppppplVar17 = extraout_x10;
      uVar18 = extraout_x11;
      uVar20 = extraout_x12;
      lVar21 = extraout_x13;
    }
LAB_10b8f2a4c:
    ppppplVar7 = (long *****)(unaff_x20 + 0x110);
    pppppplVar5 = (long ******)ppppplVar12;
    FUN_10b8f2338();
    func_0x00010b8fe98c();
    if (!(bool)uVar3) {
      unaff_x23 = (long ******)pppppplVar5[2];
      pppplStack_c8 = (long ****)pppppplVar5[3];
      ppppplStack_d0 = (long *****)unaff_x23;
      if ((long *****)pppplStack_c8 != (long *****)0x0) {
        do {
          func_0x00010b8fd9c4();
        } while (extraout_w10_00 != 0);
      }
      pppplStack_a0 = (long ****)ppppplVar7;
      ppppplStack_98 = (long *****)pppppplVar5;
      FUN_10b8f80a8(&pppplStack_a0);
      FUN_10b8f60d0(pppppplVar5);
      *(long *)(unaff_x20 + 0x120) = *(long *)(unaff_x20 + 0x120) + -1;
      func_0x00010b8fdf38(0);
      lVar28 = extraout_x10_00;
      lVar21 = extraout_x11_00;
      uVar19 = extraout_w12;
      if ((!(bool)uVar3) &&
         (func_0x00010b8fe43c(), lVar28 = extraout_x10_01, lVar21 = extraout_x11_01,
         uVar19 = extraout_w12_00, extraout_x14_00 != 0)) {
        func_0x00010b8fd9f8();
        uVar19 = 0x80;
        lVar28 = extraout_x10_02;
        lVar21 = extraout_x11_02;
        if ((bool)uVar2) {
          uVar19 = 0xfe;
        }
      }
      *(undefined1 *)(lVar28 + lVar21) = uVar19;
      func_0x00010b8fe4dc();
      *(long *)(unaff_x20 + 0x138) = *(long *)(unaff_x20 + 0x138) + extraout_x8_01;
      FUN_10b8ea5e0();
      if (((long *****)*ppppplVar12 == ppppplRam00000001137fcfe0) &&
         ((long *****)ppppplVar12[1] == ppppplRam00000001137fcfe8)) {
        uStack_80 = 0;
        ppppplStack_98 = (long *****)0x0;
        pppplStack_a0 = (long ****)0x0;
        uStack_88 = 0;
        pppplStack_90 = (long ****)0x0;
        FUN_10b8eb83c(unaff_x20 + 0x188,&pppplStack_a0);
        func_0x00010b8fb190(&pppplStack_a0);
        FUN_10b8e3280(*(undefined8 *)(unaff_x20 + 0x140));
        if (*(long *)(*(long *)(unaff_x20 + 0x140) + 0x58) != 0) {
          func_0x00010b8fe36c();
        }
      }
      else {
        func_0x00010b8ea68c();
        if (((long *****)*ppppplVar12 == ppppplRam00000001137fcff0) &&
           ((long *****)ppppplVar12[1] == ppppplRam00000001137fcff8)) {
          uStack_80 = 0;
          ppppplStack_98 = (long *****)0x0;
          pppplStack_a0 = (long ****)0x0;
          uStack_88 = 0;
          pppplStack_90 = (long ****)0x0;
          FUN_10b8eb83c(unaff_x20 + 0x160,&pppplStack_a0);
          func_0x00010b8fb190(&pppplStack_a0);
        }
      }
      pppppplVar14 = (long ******)param_4[1];
      if (((ulong)pppppplVar14[1] & 1) == 0) {
        func_0x00010b8fe858();
      }
      func_0x00010b8ea2fc(unaff_x23);
      func_0x00010b8fe338();
      unaff_x24 = ppppplVar7;
      unaff_x25 = pppppplVar5;
    }
    func_0x00010b8fe83c();
    unaff_x22 = (long ******)ppppplVar12;
  }
  ppppppuVar6 = (undefined8 ******)pppppuStack_c0;
  func_0x00010b8fe08c();
  func_0x00010b8fd3bc(uStack_68);
  if ((bool)uVar3) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  uStack_f8 = 0x1137fc000;
  pcStack_d8 = FUN_10b8f2c10;
  ppppppuVar8 = ppppppuVar6;
  ppppplVar12 = ppppplVar27;
  ppppplStack_100 = (long *****)unaff_x22;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x00010b8fd3f4();
  ppppppuVar24 = apppppuStack_158;
  pppppuStack_160 = ppppppuVar8;
  FUN_10b8f8828();
  uStack_140 = SUB81(ppppplVar27,0);
  pcStack_138 = FUN_10b8f8954;
  ppuStack_130 = &PTR_FUN_110d73800;
  func_0x00010b8fdb18();
  func_0x00010b8fe6a8(pppppuStack_160);
  *(undefined1 *)(ppppppuVar24 + 4) = uStack_140;
  ppcVar11 = &pcStack_138;
  pppppuStack_128 = ppppppuVar24;
  FUN_10b8ebbf0(ppppppuVar6);
  func_0x00010b8fd804(ppuStack_130);
  ppppppuVar8 = apppppuStack_158;
  func_0x00010b8f8308(ppppppuVar8);
  func_0x00010b8fd38c();
  if ((bool)uVar3) {
    return ppppppuVar8;
  }
  ___stack_chk_fail();
  uStack_1c0 = 0xfefefefefefefeff;
  uStack_1b8 = 0x101010101010101;
  pcStack_168 = FUN_10b8f2ca8;
  pppppuStack_1b0 = (undefined8 ******)((long)ppppplVar15 + (long)ppppplVar16);
  ppppplStack_1a8 = (long *****)unaff_x25;
  pppplStack_1a0 = (long ****)unaff_x24;
  ppppplStack_198 = (long *****)unaff_x23;
  ppcStack_190 = &pcStack_138;
  puStack_188 = (undefined1 *)&pppppuStack_160;
  pppppuStack_180 = ppppppuVar6;
  pppppuStack_178 = ppppppuVar24;
  ppuStack_170 = &puStack_e0;
  func_0x00010b8fdffc();
  func_0x00010b8fd4b8();
  pppppuStack_2f0 = (undefined8 ******)0x0;
  uStack_2e8 = 0;
  pcVar1 = ppcVar11[1];
  uStack_1c8 = extraout_x8_02;
  for (pcVar26 = *ppcVar11; uVar3 = pcVar26 == pcVar1, !(bool)uVar3; pcVar26 = pcVar26 + 0x10) {
    func_0x000107c31084();
    FUN_10b98ea44(&ppppuStack_248,pcVar26);
    func_0x000107c31080(&uStack_2c8,ppppppuVar8,&ppppuStack_248);
    FUN_10b9a8e18(&pppplStack_278,&uStack_2c8);
    func_0x00010b9abec8(&pppppuStack_2f0,&pppplStack_278);
    FUN_10b9a8d98(&pppplStack_278);
    func_0x000107c278f8(uStack_2c8);
    ppppppuVar8 = (undefined8 ******)&ppppuStack_248;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00010b8fe384(alStack_308);
  if ((((ulong)ppppplVar12 & 1) == 0) || (alStack_308[0] == 0)) {
    iVar25 = 0;
  }
  else {
    func_0x00010b8fe96c();
    (*extraout_x9_00)(&ppppuStack_248);
    if ((undefined8 *****)ppppuStack_248 == (undefined8 *****)0x0) {
      iVar25 = 0;
    }
    else {
      pppppuVar9 = (undefined8 *****)ppppuStack_248;
      func_0x00010b94d0a8();
      iVar25 = (int)pppppuVar9;
    }
    func_0x00010b8fb1f8(ppppuStack_248);
  }
  ppppplVar27 = *pppppplVar14;
  func_0x00010b9abf6c(&uStack_2c8,&pppppuStack_2f0);
  func_0x00010b9a8f84(&pppplStack_278,&uStack_2c8);
  ppppuStack_248 = (undefined8 *****)0x0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = uStack_220 & 0xffffffffffffff00;
  FUN_10b900bd0(auStack_1e8,ppppplVar27,&pppplStack_278,&ppppuStack_248,pppppplVar14[1]);
  FUN_10b9a8d98(&pppplStack_278);
  func_0x000104bddf60(uStack_2c8);
  func_0x00010b8fdb0c();
  if ((extraout_x8_03 & 1) == 0) {
    func_0x00010b8fe0c4();
    goto LAB_10b8f2f4c;
  }
  func_0x0001080e08ac(&ppppuStack_248,auStack_1e8);
  bVar4 = (int)ppppplVar12 == 0;
  lVar28 = 200;
  if (bVar4) {
    lVar28 = 0xe8;
  }
  pppplStack_278 = (long ****)*pppppplVar14;
  pppplStack_260 = (long ****)pppppplVar14[1];
  uStack_218 = ((ulong *)((long)pppplStack_278 + lVar28))[1];
  uStack_220 = *(ulong *)((long)pppplStack_278 + lVar28);
  lVar28 = 0xc0;
  if (bVar4) {
    lVar28 = 0xe0;
  }
  uStack_228 = *(undefined8 *)((long)pppplStack_278 + lVar28);
  uStack_210 = 0;
  uVar3 = iVar25 == 0;
  lVar28 = 0xc0;
  if ((bool)uVar3) {
    lVar28 = 0xe0;
  }
  lVar21 = 200;
  if ((bool)uVar3) {
    lVar21 = 0xe8;
  }
  uStack_208 = *(undefined8 *)((long)pppplStack_278 + lVar28);
  uStack_1f8 = ((undefined8 *)((long)pppplStack_278 + lVar21))[1];
  uStack_200 = *(undefined8 *)((long)pppplStack_278 + lVar21);
  uStack_1f0 = 0;
  uStack_268 = 3;
  ppppuStack_270 = &ppppuStack_248;
  func_0x0001080e01a8(auStack_258);
  FUN_10b8dbbec(auStack_298,*pppppplVar14,ppppppuVar24 + 0x37,ppppppuVar24 + 0x3e,&pppplStack_278);
  func_0x00010b8fdb0c();
  if ((extraout_x8_04 & 1) == 0) {
    func_0x00010b8fe0c4();
  }
  else {
    func_0x00010b8fe178();
    ppppppuVar6 = (undefined8 ******)pppppuStack_160;
    uStack_2a0 = 0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    if ((long)apppppuStack_158[0] - (long)pppppuStack_160 == 0x70) {
      lVar28 = 8;
LAB_10b8f2edc:
      FUN_10b8fcae0(&uStack_2c8,0xffffffffffffffff >> (LZCOUNT(lVar28) & 0x3fU));
    }
    else {
      lVar28 = (long)apppppuStack_158[0] - (long)pppppuStack_160 >> 4;
      lVar28 = (lVar28 + -1) / 7 + lVar28;
      if (lVar28 != 0) goto LAB_10b8f2edc;
    }
    for (; uVar3 = ppppppuVar6 == (undefined8 ******)apppppuStack_158[0], !(bool)uVar3;
        ppppppuVar6 = ppppppuVar6 + 2) {
      FUN_10b8fc8d4(auStack_2e0,&uStack_2c8,ppppppuVar6);
    }
    FUN_10b8f27d8(ppppppuVar24,auStack_290,&uStack_2c8,pppppplVar14);
    func_0x00010b8f6018(&uStack_2c8);
  }
  func_0x0001080e0bc0(auStack_298);
  ppppppuVar24 = (undefined8 ******)0x40;
  do {
    func_0x00010b8fe020();
    func_0x00010b8fdfcc();
  } while (!(bool)uVar3);
LAB_10b8f2f4c:
  func_0x00010b8fe610();
  func_0x00010b8fdebc(alStack_308);
  ppppppuVar6 = (undefined8 ******)pppppuStack_2f0;
  func_0x000104bddf60(pppppuStack_2f0);
  func_0x00010b8fd3bc(uStack_1c8);
  if ((bool)uVar3) {
    return ppppppuVar6;
  }
  ___stack_chk_fail();
  func_0x00010b8fdf68();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return ppppppuVar24;
}



/* Entry: 10b8f2c10; end: 10b8f2ca7;  */

/* WARNING: Possible PIC construction at 0x00010b8f2f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f2f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8fe7e8) */

long * FUN_10b8f2c10(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  code **ppcVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x9;
  long *plVar9;
  int iVar10;
  code *pcVar11;
  long lVar12;
  long alStack_238 [3];
  long *plStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [24];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_188 [16];
  long alStack_178 [2];
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  long alStack_88 [3];
  undefined1 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  
  lVar5 = param_1;
  uVar8 = param_3;
  func_0x00010b8fd3f4();
  plVar9 = alStack_88;
  FUN_10b8f8828();
  uStack_70 = (undefined1)param_3;
  pcStack_68 = FUN_10b8f8954;
  ppuStack_60 = &PTR_FUN_110d73800;
  func_0x00010b8fdb18();
  func_0x00010b8fe6a8(lVar5);
  *(undefined1 *)(plVar9 + 4) = uStack_70;
  ppcVar7 = &pcStack_68;
  plStack_58 = plVar9;
  FUN_10b8ebbf0(param_1);
  func_0x00010b8fd804(ppuStack_60);
  plVar6 = alStack_88;
  func_0x00010b8f8308(plVar6);
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010b8fdffc();
  func_0x00010b8fd4b8();
  plStack_220 = (long *)0x0;
  uStack_218 = 0;
  pcVar2 = ppcVar7[1];
  uStack_f8 = extraout_x8;
  for (pcVar11 = *ppcVar7; uVar3 = pcVar11 == pcVar2, !(bool)uVar3; pcVar11 = pcVar11 + 0x10) {
    func_0x000107c31084();
    FUN_10b98ea44(alStack_178,pcVar11);
    func_0x000107c31080(&uStack_1f8,plVar6,alStack_178);
    FUN_10b9a8e18(&lStack_1a8,&uStack_1f8);
    func_0x00010b9abec8(&plStack_220,&lStack_1a8);
    FUN_10b9a8d98(&lStack_1a8);
    func_0x000107c278f8(uStack_1f8);
    plVar6 = alStack_178;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00010b8fe384(alStack_238);
  if (((uVar8 & 1) == 0) || (alStack_238[0] == 0)) {
    iVar10 = 0;
  }
  else {
    func_0x00010b8fe96c();
    (*extraout_x9)(alStack_178);
    if (alStack_178[0] == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = alStack_178[0];
      func_0x00010b94d0a8();
      iVar10 = (int)lVar12;
    }
    func_0x00010b8fb1f8(alStack_178[0]);
  }
  lVar12 = *param_4;
  func_0x00010b9abf6c(&uStack_1f8,&plStack_220);
  func_0x00010b9a8f84(&lStack_1a8,&uStack_1f8);
  alStack_178[0] = 0;
  alStack_178[1] = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  FUN_10b900bd0(auStack_118,lVar12,&lStack_1a8,alStack_178,param_4[1]);
  FUN_10b9a8d98(&lStack_1a8);
  func_0x000104bddf60(uStack_1f8);
  func_0x00010b8fdb0c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fe0c4();
    goto LAB_10b8f2f4c;
  }
  func_0x0001080e08ac(alStack_178,auStack_118);
  bVar4 = (int)uVar8 == 0;
  lVar12 = 200;
  if (bVar4) {
    lVar12 = 0xe8;
  }
  lStack_1a8 = *param_4;
  lStack_190 = param_4[1];
  uStack_148 = ((ulong *)(lStack_1a8 + lVar12))[1];
  uStack_150 = *(ulong *)(lStack_1a8 + lVar12);
  lVar12 = 0xc0;
  if (bVar4) {
    lVar12 = 0xe0;
  }
  uStack_158 = *(undefined8 *)(lStack_1a8 + lVar12);
  uStack_140 = 0;
  uVar3 = iVar10 == 0;
  lVar12 = 0xc0;
  if ((bool)uVar3) {
    lVar12 = 0xe0;
  }
  lVar1 = 200;
  if ((bool)uVar3) {
    lVar1 = 0xe8;
  }
  uStack_138 = *(undefined8 *)(lStack_1a8 + lVar12);
  uStack_128 = ((undefined8 *)(lStack_1a8 + lVar1))[1];
  uStack_130 = *(undefined8 *)(lStack_1a8 + lVar1);
  uStack_120 = 0;
  uStack_198 = 3;
  plStack_1a0 = alStack_178;
  func_0x0001080e01a8(auStack_188);
  FUN_10b8dbbec(auStack_1c8,*param_4,plVar9 + 0x37,plVar9 + 0x3e,&lStack_1a8);
  func_0x00010b8fdb0c();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x00010b8fe0c4();
  }
  else {
    func_0x00010b8fe178();
    uStack_1d0 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    if (alStack_88[0] - lVar5 == 0x70) {
      lVar12 = 8;
LAB_10b8f2edc:
      FUN_10b8fcae0(&uStack_1f8,0xffffffffffffffff >> (LZCOUNT(lVar12) & 0x3fU));
    }
    else {
      lVar12 = alStack_88[0] - lVar5 >> 4;
      lVar12 = (lVar12 + -1) / 7 + lVar12;
      if (lVar12 != 0) goto LAB_10b8f2edc;
    }
    for (; uVar3 = lVar5 == alStack_88[0], !(bool)uVar3; lVar5 = lVar5 + 0x10) {
      FUN_10b8fc8d4(auStack_210,&uStack_1f8,lVar5);
    }
    FUN_10b8f27d8(plVar9,auStack_1c0,&uStack_1f8,param_4);
    func_0x00010b8f6018(&uStack_1f8);
  }
  func_0x0001080e0bc0(auStack_1c8);
  plVar9 = (long *)0x40;
  do {
    func_0x00010b8fe020();
    func_0x00010b8fdfcc();
  } while (!(bool)uVar3);
LAB_10b8f2f4c:
  func_0x00010b8fe610();
  func_0x00010b8fdebc(alStack_238);
  plVar6 = plStack_220;
  func_0x000104bddf60(plStack_220);
  func_0x00010b8fd3bc(uStack_f8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010b8fdf68();
    func_0x00010007e5d0();
    func_0x0001003a8cb8();
    return plVar9;
  }
  return plVar6;
}



/* Entry: 10b8f2ca8; end: 10b8f2f77;  */

/* WARNING: Possible PIC construction at 0x00010b8f2f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f2f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8fe7e8) */

long FUN_10b8f2ca8(long *param_1,long *param_2,uint param_3,long *param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long lVar3;
  code *extraout_x9;
  long unaff_x19;
  long *unaff_x21;
  int iVar4;
  long lVar5;
  long alStack_1a8 [3];
  long alStack_190 [2];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined1 auStack_138 [32];
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [16];
  long alStack_e8 [2];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  func_0x00010b8fdffc();
  func_0x00010b8fd4b8();
  alStack_190[0] = 0;
  alStack_190[1] = 0;
  lVar3 = param_2[1];
  uStack_68 = extraout_x8;
  for (lVar5 = *param_2; uVar2 = lVar5 == lVar3, !(bool)uVar2; lVar5 = lVar5 + 0x10) {
    func_0x000107c31084();
    FUN_10b98ea44(alStack_e8,lVar5);
    func_0x000107c31080(&uStack_168,param_1,alStack_e8);
    FUN_10b9a8e18(&lStack_118,&uStack_168);
    func_0x00010b9abec8(alStack_190,&lStack_118);
    FUN_10b9a8d98(&lStack_118);
    func_0x000107c278f8(uStack_168);
    param_1 = alStack_e8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  func_0x00010b8fe384(alStack_1a8);
  if (((param_3 & 1) == 0) || (alStack_1a8[0] == 0)) {
    iVar4 = 0;
  }
  else {
    func_0x00010b8fe96c();
    (*extraout_x9)(alStack_e8);
    if (alStack_e8[0] == 0) {
      iVar4 = 0;
    }
    else {
      lVar5 = alStack_e8[0];
      func_0x00010b94d0a8();
      iVar4 = (int)lVar5;
    }
    func_0x00010b8fb1f8(alStack_e8[0]);
  }
  lVar5 = *param_4;
  func_0x00010b9abf6c(&uStack_168,alStack_190);
  func_0x00010b9a8f84(&lStack_118,&uStack_168);
  alStack_e8[0] = 0;
  alStack_e8[1] = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  FUN_10b900bd0(auStack_88,lVar5,&lStack_118,alStack_e8,param_4[1]);
  FUN_10b9a8d98(&lStack_118);
  func_0x000104bddf60(uStack_168);
  func_0x00010b8fdb0c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fe0c4();
    goto LAB_10b8f2f4c;
  }
  func_0x0001080e08ac(alStack_e8,auStack_88);
  lVar5 = 200;
  if (param_3 == 0) {
    lVar5 = 0xe8;
  }
  lStack_118 = *param_4;
  lStack_100 = param_4[1];
  uStack_b8 = ((ulong *)(lStack_118 + lVar5))[1];
  uStack_c0 = *(ulong *)(lStack_118 + lVar5);
  lVar5 = 0xc0;
  if (param_3 == 0) {
    lVar5 = 0xe0;
  }
  uStack_c8 = *(undefined8 *)(lStack_118 + lVar5);
  uStack_b0 = 0;
  uVar2 = iVar4 == 0;
  lVar5 = 0xc0;
  if ((bool)uVar2) {
    lVar5 = 0xe0;
  }
  lVar3 = 200;
  if ((bool)uVar2) {
    lVar3 = 0xe8;
  }
  uStack_a8 = *(undefined8 *)(lStack_118 + lVar5);
  uStack_98 = ((undefined8 *)(lStack_118 + lVar3))[1];
  uStack_a0 = *(undefined8 *)(lStack_118 + lVar3);
  uStack_90 = 0;
  uStack_108 = 3;
  plStack_110 = alStack_e8;
  func_0x0001080e01a8(auStack_f8);
  FUN_10b8dbbec(auStack_138,*param_4,unaff_x19 + 0x1b8,unaff_x19 + 0x1f0,&lStack_118);
  func_0x00010b8fdb0c();
  if ((extraout_x8_01 & 1) == 0) {
    func_0x00010b8fe0c4();
  }
  else {
    func_0x00010b8fe178();
    uStack_140 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    lVar5 = *unaff_x21;
    lVar1 = unaff_x21[1];
    lVar3 = lVar1 - lVar5;
    if (lVar3 == 0x70) {
      lVar3 = 8;
LAB_10b8f2edc:
      FUN_10b8fcae0(&uStack_168,0xffffffffffffffff >> (LZCOUNT(lVar3) & 0x3fU));
    }
    else {
      lVar3 = lVar3 >> 4;
      lVar3 = (lVar3 + -1) / 7 + lVar3;
      if (lVar3 != 0) goto LAB_10b8f2edc;
    }
    for (; uVar2 = lVar5 == lVar1, !(bool)uVar2; lVar5 = lVar5 + 0x10) {
      FUN_10b8fc8d4(auStack_180,&uStack_168,lVar5);
    }
    FUN_10b8f27d8();
    func_0x00010b8f6018(&uStack_168);
  }
  func_0x0001080e0bc0(auStack_138);
  unaff_x19 = 0x40;
  do {
    func_0x00010b8fe020();
    func_0x00010b8fdfcc();
  } while (!(bool)uVar2);
LAB_10b8f2f4c:
  func_0x00010b8fe610();
  func_0x00010b8fdebc(alStack_1a8);
  lVar5 = alStack_190[0];
  func_0x000104bddf60(alStack_190[0]);
  func_0x00010b8fd3bc(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b8fdf68();
    func_0x00010007e5d0();
    func_0x0001003a8cb8();
    return unaff_x19;
  }
  return lVar5;
}



/* Entry: 10b8f2f78; end: 10b8f2f97;  */

/* WARNING: Possible PIC construction at 0x00010b8f2f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8f2f8c) */
/* WARNING: Removing unreachable block (ram,0x00010b8fe7e8) */

void FUN_10b8f2f78(void)

{
  func_0x00010b8fdf68();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8f2f98; end: 10b8f2fa7;  */

undefined8 FUN_10b8f2f98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b8f2fa8; end: 10b8f3283;  */

long * FUN_10b8f2fa8(long *param_1,long *param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fe280();
    func_0x00010b8fd4b8();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    unaff_x22 = (long *)param_1[0x10];
    if ((unaff_x22 == (long *)0x0) ||
       (in_ZR = 1, unaff_x21 = param_1, *(char *)((long)param_1 + 0x449) == '\x01')) {
      func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x58));
      if ((bool)in_ZR) {
        func_0x00010b8fe008();
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *param_1 = *param_2;
        lVar5 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = lVar5;
        *(undefined1 *)(param_1 + 3) = 0;
        if ((char)param_2[3] == '\x01') {
          func_0x0001080e0ad0(param_1);
        }
        return param_1;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0x449) = 1;
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x140);
      param_2 = unaff_x22;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x140));
      lVar5 = param_1[0x2c];
      if (lVar5 == 0) {
        *(long **)((long)register0x00000008 + -0x1f0) = unaff_x22;
        *(undefined1 **)((long)register0x00000008 + -0x1e8) = unaff_x23;
        *(undefined1 **)((long)register0x00000008 + -0x1e0) =
             (undefined1 *)((long)register0x00000008 + -0x1d8);
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
        func_0x00010b8fdc18(*(undefined8 *)(*unaff_x22 + 0x218));
        func_0x00010b8fe6b4();
        func_0x00010b8ea68c();
        FUN_10b8f1ee8((undefined1 *)((long)register0x00000008 + -0x1d8),param_1,0x1137fcff0,
                      (undefined1 *)((long)register0x00000008 + -0x1f0));
        bVar1 = *(byte *)((long)register0x00000008 + -0x138);
        unaff_x24 = (ulong)bVar1;
        if (bVar1 == 1) {
          unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x1d8);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          uVar6 = 1;
        }
        else {
          FUN_10b9a0084((undefined1 *)((long)register0x00000008 + -0x1a8),
                        (undefined1 *)((long)register0x00000008 + -0x140));
          unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x1a8);
          uVar6 = 2;
        }
        *(undefined8 *)((long)register0x00000008 + -0x158) = uVar6;
        *(undefined1 **)((long)register0x00000008 + -0x150) = unaff_x23;
        func_0x00010b8fc594((undefined1 *)((long)register0x00000008 + -0x1d8));
        if (bVar1 == 0) {
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 2;
          *(undefined1 **)((long)register0x00000008 + -0x1d0) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
          func_0x00010b8fdeec();
          func_0x00010b8fe758();
          unaff_x23 = (undefined1 *)0x0;
        }
        else {
          puVar3 = unaff_x23;
          plVar4 = unaff_x22;
          FUN_10b8e129c(unaff_x23,unaff_x22,(undefined1 *)((long)register0x00000008 + -0x140));
          *(undefined1 **)((long)register0x00000008 + -0x168) = puVar3;
          *(long **)((long)register0x00000008 + -0x160) = plVar4;
          if (*(char *)((long)register0x00000008 + -0x138) == '\x01') {
            *(undefined **)((long)register0x00000008 + -0x1a8) = &UNK_10f7cc84b;
            *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0xb;
            (**(code **)(*unaff_x22 + 0xd0))
                      ((undefined1 *)((long)register0x00000008 + -0x188),unaff_x22,
                       (undefined1 *)((long)register0x00000008 + -0x168),
                       (undefined1 *)((long)register0x00000008 + -0x1a8),
                       (undefined1 *)((long)register0x00000008 + -0x140));
            func_0x00010b9000a8((undefined1 *)((long)register0x00000008 + -0x1d8),
                                (undefined1 *)((long)register0x00000008 + -0x140),
                                (undefined1 *)((long)register0x00000008 + -0x188));
            func_0x00010b8fdeec();
            func_0x00010b8fe758();
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x188);
          }
          else {
            *(long **)((long)register0x00000008 + -0x1a8) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x198) =
                 *(undefined8 *)((long)register0x00000008 + -0x160);
            *(undefined8 *)((long)register0x00000008 + -0x1a0) =
                 *(undefined8 *)((long)register0x00000008 + -0x168);
            *(undefined1 *)((long)register0x00000008 + -400) = 0;
            FUN_10b8f2484((undefined1 *)((long)register0x00000008 + -0x1d8),
                          (undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -0x1a8));
            func_0x00010b8fdeec();
            func_0x00010b8fe758();
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x1a8);
          }
          func_0x0001080e0bc0(puVar3);
        }
        if (param_1[0x2c] != 1) {
          func_0x00010b8fe860(param_1,&UNK_10f7cc857);
        }
        if (bVar1 == 0) {
          func_0x000104bda960(unaff_x23);
        }
        else {
          func_0x00010b8fc594((undefined1 *)((long)register0x00000008 + -0x150));
        }
        param_2 = (long *)((long)register0x00000008 + -0x140);
        (**(code **)(*unaff_x22 + 0x220))(unaff_x22);
        lVar5 = param_1[0x2c];
      }
      uVar2 = lVar5 == 1;
      if ((bool)uVar2) {
        *(long **)((long)register0x00000008 + -0x1d8) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = 1;
        *(undefined1 **)((long)register0x00000008 + -0x1c0) =
             (undefined1 *)((long)register0x00000008 + -0x140);
        func_0x00010b8fdb50((undefined1 *)((long)register0x00000008 + -0x1d8));
        param_2 = param_1 + 0x2e;
        (**(code **)(*unaff_x22 + 0x110))
                  (unaff_x22,param_2,(undefined1 *)((long)register0x00000008 + -0x1d8));
        if ((*(byte *)((long)register0x00000008 + -0x138) & 1) == 0) {
          param_2 = (long *)&UNK_10f7cc857;
          func_0x00010b8fe858(param_1);
          func_0x0001080e0bc0();
          goto LAB_10b8f3224;
        }
        *(undefined1 *)((long)param_1 + 0x449) = 0;
      }
      else {
LAB_10b8f3224:
        if ((*(byte *)((long)register0x00000008 + -0x138) & 1) == 0) {
          (**(code **)(*(long *)((long)register0x00000008 + -0x140) + 0x18))
                    ((undefined1 *)((long)register0x00000008 + -0x140));
          *(undefined1 *)((long)register0x00000008 + -0x138) = 1;
        }
        *(undefined1 *)((long)param_1 + 0x449) = 0;
        func_0x00010b8fe008();
        FUN_10b8dd210();
      }
      param_1 = (long *)((long)register0x00000008 + -0x140);
      func_0x00010b8ffdac();
      func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x58));
      if ((bool)uVar2) {
        return param_1;
      }
    }
    in_ZR = 0;
    unaff_x30 = FUN_10b8f3284;
    ___stack_chk_fail();
    param_1 = param_1 + -3;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
  } while( true );
}



/* Entry: 10b8f3284; end: 10b8f328b;  */

long * FUN_10b8f3284(long *param_1,long *param_2)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    param_1 = param_1 + -3;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010b8fe280();
    func_0x00010b8fd4b8();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    unaff_x22 = (long *)param_1[0x10];
    if ((unaff_x22 == (long *)0x0) ||
       (in_ZR = 1, unaff_x21 = param_1, *(char *)((long)param_1 + 0x449) == '\x01')) {
      func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x58));
      if ((bool)in_ZR) {
        func_0x00010b8fe008();
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *param_1 = *param_2;
        lVar5 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = lVar5;
        *(undefined1 *)(param_1 + 3) = 0;
        if ((char)param_2[3] == '\x01') {
          func_0x0001080e0ad0(param_1);
        }
        return param_1;
      }
    }
    else {
      *(undefined1 *)((long)param_1 + 0x449) = 1;
      unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x140);
      param_2 = unaff_x22;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x140));
      lVar5 = param_1[0x2c];
      if (lVar5 == 0) {
        *(long **)((long)register0x00000008 + -0x1f0) = unaff_x22;
        *(undefined1 **)((long)register0x00000008 + -0x1e8) = unaff_x23;
        *(undefined1 **)((long)register0x00000008 + -0x1e0) =
             (undefined1 *)((long)register0x00000008 + -0x1d8);
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
        func_0x00010b8fdc18(*(undefined8 *)(*unaff_x22 + 0x218));
        func_0x00010b8fe6b4();
        func_0x00010b8ea68c();
        FUN_10b8f1ee8((undefined1 *)((long)register0x00000008 + -0x1d8),param_1,0x1137fcff0,
                      (undefined1 *)((long)register0x00000008 + -0x1f0));
        bVar1 = *(byte *)((long)register0x00000008 + -0x138);
        unaff_x24 = (ulong)bVar1;
        if (bVar1 == 1) {
          unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x1d8);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0x1d0);
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          uVar6 = 1;
        }
        else {
          FUN_10b9a0084((undefined1 *)((long)register0x00000008 + -0x1a8),
                        (undefined1 *)((long)register0x00000008 + -0x140));
          unaff_x23 = *(undefined1 **)((long)register0x00000008 + -0x1a8);
          uVar6 = 2;
        }
        *(undefined8 *)((long)register0x00000008 + -0x158) = uVar6;
        *(undefined1 **)((long)register0x00000008 + -0x150) = unaff_x23;
        func_0x00010b8fc594((undefined1 *)((long)register0x00000008 + -0x1d8));
        if (bVar1 == 0) {
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 2;
          *(undefined1 **)((long)register0x00000008 + -0x1d0) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
          func_0x00010b8fdeec();
          func_0x00010b8fe758();
          unaff_x23 = (undefined1 *)0x0;
        }
        else {
          puVar3 = unaff_x23;
          plVar4 = unaff_x22;
          FUN_10b8e129c(unaff_x23,unaff_x22,(undefined1 *)((long)register0x00000008 + -0x140));
          *(undefined1 **)((long)register0x00000008 + -0x168) = puVar3;
          *(long **)((long)register0x00000008 + -0x160) = plVar4;
          if (*(char *)((long)register0x00000008 + -0x138) == '\x01') {
            *(undefined **)((long)register0x00000008 + -0x1a8) = &UNK_10f7cc84b;
            *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0xb;
            (**(code **)(*unaff_x22 + 0xd0))
                      ((undefined1 *)((long)register0x00000008 + -0x188),unaff_x22,
                       (undefined1 *)((long)register0x00000008 + -0x168),
                       (undefined1 *)((long)register0x00000008 + -0x1a8),
                       (undefined1 *)((long)register0x00000008 + -0x140));
            func_0x00010b9000a8((undefined1 *)((long)register0x00000008 + -0x1d8),
                                (undefined1 *)((long)register0x00000008 + -0x140),
                                (undefined1 *)((long)register0x00000008 + -0x188));
            func_0x00010b8fdeec();
            func_0x00010b8fe758();
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x188);
          }
          else {
            *(long **)((long)register0x00000008 + -0x1a8) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x198) =
                 *(undefined8 *)((long)register0x00000008 + -0x160);
            *(undefined8 *)((long)register0x00000008 + -0x1a0) =
                 *(undefined8 *)((long)register0x00000008 + -0x168);
            *(undefined1 *)((long)register0x00000008 + -400) = 0;
            FUN_10b8f2484((undefined1 *)((long)register0x00000008 + -0x1d8),
                          (undefined1 *)((long)register0x00000008 + -0x140),
                          (undefined1 *)((long)register0x00000008 + -0x1a8));
            func_0x00010b8fdeec();
            func_0x00010b8fe758();
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x1a8);
          }
          func_0x0001080e0bc0(puVar3);
        }
        if (param_1[0x2c] != 1) {
          func_0x00010b8fe860(param_1,&UNK_10f7cc857);
        }
        if (bVar1 == 0) {
          func_0x000104bda960(unaff_x23);
        }
        else {
          func_0x00010b8fc594((undefined1 *)((long)register0x00000008 + -0x150));
        }
        param_2 = (long *)((long)register0x00000008 + -0x140);
        (**(code **)(*unaff_x22 + 0x220))(unaff_x22);
        lVar5 = param_1[0x2c];
      }
      uVar2 = lVar5 == 1;
      if ((bool)uVar2) {
        *(long **)((long)register0x00000008 + -0x1d8) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x1c8) = 1;
        *(undefined1 **)((long)register0x00000008 + -0x1c0) =
             (undefined1 *)((long)register0x00000008 + -0x140);
        func_0x00010b8fdb50((undefined1 *)((long)register0x00000008 + -0x1d8));
        param_2 = param_1 + 0x2e;
        (**(code **)(*unaff_x22 + 0x110))
                  (unaff_x22,param_2,(undefined1 *)((long)register0x00000008 + -0x1d8));
        if ((*(byte *)((long)register0x00000008 + -0x138) & 1) == 0) {
          param_2 = (long *)&UNK_10f7cc857;
          func_0x00010b8fe858(param_1);
          func_0x0001080e0bc0();
          goto LAB_10b8f3224;
        }
        *(undefined1 *)((long)param_1 + 0x449) = 0;
      }
      else {
LAB_10b8f3224:
        if ((*(byte *)((long)register0x00000008 + -0x138) & 1) == 0) {
          (**(code **)(*(long *)((long)register0x00000008 + -0x140) + 0x18))
                    ((undefined1 *)((long)register0x00000008 + -0x140));
          *(undefined1 *)((long)register0x00000008 + -0x138) = 1;
        }
        *(undefined1 *)((long)param_1 + 0x449) = 0;
        func_0x00010b8fe008();
        FUN_10b8dd210();
      }
      param_1 = (long *)((long)register0x00000008 + -0x140);
      func_0x00010b8ffdac();
      func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x58));
      if ((bool)uVar2) {
        return param_1;
      }
    }
    in_ZR = 0;
    unaff_x30 = FUN_10b8f3284;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
  } while( true );
}



/* Entry: 10b8f328c; end: 10b8f339b;  */

long * FUN_10b8f328c(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  long *plVar12;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8fdffc(param_1);
    func_0x00010b8fd3f4();
    func_0x00010b8c2a44((undefined1 *)((long)register0x00000008 + -0x128));
    *(undefined1 *)((long)register0x00000008 + -0x129) = 0;
    plVar7 = (long *)(unaff_x19 + 0x568);
    plVar9 = (long *)((long)register0x00000008 + -0x128);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x129);
    plVar2 = unaff_x21;
    plVar4 = param_3;
    FUN_10b8f339c();
    if (((ulong)plVar2 & 1) == 0) {
      plVar7 = unaff_x21;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x120));
      *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x160) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x148) = 0;
      plVar9 = (long *)((long)register0x00000008 + -0x170);
      plVar4 = (long *)((long)register0x00000008 + -0x120);
      func_0x00010b8fea48((undefined1 *)((long)register0x00000008 + -0x140));
      FUN_10b9018fc();
      if ((*(byte *)((long)register0x00000008 + -0x118) & 1) == 0) {
        (**(code **)(*(long *)((long)register0x00000008 + -0x120) + 0x18))
                  ((undefined1 *)((long)register0x00000008 + -0x120));
        *(undefined1 *)((long)register0x00000008 + -0x118) = 1;
      }
      in_ZR = *(char *)((long)register0x00000008 + -0x138) == '\f';
      if ((bool)in_ZR) {
        FUN_10b9a9488((undefined1 *)((long)register0x00000008 + -0x170),
                      (undefined1 *)((long)register0x00000008 + -0x140));
        func_0x00010b8fdec4();
        func_0x00010b8fe628();
      }
      else {
        FUN_10b9a9358((undefined1 *)((long)register0x00000008 + -0x178),
                      (undefined1 *)((long)register0x00000008 + -0x140));
        func_0x00010b8fe560();
        FUN_10b99f560();
        func_0x00010b8fdec4();
        func_0x00010b8fe628();
        func_0x00010b8fd9e0();
      }
      func_0x00010b8fe56c();
      func_0x00010b8ffdac((undefined1 *)((long)register0x00000008 + -0x120));
    }
    plVar2 = *(long **)((long)register0x00000008 + -0x128);
    func_0x000105276914();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return plVar2;
    }
    ___stack_chk_fail();
    *(long **)((long)register0x00000008 + -0x1c0) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x1b8) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x1b0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x1a8) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x1a0) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x198) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -400) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x188) = FUN_10b8f339c;
    func_0x00010b8fd474();
    plVar11 = plVar4;
    if (*plVar7 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      puVar6 = unaff_x20;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x2b0),plVar2);
      lVar3 = *plVar7;
      plVar10 = (long *)((long)register0x00000008 + -0x2b0);
      plVar8 = plVar2;
      FUN_10b8e129c();
      *(long *)((long)register0x00000008 + -0x2c0) = lVar3;
      *(long **)((long)register0x00000008 + -0x2b8) = plVar8;
      if ((*(byte *)((long)register0x00000008 + -0x2a8) & 1) == 0) {
        func_0x00010b8fe234();
        plVar12 = (long *)0x0;
        *(undefined1 *)((long)register0x00000008 + -0x2a8) = 1;
        unaff_x19 = unaff_x20;
        unaff_x21 = plVar9;
        unaff_x23 = plVar7;
      }
      else {
        func_0x0001080e07a8((undefined1 *)((long)register0x00000008 + -0x300),plVar2,plVar4);
        func_0x00010b8fe804((undefined1 *)((long)register0x00000008 + -0x2e0));
        *(long **)((long)register0x00000008 + -0x330) = plVar2;
        *(long **)((long)register0x00000008 + -0x328) = (long *)((long)register0x00000008 + -0x300);
        *(undefined8 *)((long)register0x00000008 + -800) = 2;
        *(undefined1 **)((long)register0x00000008 + -0x318) =
             (undefined1 *)((long)register0x00000008 + -0x2b0);
        func_0x00010b8fdb50((undefined1 *)((long)register0x00000008 + -0x330));
        plVar8 = (long *)((long)register0x00000008 + -0x2c0);
        plVar10 = (long *)((long)register0x00000008 + -0x330);
        func_0x00010b8fe100((undefined1 *)((long)register0x00000008 + -0x350));
        if ((*(byte *)((long)register0x00000008 + -0x2a8) & 1) == 0) {
LAB_10b8f34c4:
          func_0x00010b8fe234();
          plVar12 = (long *)0x0;
          *(undefined1 *)((long)register0x00000008 + -0x2a8) = 1;
        }
        else {
          plVar8 = (long *)((long)register0x00000008 + -0x348);
          plVar10 = (long *)((long)register0x00000008 + -0x2b0);
          (**(code **)(*plVar2 + 0x150))();
          if ((*(byte *)((long)register0x00000008 + -0x2a8) & 1) == 0) goto LAB_10b8f34c4;
          if ((int)plVar2 == 1) {
            plVar12 = (long *)0x1;
            in_ZR = 1;
          }
          else {
            in_ZR = (int)plVar2 == 2;
            if ((bool)in_ZR) {
              plVar12 = (long *)0x0;
              *unaff_x20 = 1;
            }
            else {
              plVar12 = (long *)0x0;
            }
          }
        }
        func_0x0001080e0bc0((undefined1 *)((long)register0x00000008 + -0x350));
        do {
          func_0x0001080e0bc0((undefined1 *)((long)register0x00000008 + -0x2e0));
          func_0x00010b8fdfcc();
          unaff_x19 = (undefined1 *)0x20;
          unaff_x21 = (long *)((long)register0x00000008 + -0x300);
          unaff_x23 = (long *)((long)register0x00000008 + -0x300);
        } while (!(bool)in_ZR);
      }
      plVar2 = (long *)((long)register0x00000008 + -0x2b0);
      func_0x00010b8ffdac();
      plVar7 = plVar8;
      plVar9 = plVar10;
      unaff_x20 = puVar6;
      unaff_x22 = plVar4;
    }
    func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x1c8));
    if ((bool)in_ZR) {
      return plVar12;
    }
    ___stack_chk_fail();
    *(long **)((long)register0x00000008 + -0x390) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x388) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x380) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x378) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x370) = plVar12;
    *(undefined1 **)((long)register0x00000008 + -0x368) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x360) =
         (undefined1 *)((long)register0x00000008 + -400);
    *(undefined8 *)((long)register0x00000008 + -0x358) = 0x10b8f3538;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x360);
    *(undefined8 *)((long)register0x00000008 + -0x3b8) = 0;
    unaff_x24 = plVar2;
    (**(code **)(*plVar2 + 0xd0))();
    if (*plVar7 == 0) {
      plVar4 = (long *)*unaff_x24;
      if (plVar4 != (long *)0x0) {
LAB_10b8f35c0:
        lVar3 = *plVar4;
LAB_10b8f35c4:
        (**(code **)(lVar3 + 0xe8))();
      }
    }
    else {
      func_0x000107c31068((undefined1 *)((long)register0x00000008 + -0x3b8),*plVar7 + 0x38);
      plVar4 = (long *)*unaff_x24;
      if (plVar4 != (long *)0x0) {
        if (*(long *)((long)register0x00000008 + -0x3b8) == 0) goto LAB_10b8f35c0;
        lVar3 = *plVar4;
        if (*(int *)(*(long *)((long)register0x00000008 + -0x3b8) + 0xc) == 0) goto LAB_10b8f35c4;
        (**(code **)(lVar3 + 0xe0))(plVar4,(undefined1 *)((long)register0x00000008 + -0x3b8));
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x3c0) = 0;
    if (*(long *)((long)register0x00000008 + -0x3b8) == 0) {
      if (((ulong)plVar11 & 1) == 0) {
LAB_10b8f3664:
        func_0x000107c31084();
        func_0x00010b8fea80();
        puVar5 = &UNK_10f7cc99c;
      }
      else {
LAB_10b8f35fc:
        func_0x000107c31084();
        func_0x00010b8fea80();
        puVar5 = &UNK_10f7cc95c;
      }
      func_0x000107c2793c(puVar5);
      func_0x00010b8fdf54((undefined1 *)((long)register0x00000008 + -0x3b0));
      func_0x000107c31080((undefined1 *)((long)register0x00000008 + -0x3e0),plVar11,
                          (undefined1 *)((long)register0x00000008 + -0x3b0));
      func_0x000107c31060((undefined1 *)((long)register0x00000008 + -0x3c0),
                          (undefined1 *)((long)register0x00000008 + -0x3e0));
      func_0x00010b8fe7bc();
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x3b0);
    }
    else {
      iVar1 = *(int *)(*(long *)((long)register0x00000008 + -0x3b8) + 0xc);
      if (((ulong)plVar11 & 1) == 0) {
        if (iVar1 == 0) goto LAB_10b8f3664;
        func_0x000107c31084();
        func_0x00010b8fdfd8();
        puVar5 = &UNK_10f7cc97e;
      }
      else {
        if (iVar1 == 0) goto LAB_10b8f35fc;
        func_0x000107c31084();
        func_0x00010b8fdfd8();
        puVar5 = &UNK_10f7cc932;
      }
      func_0x000107c2793c(puVar5);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x3e0));
      func_0x000107c31080((undefined1 *)((long)register0x00000008 + -0x3b0),plVar11,
                          (undefined1 *)((long)register0x00000008 + -0x3e0));
      func_0x000107c31060((undefined1 *)((long)register0x00000008 + -0x3c0),
                          (undefined1 *)((long)register0x00000008 + -0x3b0));
      func_0x000107c278f8(*(undefined8 *)((long)register0x00000008 + -0x3b0));
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x3e0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
    FUN_10b9a5e5c((undefined1 *)((long)register0x00000008 + -0x3b0),
                  (undefined1 *)((long)register0x00000008 + -0x3c0));
    plVar4 = (long *)plVar2[0x15];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              ((undefined1 *)((long)register0x00000008 + -0x3f8),
               (undefined1 *)((long)register0x00000008 + -0x3b0));
    (**(code **)(*plVar4 + 0x28))(plVar4,3,(undefined1 *)((long)register0x00000008 + -0x3f8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x3f8));
    unaff_x23 = (long *)((long)register0x00000008 + -0x3e0);
    func_0x00010b8ead94((undefined1 *)((long)register0x00000008 + -0x3e0),plVar2);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x3e0);
    if (unaff_x22 != (long *)0x0) {
      plVar4 = plVar9;
      FUN_10b99f74c();
      if ((int)plVar4 != 0) {
        (**(code **)(*unaff_x22 + 0x40))
                  (unaff_x22,3,(undefined1 *)((long)register0x00000008 + -0x3c0));
      }
      (**(code **)(*unaff_x22 + 0x38))
                (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x3b8),plVar9);
    }
    func_0x00010b8fe2fc();
    if ((int)unaff_x20 == 0) {
      if (*plVar7 != 0) {
        func_0x00010b8c1ec4(*plVar7,(undefined1 *)((long)register0x00000008 + -0x3c0),1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x3b0));
      plVar7 = *(long **)((long)register0x00000008 + -0x3c0);
      func_0x000107c278f8(plVar7);
      func_0x00010b8fe650();
      return plVar7;
    }
    func_0x0001080df67c((undefined1 *)((long)register0x00000008 + -0x408),
                        (undefined1 *)((long)register0x00000008 + -0x3b0));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x3e0);
    FUN_10bd3f434((undefined1 *)((long)register0x00000008 + -0x3e0),
                  *(undefined8 *)((long)register0x00000008 + -0x408),
                  *(undefined8 *)((long)register0x00000008 + -0x400),&DAT_10f6842c6);
    in_ZR = *(char *)((long)register0x00000008 + -0x3c9) == '\0';
    param_1 = *(undefined1 **)((long)register0x00000008 + -0x3e0);
    if (-1 < *(char *)((long)register0x00000008 + -0x3c9)) {
      param_1 = unaff_x19;
    }
    param_3 = (long *)0x10d0;
    unaff_x30 = FUN_10b8f37d4;
    FUN_10bd3f4e0(param_1,"unknown");
    param_1 = param_1 + -0x18;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x410);
    unaff_x21 = plVar9;
  } while( true );
}



/* Entry: 10b8f339c; end: 10b8f37d3;  */

long * FUN_10b8f339c(long *param_1,long *param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar8;
  long *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8fd474();
    plVar8 = param_4;
    if (*param_2 == 0) {
      plVar7 = (long *)0x0;
      plVar6 = param_3;
    }
    else {
      puVar4 = param_5;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x130),param_1);
      lVar2 = *param_2;
      plVar6 = (long *)((long)register0x00000008 + -0x130);
      plVar5 = param_1;
      FUN_10b8e129c();
      *(long *)((long)register0x00000008 + -0x140) = lVar2;
      *(long **)((long)register0x00000008 + -0x138) = plVar5;
      if ((*(byte *)((long)register0x00000008 + -0x128) & 1) == 0) {
        func_0x00010b8fe234();
        plVar7 = (long *)0x0;
        *(undefined1 *)((long)register0x00000008 + -0x128) = 1;
        unaff_x19 = param_5;
        unaff_x23 = param_2;
      }
      else {
        func_0x0001080e07a8((undefined1 *)((long)register0x00000008 + -0x180),param_1,param_4);
        func_0x00010b8fe804((undefined1 *)((long)register0x00000008 + -0x160));
        *(long **)((long)register0x00000008 + -0x1b0) = param_1;
        *(long **)((long)register0x00000008 + -0x1a8) = (long *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = 2;
        *(undefined1 **)((long)register0x00000008 + -0x198) =
             (undefined1 *)((long)register0x00000008 + -0x130);
        func_0x00010b8fdb50((undefined1 *)((long)register0x00000008 + -0x1b0));
        plVar5 = (long *)((long)register0x00000008 + -0x140);
        plVar6 = (long *)((long)register0x00000008 + -0x1b0);
        func_0x00010b8fe100((undefined1 *)((long)register0x00000008 + -0x1d0));
        if ((*(byte *)((long)register0x00000008 + -0x128) & 1) == 0) {
LAB_10b8f34c4:
          func_0x00010b8fe234();
          plVar7 = (long *)0x0;
          *(undefined1 *)((long)register0x00000008 + -0x128) = 1;
        }
        else {
          plVar5 = (long *)((long)register0x00000008 + -0x1c8);
          plVar6 = (long *)((long)register0x00000008 + -0x130);
          (**(code **)(*param_1 + 0x150))();
          if ((*(byte *)((long)register0x00000008 + -0x128) & 1) == 0) goto LAB_10b8f34c4;
          if ((int)param_1 == 1) {
            plVar7 = (long *)0x1;
            in_ZR = 1;
          }
          else {
            in_ZR = (int)param_1 == 2;
            if ((bool)in_ZR) {
              plVar7 = (long *)0x0;
              *param_5 = 1;
            }
            else {
              plVar7 = (long *)0x0;
            }
          }
        }
        func_0x0001080e0bc0((undefined1 *)((long)register0x00000008 + -0x1d0));
        param_3 = (long *)((long)register0x00000008 + -0x180);
        do {
          func_0x0001080e0bc0((undefined1 *)((long)register0x00000008 + -0x160));
          func_0x00010b8fdfcc();
          unaff_x19 = (undefined1 *)0x20;
          unaff_x23 = (long *)((long)register0x00000008 + -0x180);
        } while (!(bool)in_ZR);
      }
      param_1 = (long *)((long)register0x00000008 + -0x130);
      func_0x00010b8ffdac();
      param_2 = plVar5;
      param_5 = puVar4;
      unaff_x21 = param_3;
      unaff_x22 = param_4;
    }
    func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) {
      return plVar7;
    }
    ___stack_chk_fail();
    *(long **)((long)register0x00000008 + -0x210) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x208) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x200) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x1f8) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x1f0) = plVar7;
    *(undefined1 **)((long)register0x00000008 + -0x1e8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x1e0) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x10b8f3538;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    unaff_x24 = param_1;
    (**(code **)(*param_1 + 0xd0))();
    if (*param_2 == 0) {
      plVar7 = (long *)*unaff_x24;
      if (plVar7 != (long *)0x0) {
LAB_10b8f35c0:
        lVar2 = *plVar7;
LAB_10b8f35c4:
        (**(code **)(lVar2 + 0xe8))();
      }
    }
    else {
      func_0x000107c31068((undefined1 *)((long)register0x00000008 + -0x238),*param_2 + 0x38);
      plVar7 = (long *)*unaff_x24;
      if (plVar7 != (long *)0x0) {
        if (*(long *)((long)register0x00000008 + -0x238) == 0) goto LAB_10b8f35c0;
        lVar2 = *plVar7;
        if (*(int *)(*(long *)((long)register0x00000008 + -0x238) + 0xc) == 0) goto LAB_10b8f35c4;
        (**(code **)(lVar2 + 0xe0))(plVar7,(undefined1 *)((long)register0x00000008 + -0x238));
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    if (*(long *)((long)register0x00000008 + -0x238) == 0) {
      if (((ulong)plVar8 & 1) == 0) {
LAB_10b8f3664:
        func_0x000107c31084();
        func_0x00010b8fea80();
        puVar3 = &UNK_10f7cc99c;
      }
      else {
LAB_10b8f35fc:
        func_0x000107c31084();
        func_0x00010b8fea80();
        puVar3 = &UNK_10f7cc95c;
      }
      func_0x000107c2793c(puVar3);
      func_0x00010b8fdf54((undefined1 *)((long)register0x00000008 + -0x230));
      func_0x000107c31080((undefined1 *)((long)register0x00000008 + -0x260),plVar8,
                          (undefined1 *)((long)register0x00000008 + -0x230));
      func_0x000107c31060((undefined1 *)((long)register0x00000008 + -0x240),
                          (undefined1 *)((long)register0x00000008 + -0x260));
      func_0x00010b8fe7bc();
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x230);
    }
    else {
      iVar1 = *(int *)(*(long *)((long)register0x00000008 + -0x238) + 0xc);
      if (((ulong)plVar8 & 1) == 0) {
        if (iVar1 == 0) goto LAB_10b8f3664;
        func_0x000107c31084();
        func_0x00010b8fdfd8();
        puVar3 = &UNK_10f7cc97e;
      }
      else {
        if (iVar1 == 0) goto LAB_10b8f35fc;
        func_0x000107c31084();
        func_0x00010b8fdfd8();
        puVar3 = &UNK_10f7cc932;
      }
      func_0x000107c2793c(puVar3);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x260));
      func_0x000107c31080((undefined1 *)((long)register0x00000008 + -0x230),plVar8,
                          (undefined1 *)((long)register0x00000008 + -0x260));
      func_0x000107c31060((undefined1 *)((long)register0x00000008 + -0x240),
                          (undefined1 *)((long)register0x00000008 + -0x230));
      func_0x000107c278f8(*(undefined8 *)((long)register0x00000008 + -0x230));
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x260);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
    FUN_10b9a5e5c((undefined1 *)((long)register0x00000008 + -0x230),
                  (undefined1 *)((long)register0x00000008 + -0x240));
    plVar8 = (long *)param_1[0x15];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              ((undefined1 *)((long)register0x00000008 + -0x278),
               (undefined1 *)((long)register0x00000008 + -0x230));
    (**(code **)(*plVar8 + 0x28))(plVar8,3,(undefined1 *)((long)register0x00000008 + -0x278));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x278));
    unaff_x23 = (long *)((long)register0x00000008 + -0x260);
    func_0x00010b8ead94((undefined1 *)((long)register0x00000008 + -0x260),param_1);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x260);
    if (unaff_x22 != (long *)0x0) {
      plVar8 = plVar6;
      FUN_10b99f74c();
      if ((int)plVar8 != 0) {
        (**(code **)(*unaff_x22 + 0x40))
                  (unaff_x22,3,(undefined1 *)((long)register0x00000008 + -0x240));
      }
      (**(code **)(*unaff_x22 + 0x38))
                (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x238),plVar6);
    }
    func_0x00010b8fe2fc();
    if ((int)param_5 == 0) {
      if (*param_2 != 0) {
        func_0x00010b8c1ec4(*param_2,(undefined1 *)((long)register0x00000008 + -0x240),1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x230));
      plVar8 = *(long **)((long)register0x00000008 + -0x240);
      func_0x000107c278f8(plVar8);
      func_0x00010b8fe650();
      return plVar8;
    }
    func_0x0001080df67c((undefined1 *)((long)register0x00000008 + -0x288),
                        (undefined1 *)((long)register0x00000008 + -0x230));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x260);
    FUN_10bd3f434((undefined1 *)((long)register0x00000008 + -0x260),
                  *(undefined8 *)((long)register0x00000008 + -0x288),
                  *(undefined8 *)((long)register0x00000008 + -0x280),&DAT_10f6842c6);
    in_ZR = *(char *)((long)register0x00000008 + -0x249) == '\0';
    puVar4 = *(undefined1 **)((long)register0x00000008 + -0x260);
    if (-1 < *(char *)((long)register0x00000008 + -0x249)) {
      puVar4 = unaff_x19;
    }
    unaff_x20 = (long *)0x10d0;
    FUN_10bd3f4e0(puVar4,"unknown");
    *(long **)((long)register0x00000008 + -0x2c0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x2b8) = plVar6;
    *(undefined1 **)((long)register0x00000008 + -0x2b0) = param_5;
    *(undefined1 **)((long)register0x00000008 + -0x2a8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x2a0) =
         (undefined1 *)((long)register0x00000008 + -0x1e0);
    *(code **)((long)register0x00000008 + -0x298) = FUN_10b8f37d4;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    func_0x00010b8fdffc(puVar4 + -0x18);
    func_0x00010b8fd3f4();
    func_0x00010b8c2a44((undefined1 *)((long)register0x00000008 + -0x3b8));
    *(undefined1 *)((long)register0x00000008 + -0x3b9) = 0;
    param_2 = (long *)((long)register0x00000008 + 0x308);
    param_3 = (long *)((long)register0x00000008 + -0x3b8);
    param_5 = (undefined1 *)((long)register0x00000008 + -0x3b9);
    plVar8 = plVar6;
    param_4 = unaff_x20;
    FUN_10b8f339c();
    if (((ulong)plVar8 & 1) == 0) {
      param_2 = plVar6;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x3b0));
      *(undefined8 *)((long)register0x00000008 + -0x400) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x3f8) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x3f0) = 0;
      *(undefined8 *)((long)register0x00000008 + -1000) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x3e0) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x3d8) = 0;
      param_3 = (long *)((long)register0x00000008 + -0x400);
      param_4 = (long *)((long)register0x00000008 + -0x3b0);
      func_0x00010b8fea48((undefined1 *)((long)register0x00000008 + -0x3d0));
      FUN_10b9018fc();
      if ((*(byte *)((long)register0x00000008 + -0x3a8) & 1) == 0) {
        (**(code **)(*(long *)((long)register0x00000008 + -0x3b0) + 0x18))
                  ((undefined1 *)((long)register0x00000008 + -0x3b0));
        *(undefined1 *)((long)register0x00000008 + -0x3a8) = 1;
      }
      in_ZR = *(char *)((long)register0x00000008 + -0x3c8) == '\f';
      if ((bool)in_ZR) {
        FUN_10b9a9488((undefined1 *)((long)register0x00000008 + -0x400),
                      (undefined1 *)((long)register0x00000008 + -0x3d0));
        func_0x00010b8fdec4();
        func_0x00010b8fe628();
      }
      else {
        FUN_10b9a9358((undefined1 *)((long)register0x00000008 + -0x408),
                      (undefined1 *)((long)register0x00000008 + -0x3d0));
        func_0x00010b8fe560();
        FUN_10b99f560();
        func_0x00010b8fdec4();
        func_0x00010b8fe628();
        func_0x00010b8fd9e0();
      }
      func_0x00010b8fe56c();
      func_0x00010b8ffdac((undefined1 *)((long)register0x00000008 + -0x3b0));
    }
    param_1 = *(long **)((long)register0x00000008 + -0x3b8);
    func_0x000105276914();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return param_1;
    }
    unaff_x30 = FUN_10b8f339c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x410);
    unaff_x21 = plVar6;
  } while( true );
}



/* Entry: 10b8f37d4; end: 10b8f37db;  */

long * FUN_10b8f37d4(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *unaff_x19;
  long *plVar12;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010b8fdffc(param_1 + -0x18);
    func_0x00010b8fd3f4();
    func_0x00010b8c2a44((undefined1 *)((long)register0x00000008 + -0x128));
    *(undefined1 *)((long)register0x00000008 + -0x129) = 0;
    plVar7 = (long *)(unaff_x19 + 0x568);
    plVar9 = (long *)((long)register0x00000008 + -0x128);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x129);
    plVar2 = unaff_x21;
    plVar4 = param_3;
    FUN_10b8f339c();
    if (((ulong)plVar2 & 1) == 0) {
      plVar7 = unaff_x21;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x120));
      *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x160) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
      *(undefined1 *)((long)register0x00000008 + -0x148) = 0;
      plVar9 = (long *)((long)register0x00000008 + -0x170);
      plVar4 = (long *)((long)register0x00000008 + -0x120);
      func_0x00010b8fea48((undefined1 *)((long)register0x00000008 + -0x140));
      FUN_10b9018fc();
      if ((*(byte *)((long)register0x00000008 + -0x118) & 1) == 0) {
        (**(code **)(*(long *)((long)register0x00000008 + -0x120) + 0x18))
                  ((undefined1 *)((long)register0x00000008 + -0x120));
        *(undefined1 *)((long)register0x00000008 + -0x118) = 1;
      }
      in_ZR = *(char *)((long)register0x00000008 + -0x138) == '\f';
      if ((bool)in_ZR) {
        FUN_10b9a9488((undefined1 *)((long)register0x00000008 + -0x170),
                      (undefined1 *)((long)register0x00000008 + -0x140));
        func_0x00010b8fdec4();
        func_0x00010b8fe628();
      }
      else {
        FUN_10b9a9358((undefined1 *)((long)register0x00000008 + -0x178),
                      (undefined1 *)((long)register0x00000008 + -0x140));
        func_0x00010b8fe560();
        FUN_10b99f560();
        func_0x00010b8fdec4();
        func_0x00010b8fe628();
        func_0x00010b8fd9e0();
      }
      func_0x00010b8fe56c();
      func_0x00010b8ffdac((undefined1 *)((long)register0x00000008 + -0x120));
    }
    plVar2 = *(long **)((long)register0x00000008 + -0x128);
    func_0x000105276914();
    func_0x00010b8fd38c();
    if ((bool)in_ZR) {
      return plVar2;
    }
    ___stack_chk_fail();
    *(long **)((long)register0x00000008 + -0x1c0) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x1b8) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x1b0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x1a8) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x1a0) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x198) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -400) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x188) = FUN_10b8f339c;
    func_0x00010b8fd474();
    plVar11 = plVar4;
    if (*plVar7 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      puVar6 = unaff_x20;
      func_0x00010b8ffd54((undefined1 *)((long)register0x00000008 + -0x2b0),plVar2);
      lVar3 = *plVar7;
      plVar10 = (long *)((long)register0x00000008 + -0x2b0);
      plVar8 = plVar2;
      FUN_10b8e129c();
      *(long *)((long)register0x00000008 + -0x2c0) = lVar3;
      *(long **)((long)register0x00000008 + -0x2b8) = plVar8;
      if ((*(byte *)((long)register0x00000008 + -0x2a8) & 1) == 0) {
        func_0x00010b8fe234();
        plVar12 = (long *)0x0;
        *(undefined1 *)((long)register0x00000008 + -0x2a8) = 1;
        unaff_x19 = unaff_x20;
        unaff_x21 = plVar9;
        unaff_x23 = plVar7;
      }
      else {
        func_0x0001080e07a8((undefined1 *)((long)register0x00000008 + -0x300),plVar2,plVar4);
        func_0x00010b8fe804((undefined1 *)((long)register0x00000008 + -0x2e0));
        *(long **)((long)register0x00000008 + -0x330) = plVar2;
        *(long **)((long)register0x00000008 + -0x328) = (long *)((long)register0x00000008 + -0x300);
        *(undefined8 *)((long)register0x00000008 + -800) = 2;
        *(undefined1 **)((long)register0x00000008 + -0x318) =
             (undefined1 *)((long)register0x00000008 + -0x2b0);
        func_0x00010b8fdb50((undefined1 *)((long)register0x00000008 + -0x330));
        plVar8 = (long *)((long)register0x00000008 + -0x2c0);
        plVar10 = (long *)((long)register0x00000008 + -0x330);
        func_0x00010b8fe100((undefined1 *)((long)register0x00000008 + -0x350));
        if ((*(byte *)((long)register0x00000008 + -0x2a8) & 1) == 0) {
LAB_10b8f34c4:
          func_0x00010b8fe234();
          plVar12 = (long *)0x0;
          *(undefined1 *)((long)register0x00000008 + -0x2a8) = 1;
        }
        else {
          plVar8 = (long *)((long)register0x00000008 + -0x348);
          plVar10 = (long *)((long)register0x00000008 + -0x2b0);
          (**(code **)(*plVar2 + 0x150))();
          if ((*(byte *)((long)register0x00000008 + -0x2a8) & 1) == 0) goto LAB_10b8f34c4;
          if ((int)plVar2 == 1) {
            plVar12 = (long *)0x1;
            in_ZR = 1;
          }
          else {
            in_ZR = (int)plVar2 == 2;
            if ((bool)in_ZR) {
              plVar12 = (long *)0x0;
              *unaff_x20 = 1;
            }
            else {
              plVar12 = (long *)0x0;
            }
          }
        }
        func_0x0001080e0bc0((undefined1 *)((long)register0x00000008 + -0x350));
        do {
          func_0x0001080e0bc0((undefined1 *)((long)register0x00000008 + -0x2e0));
          func_0x00010b8fdfcc();
          unaff_x19 = (undefined1 *)0x20;
          unaff_x21 = (long *)((long)register0x00000008 + -0x300);
          unaff_x23 = (long *)((long)register0x00000008 + -0x300);
        } while (!(bool)in_ZR);
      }
      plVar2 = (long *)((long)register0x00000008 + -0x2b0);
      func_0x00010b8ffdac();
      plVar7 = plVar8;
      plVar9 = plVar10;
      unaff_x20 = puVar6;
      unaff_x22 = plVar4;
    }
    func_0x00010b8fd3bc(*(undefined8 *)((long)register0x00000008 + -0x1c8));
    if ((bool)in_ZR) {
      return plVar12;
    }
    ___stack_chk_fail();
    *(long **)((long)register0x00000008 + -0x390) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x388) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x380) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x378) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x370) = plVar12;
    *(undefined1 **)((long)register0x00000008 + -0x368) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x360) =
         (undefined1 *)((long)register0x00000008 + -400);
    *(undefined8 *)((long)register0x00000008 + -0x358) = 0x10b8f3538;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x360);
    *(undefined8 *)((long)register0x00000008 + -0x3b8) = 0;
    unaff_x24 = plVar2;
    (**(code **)(*plVar2 + 0xd0))();
    if (*plVar7 == 0) {
      plVar4 = (long *)*unaff_x24;
      if (plVar4 != (long *)0x0) {
LAB_10b8f35c0:
        lVar3 = *plVar4;
LAB_10b8f35c4:
        (**(code **)(lVar3 + 0xe8))();
      }
    }
    else {
      func_0x000107c31068((undefined1 *)((long)register0x00000008 + -0x3b8),*plVar7 + 0x38);
      plVar4 = (long *)*unaff_x24;
      if (plVar4 != (long *)0x0) {
        if (*(long *)((long)register0x00000008 + -0x3b8) == 0) goto LAB_10b8f35c0;
        lVar3 = *plVar4;
        if (*(int *)(*(long *)((long)register0x00000008 + -0x3b8) + 0xc) == 0) goto LAB_10b8f35c4;
        (**(code **)(lVar3 + 0xe0))(plVar4,(undefined1 *)((long)register0x00000008 + -0x3b8));
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x3c0) = 0;
    if (*(long *)((long)register0x00000008 + -0x3b8) == 0) {
      if (((ulong)plVar11 & 1) == 0) {
LAB_10b8f3664:
        func_0x000107c31084();
        func_0x00010b8fea80();
        puVar5 = &UNK_10f7cc99c;
      }
      else {
LAB_10b8f35fc:
        func_0x000107c31084();
        func_0x00010b8fea80();
        puVar5 = &UNK_10f7cc95c;
      }
      func_0x000107c2793c(puVar5);
      func_0x00010b8fdf54((undefined1 *)((long)register0x00000008 + -0x3b0));
      func_0x000107c31080((undefined1 *)((long)register0x00000008 + -0x3e0),plVar11,
                          (undefined1 *)((long)register0x00000008 + -0x3b0));
      func_0x000107c31060((undefined1 *)((long)register0x00000008 + -0x3c0),
                          (undefined1 *)((long)register0x00000008 + -0x3e0));
      func_0x00010b8fe7bc();
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x3b0);
    }
    else {
      iVar1 = *(int *)(*(long *)((long)register0x00000008 + -0x3b8) + 0xc);
      if (((ulong)plVar11 & 1) == 0) {
        if (iVar1 == 0) goto LAB_10b8f3664;
        func_0x000107c31084();
        func_0x00010b8fdfd8();
        puVar5 = &UNK_10f7cc97e;
      }
      else {
        if (iVar1 == 0) goto LAB_10b8f35fc;
        func_0x000107c31084();
        func_0x00010b8fdfd8();
        puVar5 = &UNK_10f7cc932;
      }
      func_0x000107c2793c(puVar5);
      func_0x000107c3173c((undefined1 *)((long)register0x00000008 + -0x3e0));
      func_0x000107c31080((undefined1 *)((long)register0x00000008 + -0x3b0),plVar11,
                          (undefined1 *)((long)register0x00000008 + -0x3e0));
      func_0x000107c31060((undefined1 *)((long)register0x00000008 + -0x3c0),
                          (undefined1 *)((long)register0x00000008 + -0x3b0));
      func_0x000107c278f8(*(undefined8 *)((long)register0x00000008 + -0x3b0));
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x3e0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
    FUN_10b9a5e5c((undefined1 *)((long)register0x00000008 + -0x3b0),
                  (undefined1 *)((long)register0x00000008 + -0x3c0));
    plVar4 = (long *)plVar2[0x15];
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              ((undefined1 *)((long)register0x00000008 + -0x3f8),
               (undefined1 *)((long)register0x00000008 + -0x3b0));
    (**(code **)(*plVar4 + 0x28))(plVar4,3,(undefined1 *)((long)register0x00000008 + -0x3f8));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)register0x00000008 + -0x3f8));
    unaff_x23 = (long *)((long)register0x00000008 + -0x3e0);
    func_0x00010b8ead94((undefined1 *)((long)register0x00000008 + -0x3e0),plVar2);
    unaff_x22 = *(long **)((long)register0x00000008 + -0x3e0);
    if (unaff_x22 != (long *)0x0) {
      plVar4 = plVar9;
      FUN_10b99f74c();
      if ((int)plVar4 != 0) {
        (**(code **)(*unaff_x22 + 0x40))
                  (unaff_x22,3,(undefined1 *)((long)register0x00000008 + -0x3c0));
      }
      (**(code **)(*unaff_x22 + 0x38))
                (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x3b8),plVar9);
    }
    func_0x00010b8fe2fc();
    if ((int)unaff_x20 == 0) {
      if (*plVar7 != 0) {
        func_0x00010b8c1ec4(*plVar7,(undefined1 *)((long)register0x00000008 + -0x3c0),1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((undefined1 *)((long)register0x00000008 + -0x3b0));
      plVar7 = *(long **)((long)register0x00000008 + -0x3c0);
      func_0x000107c278f8(plVar7);
      func_0x00010b8fe650();
      return plVar7;
    }
    func_0x0001080df67c((undefined1 *)((long)register0x00000008 + -0x408),
                        (undefined1 *)((long)register0x00000008 + -0x3b0));
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x3e0);
    FUN_10bd3f434((undefined1 *)((long)register0x00000008 + -0x3e0),
                  *(undefined8 *)((long)register0x00000008 + -0x408),
                  *(undefined8 *)((long)register0x00000008 + -0x400),&DAT_10f6842c6);
    in_ZR = *(char *)((long)register0x00000008 + -0x3c9) == '\0';
    param_1 = *(undefined1 **)((long)register0x00000008 + -0x3e0);
    if (-1 < *(char *)((long)register0x00000008 + -0x3c9)) {
      param_1 = unaff_x19;
    }
    param_3 = (long *)0x10d0;
    unaff_x30 = FUN_10b8f37d4;
    FUN_10bd3f4e0(param_1,"unknown");
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x410);
    unaff_x21 = plVar9;
  } while( true );
}



/* Entry: 10b8f37dc; end: 10b8f38c3;  */

void FUN_10b8f37dc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uStack_58;
  long lStack_50;
  long alStack_48 [3];
  
  if (*(long *)(param_2 + 0x80) == 0) {
    *param_1 = 0;
    return;
  }
  if ((*(byte *)(param_2 + 0x44d) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 1099);
    func_0x00010b8fe6e0();
    if ((bVar1 & 1) == 0) {
      if (alStack_48[0] != 0) {
        iVar2 = (int)*(undefined8 *)(param_2 + 0x360);
        func_0x00010b8fdad4();
        if (iVar2 != 0) {
          func_0x00010b8c2a44(&lStack_50);
          if ((((lStack_50 == 0) || (*(long *)(lStack_50 + 0x50) == 0)) ||
              (*(int *)(*(long *)(lStack_50 + 0x50) + 0xc) == 0)) ||
             (func_0x00010b8fe888(), uStack_58 == 0)) {
            func_0x000105276914(lStack_50);
          }
          else {
            uVar3 = uStack_58;
            FUN_10b94d2cc();
            func_0x00010b8fb1f8(uStack_58);
            func_0x000105276914(lStack_50);
            if ((uVar3 & 1) != 0) goto LAB_10b8f3828;
          }
        }
      }
      *param_1 = 0;
      goto LAB_10b8f38ac;
    }
  }
  else {
    func_0x00010b8fe6e0();
  }
LAB_10b8f3828:
  func_0x00010b8fd928();
  FUN_10b8f38c8();
LAB_10b8f38ac:
  func_0x00010b8fdebc(alStack_48);
  return;
}



/* Entry: 10b8f38c4; end: 10b8f38c7;  */

void FUN_10b8f38c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fe1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x360) + 0x40))();
  return;
}



/* Entry: 10b8f38c8; end: 10b8f39db;  */

void FUN_10b8f38c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w10;
  undefined8 *unaff_x19;
  long unaff_x21;
  ulong uStack_218;
  long lStack_210;
  long alStack_208 [3];
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1c0 [16];
  undefined1 uStack_1b0;
  undefined1 auStack_150 [32];
  long lStack_130;
  byte bStack_128;
  undefined8 uStack_48;
  
  func_0x00010b8fe2d8();
  func_0x00010b8fd408();
  uStack_48 = extraout_x8;
  func_0x00010b8ffd54(&lStack_130,param_3);
  auStack_1c0[0] = 0;
  uStack_1b0 = 0;
  func_0x00010b8dbdd8(auStack_150,*(undefined8 *)(unaff_x21 + 0x80),"",0,auStack_1c0,&lStack_130);
  if ((bStack_128 & 1) == 0) {
    (**(code **)(lStack_130 + 0x18))(&lStack_130);
    uVar6 = 0;
    bStack_128 = 1;
  }
  else {
    FUN_10b8e5870(auStack_1c0,unaff_x21 + 0x460);
    uVar6 = 0x60;
    __Znwm();
    FUN_10b8e58fc();
    do {
      func_0x00010b8fd7f4();
    } while (extraout_w10 != 0);
    do {
      in_ZR = *extraout_x8_00 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar3) {
        *extraout_x8_00 = *extraout_x8_00 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)in_ZR) {
      func_0x00010b8fd8d8();
    }
    func_0x00010b8e58cc(auStack_1c0);
  }
  *unaff_x19 = uVar6;
  func_0x0001080e0bc0(auStack_150);
  plVar7 = &lStack_130;
  func_0x00010b8ffdac();
  func_0x00010b8fd3bc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (plVar7[0xd] == 0) {
    *extraout_x8_01 = 0;
    return;
  }
  puStack_1f0 = auStack_150;
  uStack_1e8 = uVar6;
  if ((*(byte *)((long)plVar7 + 0x435) & 1) == 0) {
    bVar1 = *(byte *)((long)plVar7 + 0x433);
    func_0x00010b8fe6e0();
    if ((bVar1 & 1) == 0) {
      if (alStack_208[0] != 0) {
        iVar4 = (int)plVar7[0x69];
        func_0x00010b8fdad4();
        if (iVar4 != 0) {
          func_0x00010b8c2a44(&lStack_210);
          if ((((lStack_210 == 0) || (*(long *)(lStack_210 + 0x50) == 0)) ||
              (*(int *)(*(long *)(lStack_210 + 0x50) + 0xc) == 0)) ||
             (func_0x00010b8fe888(), uStack_218 == 0)) {
            func_0x000105276914(lStack_210);
          }
          else {
            uVar5 = uStack_218;
            FUN_10b94d2cc();
            func_0x00010b8fb1f8(uStack_218);
            func_0x000105276914(lStack_210);
            if ((uVar5 & 1) != 0) goto LAB_10b8f3828;
          }
        }
      }
      *extraout_x8_01 = 0;
      goto LAB_10b8f38ac;
    }
  }
  else {
    func_0x00010b8fe6e0();
  }
LAB_10b8f3828:
  func_0x00010b8fd928();
  FUN_10b8f38c8();
LAB_10b8f38ac:
  func_0x00010b8fdebc(alStack_208);
  return;
}



/* Entry: 10b8f39dc; end: 10b8f39e3;  */

void FUN_10b8f39dc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uStack_58;
  long lStack_50;
  long alStack_48 [3];
  
  if (*(long *)(param_2 + 0x68) == 0) {
    *param_1 = 0;
    return;
  }
  if ((*(byte *)(param_2 + 0x435) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 0x433);
    func_0x00010b8fe6e0();
    if ((bVar1 & 1) == 0) {
      if (alStack_48[0] != 0) {
        iVar2 = (int)*(undefined8 *)(param_2 + 0x348);
        func_0x00010b8fdad4();
        if (iVar2 != 0) {
          func_0x00010b8c2a44(&lStack_50);
          if ((((lStack_50 == 0) || (*(long *)(lStack_50 + 0x50) == 0)) ||
              (*(int *)(*(long *)(lStack_50 + 0x50) + 0xc) == 0)) ||
             (func_0x00010b8fe888(), uStack_58 == 0)) {
            func_0x000105276914(lStack_50);
          }
          else {
            uVar3 = uStack_58;
            FUN_10b94d2cc();
            func_0x00010b8fb1f8(uStack_58);
            func_0x000105276914(lStack_50);
            if ((uVar3 & 1) != 0) goto LAB_10b8f3828;
          }
        }
      }
      *param_1 = 0;
      goto LAB_10b8f38ac;
    }
  }
  else {
    func_0x00010b8fe6e0();
  }
LAB_10b8f3828:
  func_0x00010b8fd928();
  FUN_10b8f38c8();
LAB_10b8f38ac:
  func_0x00010b8fdebc(alStack_48);
  return;
}



/* Entry: 10b8f39e4; end: 10b8f3a8f;  */

void FUN_10b8f39e4(undefined8 param_1,undefined ***param_2,undefined **param_3,undefined ***param_4)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  uint uVar7;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined **ppuVar8;
  undefined8 unaff_x21;
  undefined **ppuVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 *in_stack_00000010;
  code *in_stack_00000018;
  undefined1 auStack_88 [7];
  undefined1 uStack_81;
  undefined **ppuStack_80;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined ***pppuStack_60;
  undefined **ppuStack_50;
  undefined ***pppuStack_48;
  
  func_0x00010b8fd3e0();
  uStack_81 = SUB81(param_3,0);
  FUN_10b98dc84(&ppuStack_50,param_2);
  uVar1 = ppuStack_50 == (undefined **)0x1;
  if ((bool)uVar1) {
    *unaff_x19 = 1;
    ppuStack_80 = (undefined **)FUN_10b8f91ec;
    _auStack_78 = &PTR_FUN_110d73880;
    ppuStack_70 = (undefined **)&uStack_81;
    param_2 = &ppuStack_80;
    uStack_68 = param_1;
    pppuStack_60 = &ppuStack_50;
    FUN_10b8f1dfc(param_1);
    func_0x00010b8fd804(_auStack_78);
  }
  else {
    *unaff_x19 = 2;
    unaff_x19[1] = pppuStack_48;
    pppuStack_48 = (undefined ***)0x0;
  }
  pppuVar5 = &ppuStack_50;
  FUN_10b8faff8();
  func_0x00010b8fd38c();
  if ((bool)uVar1) {
    return;
  }
  pcVar11 = FUN_10b8f3a90;
  ___stack_chk_fail();
  puVar10 = (undefined8 *)&stack0xfffffffffffffff0;
  while( true ) {
    func_0x00010b8feb90();
    pppuVar2 = pppuVar5;
    pppuVar6 = param_4;
    in_stack_00000010 = puVar10;
    in_stack_00000018 = pcVar11;
    func_0x00010b8fd474();
    _auStack_78 = (undefined **)((ulong)_auStack_78 & 0xffffff);
    ppuStack_80 = (undefined **)0x0;
    ppuStack_50 = &PTR_FUN_110d738a0;
    func_0x00010b8fdd04();
    *pppuVar2 = (undefined **)(auStack_78 + 3);
    pppuVar2[1] = (undefined **)pppuVar5;
    pppuVar2[2] = param_3;
    pppuVar2[3] = (undefined **)param_4;
    pppuVar2[4] = (undefined **)param_2;
    pppuVar2[5] = (undefined **)(auStack_78 + 4);
    param_2 = &ppuStack_80;
    ppuVar9 = (undefined **)&stack0xffffffffffffffa8;
    pppuVar3 = pppuVar5;
    pppuStack_48 = pppuVar2;
    FUN_10b8e3408(pppuVar5);
    func_0x00010b8fd604(ppuStack_50);
    func_0x00010b8fe030();
    if (((ulong)_auStack_78 & 0x1000000) == 0) {
      uVar1 = *(char *)((long)pppuVar5 + 0x369) == '\0';
      uVar7 = 100;
      if ((bool)uVar1) {
        uVar7 = 0;
      }
      ppuVar9 = (undefined **)(ulong)uVar7;
      ppuVar8 = param_4[1];
      func_0x000107c31084();
      func_0x00010b8fe15c();
      ppuStack_70 = param_3;
      uStack_68 = extraout_x8;
      func_0x000107c2793c(&UNK_10f7cc868);
      pppuVar6 = &ppuStack_70;
      func_0x00010b8fdf54(&stack0xffffffffffffffa8);
      func_0x000107c31080(auStack_88,pppuVar3,&stack0xffffffffffffffa8);
      FUN_10b99f6a4(&ppuStack_70,auStack_88);
      param_2 = &ppuStack_70;
      FUN_10b99ff08(ppuVar8);
      func_0x00010b8fe620();
      func_0x00010b8fd9e0();
      func_0x00010b8fe0f8();
    }
    param_4 = pppuVar6;
    param_3 = ppuVar9;
    uVar4 = (ulong)_auStack_78 >> 0x20;
    func_0x00010b8fd3bc(unaff_x21);
    if ((bool)uVar1) break;
    pcVar11 = FUN_10b8f3bc4;
    ___stack_chk_fail();
    pppuVar5 = (undefined ***)(uVar4 - 0x20);
    puVar10 = &stack0x00000010;
  }
  return;
}


