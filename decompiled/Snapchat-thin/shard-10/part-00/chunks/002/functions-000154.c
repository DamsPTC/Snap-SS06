/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10756d590; end: 10756d5cf;  */

undefined8 * FUN_10756d590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be0d0;
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10756d5d0; end: 10756d5d3;  */

undefined8 * FUN_10756d5d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be0d0;
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10756d5d4; end: 10756d7ff;  */

double * FUN_10756d5d4(double *param_1,long param_2,double *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 uVar2;
  double *pdVar3;
  double *pdVar4;
  long lVar5;
  undefined8 extraout_x8;
  double dVar6;
  double dVar7;
  double adStack_190 [15];
  int iStack_118;
  double adStack_110 [15];
  int iStack_98;
  double adStack_90 [7];
  undefined8 uStack_58;
  
  pdVar4 = adStack_190;
  pdVar3 = adStack_190;
  lVar5 = param_2;
  func_0x00010756dedc();
  uStack_58 = extraout_x8;
  func_0x000107753050(adStack_110,*(undefined8 *)(lVar5 + 0x48));
  func_0x000107753050(adStack_190,*(undefined8 *)(param_2 + 0x58),param_3,param_4);
  uVar2 = iStack_98 == 1;
  if ((bool)uVar2) {
    uVar2 = iStack_118 == 1;
    if ((bool)uVar2) {
      pdVar4 = adStack_110;
      func_0x00010727f7dc();
      func_0x0001072cb4bc();
      dVar7 = *pdVar4;
      uVar2 = dVar7 == (double)(long)dVar7;
      if ((bool)uVar2) {
        func_0x00010727f7dc();
        iVar1 = *(int *)(pdVar3 + 0xd);
        pdVar4 = pdVar3;
        if (iVar1 == 0) goto LAB_10756d65c;
        if (iVar1 != 1) {
          uVar2 = 1;
          if (iVar1 != 2) {
            uVar2 = iVar1 == 3;
            if ((bool)uVar2) {
              param_1 = pdVar3 + 1;
              func_0x000107264c5c();
              func_0x00010756df04();
              goto LAB_10756d690;
            }
            uVar2 = iVar1 == 4;
            if ((!(bool)uVar2) && (uVar2 = iVar1 == 5, !(bool)uVar2)) {
              uVar2 = iVar1 == 6;
              if ((bool)uVar2) {
                func_0x00010775c688(adStack_90,pdVar3 + 1);
                func_0x000107264c5c(adStack_90);
                func_0x00010756df04();
                param_1 = adStack_90;
                func_0x000104c2f714();
                goto LAB_10756d690;
              }
              uVar2 = iVar1 == 7;
              if ((!(bool)uVar2) && (uVar2 = 0, iVar1 == 8)) {
                lVar5 = *(long *)pdVar3[1];
                dVar6 = (double)(ulong)((((long *)pdVar3[1])[1] - lVar5) / 0x70);
                uVar2 = dVar7 == dVar6;
                if (dVar7 < dVar6) {
                  uVar2 = dVar7 == 0.0;
                  if (dVar7 < 0.0) {
                    dVar7 = dVar7 + dVar6;
                    uVar2 = dVar7 == 0.0;
                    if (dVar7 < 0.0) goto LAB_10756d65c;
                  }
                  param_3 = (double *)(lVar5 + (long)dVar7 * 0x70);
                  param_1 = param_1 + 1;
                  FUN_1074d286c();
                  goto LAB_10756d690;
                }
              }
            }
          }
          goto LAB_10756d65c;
        }
        *(undefined4 *)(param_1 + 0xe) = 0;
        uVar2 = 1;
      }
      else {
LAB_10756d65c:
        *(undefined4 *)(param_1 + 0xe) = 0;
        pdVar3 = pdVar4;
      }
      *(undefined4 *)(param_1 + 0xf) = 1;
      param_1 = pdVar3;
      goto LAB_10756d690;
    }
    func_0x00010756dd74();
    param_3 = pdVar4;
  }
  else {
    param_3 = adStack_110;
    func_0x00010756dd74();
  }
  FUN_10756dd30();
LAB_10756d690:
  func_0x00010756def4(adStack_190);
  func_0x00010756def4(adStack_110);
  func_0x00010756dec8(uStack_58);
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  pdVar4 = adStack_90;
  func_0x000104c2f714();
  func_0x00010756def4(adStack_190);
  func_0x00010756def4(adStack_110);
  func_0x00010756deec();
  FUN_10745df58(param_3,pdVar4[9]);
  pdVar3 = (double *)param_3[3];
  if (pdVar3 == (double *)0x0) {
    func_0x000104bfeb48(0,pdVar4[0xb]);
    pdVar4 = (double *)pdVar3[3];
    if (pdVar4 == pdVar3) {
      lVar5 = 0x20;
    }
    else {
      if (pdVar4 == (double *)0x0) {
        return pdVar3;
      }
      lVar5 = 0x28;
    }
    (**(code **)((long)*pdVar4 + lVar5))();
    return pdVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((long)*pdVar3 + 0x30))();
  return pdVar3;
}



/* Entry: 10756d800; end: 10756d833;  */

long * FUN_10756d800(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_10745df58(param_2,*(undefined8 *)(param_1 + 0x48));
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x58));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10756d834; end: 10756dc07;  */

void FUN_10756d834(long *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 uStack_110;
  undefined1 auStack_108 [8];
  undefined4 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  uint5 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  uint5 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  puVar6 = &uStack_140;
  plVar4 = param_2;
  func_0x00010756dedc();
  plVar7 = plVar4 + 1;
  plVar5 = plVar7;
  uStack_58 = extraout_x8;
  (**(code **)(*plVar4 + 0x20))();
  uVar3 = plVar5 == (long *)0x3;
  if ((bool)uVar3) {
    (**(code **)(*param_2 + 0x28))(&lStack_90,plVar7,1);
    uStack_100 = 1;
    uStack_f8 = 1;
    uVar2 = (ulong)_uStack_70 >> 0x28;
    uVar1 = (uint)_uStack_70;
    uStack_70 = (uint5)(uVar1 & 0xffffff00);
    _uStack_70 = CONCAT35((int3)uVar2,uStack_70);
    func_0x00010777067c(&uStack_f0,param_3,&lStack_90,1,param_4,auStack_108,&uStack_70);
    func_0x0001072c9854(auStack_108);
    func_0x0001072f5f6c(&lStack_90);
    (**(code **)(*param_2 + 0x28))(&uStack_70,plVar7,2);
    auStack_120[0] = 0;
    uStack_110 = 0;
    uVar2 = (ulong)_uStack_a0 >> 0x28;
    uVar1 = (uint)_uStack_a0;
    uStack_a0 = (uint5)(uVar1 & 0xffffff00);
    _uStack_a0 = CONCAT35((int3)uVar2,uStack_a0);
    func_0x00010777067c(&lStack_90,param_3,&uStack_70,2,param_4,auStack_120,&uStack_a0);
    func_0x0001072c9854(auStack_120);
    func_0x0001072f5f6c(&uStack_70);
    if ((bStack_80 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      func_0x0001072c9ff4(auStack_130,lStack_90 + 0x10);
      uVar3 = cStack_e0 == '\x01';
      if (((bool)uVar3) && ((bStack_80 & 1) != 0)) {
        uVar3 = *(char *)((long)param_3 + 0x51) == '\x01';
        if ((bool)uVar3) {
          param_3 = (undefined8 *)0x80;
          __Znwm();
          uStack_98 = uStack_88;
          _uStack_a0 = lStack_90;
          uStack_68 = uStack_e8;
          _uStack_70 = uStack_f0;
          param_3[1] = 0;
          param_3[2] = 0;
          *param_3 = &PTR_FUN_1109be158;
          plVar7 = param_3 + 3;
          uStack_f0 = 0;
          uStack_e8 = 0;
          lStack_90 = 0;
          uStack_88 = 0;
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          FUN_10756d474(plVar7,&uStack_70,&uStack_a0);
          func_0x00010756df14();
          func_0x00010756defc();
          func_0x0001002a8234(param_3 + 8,param_4 + 0x40);
          func_0x0001072c9b9c(&uStack_c0);
          func_0x0001072c9b9c(&uStack_b0);
          *param_1 = (long)plVar7;
          param_1[1] = (long)param_3;
          uStack_140 = 0;
          uStack_138 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
        }
        else {
          puVar6 = (undefined8 *)0x80;
          __Znwm();
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = &PTR_FUN_1109be158;
          param_3 = puVar6 + 3;
          uStack_68 = uStack_e8;
          _uStack_70 = uStack_f0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_98 = uStack_88;
          _uStack_a0 = lStack_90;
          lStack_90 = 0;
          uStack_88 = 0;
          FUN_10756d474(param_3,&uStack_70,&uStack_a0);
          func_0x00010756df14();
          func_0x00010756defc();
          *param_1 = (long)param_3;
          param_1[1] = (long)puVar6;
          uStack_b0 = 0;
          uStack_a8 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          puVar6 = &uStack_b0;
        }
        FUN_10756de9c(puVar6);
      }
      else {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      func_0x00010756df1c();
    }
    func_0x0001072c95d0(&lStack_90);
    func_0x0001072c95d0(&uStack_f0);
  }
  else {
    func_0x000107878fec(&lStack_90,(long)plVar5 + -1);
    func_0x0001004c3cd0(&uStack_f0,&UNK_10f417be2,&lStack_90);
    func_0x00010048a6c8(auStack_d8,&uStack_f0,&UNK_10f417b93);
    FUN_10756a668(param_3,auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_90);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  func_0x00010756dec8(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_10756d590(plVar7);
  func_0x0001072c9b9c(&uStack_c0);
  func_0x0001072c9b9c(&uStack_b0);
  __ZNSt3__119__shared_weak_countD2Ev(param_3);
  __ZdlPv();
  func_0x00010756df1c();
  func_0x0001072c95d0(&lStack_90);
  func_0x0001072c95d0(&uStack_f0);
  func_0x00010756deec();
  FUN_10756d590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756dc08; end: 10756dc1b;  */

void FUN_10756dc08(void)

{
  FUN_10756d590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756dc1c; end: 10756dc7f;  */

long * FUN_10756dc1c(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(int *)(param_2 + 8) == 3) {
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010756dc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x58));
      return plVar1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10756dc80; end: 10756dce7;  */

long * FUN_10756dc80(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  undefined1 *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long lStack_120;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined1 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ***pppuStack_f8;
  long lStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long alStack_a0 [14];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar3 = alStack_a0;
  plVar4 = alStack_a0;
  func_0x00010756dedc(param_1);
  alStack_a0[0]._0_1_ = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  FUN_1074d1ee8();
  func_0x000107296ad0();
  func_0x00010756dec8(uStack_28);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x00010756deec();
  pcStack_a8 = FUN_10756dce8;
  plVar3 = plVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001074d3a84();
  (**(code **)(*plVar3 + 0x40))(&ppuStack_110);
  pppuVar1 = &ppuStack_110;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_110);
  lStack_120 = 0;
  ppuStack_110 = &PTR_FUN_1109b53e8;
  ppppuStack_100 = &pppuStack_118;
  pppuStack_118 = pppuVar1;
  puStack_108 = (undefined1 *)&lStack_120;
  pppuStack_f8 = &ppuStack_110;
  func_0x0001074d4398(*(undefined8 *)(*plVar4 + 0x10));
  pppuVar2 = &ppuStack_110;
  FUN_10745df78(pppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    uVar5 = (long)pppuVar1 * 0x1000 + ((ulong)pppuVar1 >> 4) + lStack_120 + -0x61c8864680b583eb ^
            (ulong)pppuVar1;
    return (long *)((long)pppuStack_118 + (uVar5 >> 4) + uVar5 * 0x1000 + -0x61c8864680b583eb ^
                   uVar5);
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_128 = FUN_1074d25b4;
  puStack_138 = (undefined1 *)0x0;
  ppuStack_130 = &puStack_b0;
  func_0x0001073f26dc(&puStack_138,pppuVar2);
  return (long *)puStack_138;
}



/* Entry: 10756dce8; end: 10756dcfb;  */

ulong FUN_10756dce8(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 10756dcfc; end: 10756dd2f;  */

undefined8 FUN_10756dcfc(undefined8 *param_1)

{
  func_0x00010756dd14();
  return *param_1;
}



/* Entry: 10756dd30; end: 10756dd5b;  */

long FUN_10756dd30(long param_1)

{
  FUN_10756dd5c(param_1 + 8);
  return param_1;
}



/* Entry: 10756dd5c; end: 10756dd8f;  */

void FUN_10756dd5c(long param_1)

{
  func_0x000104c2fe00();
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



/* Entry: 10756dd90; end: 10756de47;  */

void FUN_10756dd90(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  ulong auStack_78 [3];
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x00010756dedc();
  uVar1 = param_4 == param_3;
  uStack_28 = extraout_x8;
  if (param_4 < param_3) {
    if (param_4 < 0) {
      param_4 = param_4 + param_3;
      uVar1 = param_4 == 0;
      if (param_4 < 0) goto LAB_10756de04;
    }
    auStack_78[1] = 0;
    auStack_78[2] = 0x100000000000000;
    auStack_78[0] = (ulong)*(byte *)(param_2 + param_4);
    func_0x0001072625b4(auStack_60,auStack_78);
    FUN_10756de48(param_1 + 8,auStack_60);
    func_0x000104c2f714(auStack_60);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  }
  else {
LAB_10756de04:
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  func_0x00010756dec8(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_60);
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010756deec();
  func_0x000107277488();
  *(undefined4 *)(puVar2 + 0xe) = 1;
  return;
}



/* Entry: 10756de48; end: 10756de63;  */

void FUN_10756de48(long param_1)

{
  func_0x000107277488();
  *(undefined4 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10756de64; end: 10756de67;  */

void FUN_10756de64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be158;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10756de68; end: 10756de7b;  */

void FUN_10756de68(void)

{
  func_0x00010756de8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756de7c; end: 10756de9b;  */

void FUN_10756de7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010756de84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10756de9c; end: 10756dec7;  */

long FUN_10756de9c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10756dec8; end: 10756df23;  */

void FUN_10756dec8(void)

{
  return;
}



/* Entry: 10756df24; end: 10756dff3;  */

void FUN_10756df24(char *param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  char acStack_c8 [120];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010756e770();
  func_0x00010756e5b8();
  plVar2 = (long *)(param_1 + 0x50);
  if ((*(ulong *)(param_1 + 0x48) & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
  uVar3 = uVar1 << 3;
  uStack_48 = extraout_x8_00;
  do {
    if (uVar1 == 0) {
      *(undefined1 *)(extraout_x8 + 0x10) = 0;
      func_0x00010756e764(1);
LAB_10756dfc8:
      func_0x00010756e5a4(uStack_48);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010756e6b0();
        uVar1 = (*(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe) << 3;
        uVar3 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
        while (uVar3 != 0) {
          func_0x00010756e744();
          uVar1 = uVar1 - 0x10;
          uVar3 = uVar1;
        }
        return;
      }
      return;
    }
    param_1 = (char *)*plVar2;
    func_0x00010756e6ec();
    in_ZR = iStack_50 == 1;
    if (!(bool)in_ZR) {
      func_0x00010756e738();
LAB_10756dfc4:
      func_0x00010756e61c();
      goto LAB_10756dfc8;
    }
    param_1 = acStack_c8;
    FUN_1073405dc();
    FUN_10756e584();
    in_ZR = *param_1 == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)(extraout_x8 + 0x10) = 1;
      func_0x00010756e764();
      goto LAB_10756dfc4;
    }
    func_0x00010756e61c();
    uVar3 = uVar3 - 0x10;
    plVar2 = plVar2 + 2;
    uVar1 = uVar3;
  } while( true );
}



/* Entry: 10756dff4; end: 10756e037;  */

void FUN_10756dff4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
  uVar2 = uVar1 << 3;
  while (uVar1 != 0) {
    func_0x00010756e744();
    uVar2 = uVar2 - 0x10;
    uVar1 = uVar2;
  }
  return;
}



/* Entry: 10756e038; end: 10756e04f;  */

undefined1 FUN_10756e038(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_2 + 8) != 0xf) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((*(ulong *)(param_2 + 0x48) ^ uVar2) < 2) {
    plVar5 = (long *)(param_1 + 0x50);
    plVar3 = (long *)*plVar5;
    plVar6 = plVar5;
    if ((uVar2 & 1) != 0) {
      plVar6 = plVar3;
    }
    puVar7 = (undefined8 *)(param_2 + 0x50);
    if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
      puVar7 = *(undefined8 **)(param_2 + 0x50);
    }
    while( true ) {
      plVar1 = plVar5;
      if ((uVar2 & 1) != 0) {
        plVar1 = plVar3;
      }
      uVar4 = 1;
      if (plVar6 == plVar1 + (uVar2 & 0xfffffffffffffffe)) break;
      plVar3 = (long *)*plVar6;
      (**(code **)(*plVar3 + 0x18))(plVar3,*puVar7);
      if ((int)plVar3 == 0) {
        return 0;
      }
      uVar2 = *(ulong *)(param_1 + 0x48);
      plVar3 = *(long **)(param_1 + 0x50);
      plVar6 = plVar6 + 2;
      puVar7 = puVar7 + 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10756e050; end: 10756e0c3;  */

void FUN_10756e050(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte abStack_1f8 [120];
  int iStack_180;
  undefined8 uStack_178;
  undefined8 uStack_38;
  
  func_0x00010756e5b8(param_1);
  func_0x00010756e624();
  func_0x00010756e6a0();
  lVar4 = 0x78;
  do {
    func_0x000107296ad0();
    lVar4 = lVar4 + -0x78;
    bVar1 = lVar4 == -0x78;
  } while (!bVar1);
  func_0x00010756e5a4(uStack_38);
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = 0x78;
  do {
    pbVar3 = (byte *)(unaff_x20 + lVar4);
    func_0x000107296ad0();
    lVar4 = lVar4 + -0x78;
    uVar2 = lVar4 == -0x78;
  } while (!(bool)uVar2);
  func_0x00010756e6b0();
  func_0x00010756e770();
  func_0x00010756e5b8();
  pbVar6 = pbVar3 + 0x50;
  if ((*(ulong *)(pbVar3 + 0x48) & 1) != 0) {
    pbVar6 = *(byte **)pbVar6;
  }
  uVar5 = *(ulong *)(pbVar3 + 0x48) & 0x1ffffffffffffffe;
  uVar7 = uVar5 << 3;
  uStack_178 = extraout_x8_00;
  do {
    if (uVar5 == 0) {
      *(undefined1 *)(extraout_x8 + 0x10) = 1;
      func_0x00010756e764();
LAB_10756e168:
      func_0x00010756e5a4(uStack_178);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x00010756e6b0();
        uVar5 = (*(ulong *)(pbVar3 + 0x48) & 0x1ffffffffffffffe) << 3;
        uVar7 = *(ulong *)(pbVar3 + 0x48) & 0x1ffffffffffffffe;
        while (uVar7 != 0) {
          func_0x00010756e744();
          uVar5 = uVar5 - 0x10;
          uVar7 = uVar5;
        }
        return;
      }
      return;
    }
    pbVar3 = *(byte **)pbVar6;
    func_0x00010756e6ec();
    uVar2 = iStack_180 == 1;
    if (!(bool)uVar2) {
      func_0x00010756e738();
LAB_10756e164:
      func_0x00010756e61c();
      goto LAB_10756e168;
    }
    pbVar3 = abStack_1f8;
    FUN_1073405dc();
    FUN_10756e584();
    if ((*pbVar3 & 1) == 0) {
      *(undefined1 *)(extraout_x8 + 0x10) = 0;
      func_0x00010756e764(1);
      goto LAB_10756e164;
    }
    func_0x00010756e61c();
    uVar7 = uVar7 - 0x10;
    pbVar6 = pbVar6 + 0x10;
    uVar5 = uVar7;
  } while( true );
}



/* Entry: 10756e0c4; end: 10756e193;  */

void FUN_10756e0c4(byte *param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  byte abStack_c8 [120];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010756e770();
  func_0x00010756e5b8();
  pbVar2 = param_1 + 0x50;
  if ((*(ulong *)(param_1 + 0x48) & 1) != 0) {
    pbVar2 = *(byte **)pbVar2;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
  uVar3 = uVar1 << 3;
  uStack_48 = extraout_x8_00;
  do {
    if (uVar1 == 0) {
      *(undefined1 *)(extraout_x8 + 0x10) = 1;
      func_0x00010756e764();
LAB_10756e168:
      func_0x00010756e5a4(uStack_48);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010756e6b0();
        uVar1 = (*(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe) << 3;
        uVar3 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
        while (uVar3 != 0) {
          func_0x00010756e744();
          uVar1 = uVar1 - 0x10;
          uVar3 = uVar1;
        }
        return;
      }
      return;
    }
    param_1 = *(byte **)pbVar2;
    func_0x00010756e6ec();
    in_ZR = iStack_50 == 1;
    if (!(bool)in_ZR) {
      func_0x00010756e738();
LAB_10756e164:
      func_0x00010756e61c();
      goto LAB_10756e168;
    }
    param_1 = abStack_c8;
    FUN_1073405dc();
    FUN_10756e584();
    if ((*param_1 & 1) == 0) {
      *(undefined1 *)(extraout_x8 + 0x10) = 0;
      func_0x00010756e764(1);
      goto LAB_10756e164;
    }
    func_0x00010756e61c();
    uVar3 = uVar3 - 0x10;
    pbVar2 = pbVar2 + 0x10;
    uVar1 = uVar3;
  } while( true );
}



/* Entry: 10756e194; end: 10756e1d7;  */

void FUN_10756e194(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
  uVar2 = uVar1 << 3;
  while (uVar1 != 0) {
    func_0x00010756e744();
    uVar2 = uVar2 - 0x10;
    uVar1 = uVar2;
  }
  return;
}



/* Entry: 10756e1d8; end: 10756e1ef;  */

undefined1 FUN_10756e1d8(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_2 + 8) != 0x10) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((*(ulong *)(param_2 + 0x48) ^ uVar2) < 2) {
    plVar5 = (long *)(param_1 + 0x50);
    plVar3 = (long *)*plVar5;
    plVar6 = plVar5;
    if ((uVar2 & 1) != 0) {
      plVar6 = plVar3;
    }
    puVar7 = (undefined8 *)(param_2 + 0x50);
    if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
      puVar7 = *(undefined8 **)(param_2 + 0x50);
    }
    while( true ) {
      plVar1 = plVar5;
      if ((uVar2 & 1) != 0) {
        plVar1 = plVar3;
      }
      uVar4 = 1;
      if (plVar6 == plVar1 + (uVar2 & 0xfffffffffffffffe)) break;
      plVar3 = (long *)*plVar6;
      (**(code **)(*plVar3 + 0x18))(plVar3,*puVar7);
      if ((int)plVar3 == 0) {
        return 0;
      }
      uVar2 = *(ulong *)(param_1 + 0x48);
      plVar3 = *(long **)(param_1 + 0x50);
      plVar6 = plVar6 + 2;
      puVar7 = puVar7 + 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10756e1f0; end: 10756e263;  */

undefined8 * FUN_10756e1f0(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 auStack_380 [9];
  undefined1 auStack_338 [16];
  long lStack_328;
  undefined1 auStack_320 [72];
  undefined8 uStack_2d8;
  undefined8 auStack_240 [9];
  undefined1 auStack_1f8 [16];
  long lStack_1e8;
  undefined1 auStack_1e0 [72];
  undefined8 uStack_198;
  undefined8 uStack_38;
  
  func_0x00010756e5b8(param_1);
  func_0x00010756e624();
  func_0x00010756e6a0();
  lVar7 = 0x78;
  do {
    puVar3 = (undefined8 *)(unaff_x20 + lVar7);
    func_0x000107296ad0();
    lVar7 = lVar7 + -0x78;
    bVar1 = lVar7 == -0x78;
  } while (!bVar1);
  func_0x00010756e5a4(uStack_38);
  if (bVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar7 = 0x78;
  do {
    lVar8 = lVar7;
    uVar4 = unaff_x20 + lVar8;
    func_0x000107296ad0();
    lVar7 = lVar8 + -0x78;
  } while (lVar8 + -0x78 != -0x78);
  func_0x00010756e6b0();
  func_0x00010756e770();
  func_0x00010756e5b8();
  func_0x00010756e604();
  auStack_240[0] = 0;
  puVar3 = auStack_240;
  FUN_107539a30(puVar3,uVar4 - 1);
  uVar9 = 1;
  while( true ) {
    uVar2 = uVar9 == uVar4;
    lVar7 = -0x78;
    if (uVar4 <= uVar9) break;
    func_0x00010756e6c0();
    func_0x00010756e77c();
    func_0x00010756e5c8();
    func_0x00010756e698();
    func_0x00010756e688();
    if ((*(byte *)(extraout_x8 + 0x10) & 1) == 0) goto LAB_10756e358;
    func_0x00010756e714();
    func_0x00010756e6b8();
    uVar9 = uVar9 + 1;
  }
  uVar2 = *(char *)(lVar8 + -0x27) == '\x01';
  if ((bool)uVar2) {
    puVar3 = auStack_240;
    FUN_1075394a0(auStack_1e0,puVar3,unaff_x20 + 0x40);
    func_0x00010756e6d0();
  }
  else {
    FUN_107539540(auStack_1f8,1);
    *(undefined8 *)(lStack_1e8 + 0x10) = 0;
    func_0x00010756e65c(&UNK_1109ba320);
    puVar3 = (undefined8 *)(lStack_1e8 + 0x18);
    FUN_1075396a4(puVar3,auStack_1e0);
    func_0x00010756e690();
    func_0x00010756e750();
    func_0x000107539730();
    func_0x00010756e6fc();
    lVar7 = lStack_1e8;
  }
  FUN_107539740();
LAB_10756e358:
  func_0x00010756e670();
  func_0x00010756e5a4(uStack_198);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010756e690();
    __ZNSt3__119__shared_weak_countD2Ev(lVar7);
    func_0x000107539730(auStack_1f8);
    func_0x00010756e670();
    puVar5 = puVar3;
    __Unwind_Resume();
    func_0x00010756e770();
    func_0x00010756e5b8();
    func_0x00010756e604();
    auStack_380[0] = 0;
    puVar6 = auStack_380;
    FUN_107539a30(puVar6,(long)puVar5 + -1);
    for (puVar10 = (undefined8 *)0x1; uVar2 = puVar10 == puVar5, puVar10 < puVar5;
        puVar10 = (undefined8 *)((long)puVar10 + 1)) {
      func_0x00010756e6c0();
      func_0x00010756e77c();
      func_0x00010756e5c8();
      func_0x00010756e698();
      func_0x00010756e688();
      if ((*(byte *)(extraout_x8_00 + 0x10) & 1) == 0) goto LAB_10756e4bc;
      func_0x00010756e714();
      func_0x00010756e6b8();
    }
    uVar2 = *(char *)(lVar7 + 0x51) == '\x01';
    if ((bool)uVar2) {
      puVar6 = auStack_380;
      FUN_107539768(auStack_320,puVar6,puVar3 + 8);
      func_0x00010756e6d0();
    }
    else {
      FUN_107539808(auStack_338,1);
      *(undefined8 *)(lStack_328 + 0x10) = 0;
      func_0x00010756e65c(&UNK_1109ba370);
      puVar6 = (undefined8 *)(lStack_328 + 0x18);
      FUN_10753996c(puVar6,auStack_320);
      func_0x00010756e690();
      func_0x00010756e750();
      func_0x0001075399f8();
      func_0x00010756e6fc();
      lVar7 = lStack_328;
    }
    FUN_107539a08();
LAB_10756e4bc:
    func_0x00010756e670();
    func_0x00010756e5a4(uStack_2d8);
    puVar3 = puVar6;
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x00010756e690();
      __ZNSt3__119__shared_weak_countD2Ev(lVar7);
      func_0x0001075399f8(auStack_338);
      func_0x00010756e670();
      __Unwind_Resume();
      func_0x000107539f94(&UNK_1109be198);
      *puVar6 = &PTR_DAT_1109d4888;
      func_0x0001001148fc(puVar6 + 5);
      func_0x0001072c9884(puVar6 + 2);
      return puVar6;
    }
  }
  return puVar3;
}



/* Entry: 10756e264; end: 10756e3c7;  */

undefined8 * FUN_10756e264(ulong param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 auStack_250 [9];
  undefined1 auStack_208 [16];
  long lStack_1f8;
  undefined1 auStack_1f0 [72];
  undefined8 uStack_1a8;
  undefined8 auStack_110 [9];
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  
  func_0x00010756e770();
  func_0x00010756e5b8();
  func_0x00010756e604();
  auStack_110[0] = 0;
  puVar2 = auStack_110;
  FUN_107539a30(puVar2,param_1 - 1);
  for (uVar5 = 1; uVar1 = uVar5 == param_1, uVar5 < param_1; uVar5 = uVar5 + 1) {
    func_0x00010756e6c0();
    func_0x00010756e77c();
    func_0x00010756e5c8();
    func_0x00010756e698();
    func_0x00010756e688();
    if ((*(byte *)(extraout_x8 + 0x10) & 1) == 0) goto LAB_10756e358;
    func_0x00010756e714();
    func_0x00010756e6b8();
  }
  uVar1 = *(char *)(unaff_x21 + 0x51) == '\x01';
  if ((bool)uVar1) {
    puVar2 = auStack_110;
    FUN_1075394a0(auStack_b0,puVar2,unaff_x20 + 0x40);
    func_0x00010756e6d0();
  }
  else {
    FUN_107539540(auStack_c8,1);
    *(undefined8 *)(lStack_b8 + 0x10) = 0;
    func_0x00010756e65c(&UNK_1109ba320);
    puVar2 = (undefined8 *)(lStack_b8 + 0x18);
    FUN_1075396a4(puVar2,auStack_b0);
    func_0x00010756e690();
    func_0x00010756e750();
    func_0x000107539730();
    func_0x00010756e6fc();
    unaff_x21 = lStack_b8;
  }
  FUN_107539740();
LAB_10756e358:
  func_0x00010756e670();
  func_0x00010756e5a4(uStack_68);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010756e690();
    __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
    func_0x000107539730(auStack_c8);
    func_0x00010756e670();
    puVar3 = puVar2;
    __Unwind_Resume();
    func_0x00010756e770();
    func_0x00010756e5b8();
    func_0x00010756e604();
    auStack_250[0] = 0;
    puVar4 = auStack_250;
    FUN_107539a30(puVar4,(long)puVar3 + -1);
    for (puVar6 = (undefined8 *)0x1; uVar1 = puVar6 == puVar3, puVar6 < puVar3;
        puVar6 = (undefined8 *)((long)puVar6 + 1)) {
      func_0x00010756e6c0();
      func_0x00010756e77c();
      func_0x00010756e5c8();
      func_0x00010756e698();
      func_0x00010756e688();
      if ((*(byte *)(extraout_x8_00 + 0x10) & 1) == 0) goto LAB_10756e4bc;
      func_0x00010756e714();
      func_0x00010756e6b8();
    }
    uVar1 = *(char *)(unaff_x21 + 0x51) == '\x01';
    if ((bool)uVar1) {
      puVar4 = auStack_250;
      FUN_107539768(auStack_1f0,puVar4,puVar2 + 8);
      func_0x00010756e6d0();
    }
    else {
      FUN_107539808(auStack_208,1);
      *(undefined8 *)(lStack_1f8 + 0x10) = 0;
      func_0x00010756e65c(&UNK_1109ba370);
      puVar4 = (undefined8 *)(lStack_1f8 + 0x18);
      FUN_10753996c(puVar4,auStack_1f0);
      func_0x00010756e690();
      func_0x00010756e750();
      func_0x0001075399f8();
      func_0x00010756e6fc();
      unaff_x21 = lStack_1f8;
    }
    FUN_107539a08();
LAB_10756e4bc:
    func_0x00010756e670();
    func_0x00010756e5a4(uStack_1a8);
    puVar2 = puVar4;
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010756e690();
      __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
      func_0x0001075399f8(auStack_208);
      func_0x00010756e670();
      __Unwind_Resume();
      func_0x000107539f94(&UNK_1109be198);
      *puVar4 = &PTR_DAT_1109d4888;
      func_0x0001001148fc(puVar4 + 5);
      func_0x0001072c9884(puVar4 + 2);
      return puVar4;
    }
  }
  return puVar2;
}



/* Entry: 10756e3c8; end: 10756e52b;  */

undefined8 * FUN_10756e3c8(ulong param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  undefined8 auStack_110 [9];
  undefined1 auStack_c8 [16];
  long lStack_b8;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  
  func_0x00010756e770();
  func_0x00010756e5b8();
  func_0x00010756e604();
  auStack_110[0] = 0;
  puVar2 = auStack_110;
  FUN_107539a30(puVar2,param_1 - 1);
  for (uVar3 = 1; uVar1 = uVar3 == param_1, uVar3 < param_1; uVar3 = uVar3 + 1) {
    func_0x00010756e6c0();
    func_0x00010756e77c();
    func_0x00010756e5c8();
    func_0x00010756e698();
    func_0x00010756e688();
    if ((*(byte *)(extraout_x8 + 0x10) & 1) == 0) goto LAB_10756e4bc;
    func_0x00010756e714();
    func_0x00010756e6b8();
  }
  uVar1 = *(char *)(unaff_x21 + 0x51) == '\x01';
  if ((bool)uVar1) {
    puVar2 = auStack_110;
    FUN_107539768(auStack_b0,puVar2,unaff_x20 + 0x40);
    func_0x00010756e6d0();
  }
  else {
    FUN_107539808(auStack_c8,1);
    *(undefined8 *)(lStack_b8 + 0x10) = 0;
    func_0x00010756e65c(&UNK_1109ba370);
    puVar2 = (undefined8 *)(lStack_b8 + 0x18);
    FUN_10753996c(puVar2,auStack_b0);
    func_0x00010756e690();
    func_0x00010756e750();
    func_0x0001075399f8();
    func_0x00010756e6fc();
    unaff_x21 = lStack_b8;
  }
  FUN_107539a08();
LAB_10756e4bc:
  func_0x00010756e670();
  func_0x00010756e5a4(uStack_68);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010756e690();
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x21);
  func_0x0001075399f8(auStack_c8);
  func_0x00010756e670();
  __Unwind_Resume();
  func_0x000107539f94(&UNK_1109be198);
  *puVar2 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar2 + 5);
  func_0x0001072c9884(puVar2 + 2);
  return puVar2;
}



/* Entry: 10756e52c; end: 10756e52f;  */

undefined8 * FUN_10756e52c(undefined8 *param_1)

{
  func_0x000107539f94(&UNK_1109be198);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10756e530; end: 10756e543;  */

void FUN_10756e530(void)

{
  FUN_1075396fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756e544; end: 10756e55b;  */

ulong FUN_10756e544(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 10756e55c; end: 10756e56f;  */

void FUN_10756e55c(void)

{
  FUN_1075399c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756e570; end: 10756e583;  */

ulong FUN_10756e570(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 10756e584; end: 10756e5a3;  */

long FUN_10756e584(long param_1)

{
  if (*(int *)(param_1 + 0x68) == 1) {
    return param_1 + 8;
  }
  func_0x00010563ab98();
  return param_1;
}



/* Entry: 10756e5a4; end: 10756e78f;  */

void FUN_10756e5a4(void)

{
  return;
}



/* Entry: 10756e790; end: 10756e8a3;  */

long * FUN_10756e790(long *param_1,long param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *puVar7;
  char acStack_d8 [120];
  int iStack_60;
  undefined8 uStack_58;
  
  lVar6 = param_2;
  func_0x00010756f538();
  puVar7 = *(undefined8 **)(lVar6 + 0x48);
  puVar1 = *(undefined8 **)(lVar6 + 0x50);
  uStack_58 = extraout_x8;
  do {
    uVar2 = puVar7 == puVar1;
    if ((bool)uVar2) {
      plVar5 = *(long **)(param_2 + 0x60);
      func_0x00010756f508(param_1);
LAB_10756e85c:
      func_0x00010756f4f4(uStack_58);
      if ((bool)uVar2) {
        return plVar5;
      }
      ___stack_chk_fail();
      func_0x00010756f588();
      __Unwind_Resume();
      puVar1 = (undefined8 *)plVar5[10];
      for (puVar7 = (undefined8 *)plVar5[9]; puVar7 != puVar1; puVar7 = puVar7 + 4) {
        FUN_10745df58(param_3,*puVar7);
        FUN_10745df58(param_3,puVar7[2]);
      }
      plVar3 = *(long **)(param_3 + 0x18);
      if (plVar3 == (long *)0x0) {
        func_0x000104bfeb48(0,plVar5[0xc]);
        plVar5 = (long *)plVar3[3];
        if (plVar5 == plVar3) {
          lVar6 = 0x20;
        }
        else {
          if (plVar5 == (long *)0x0) {
            return plVar3;
          }
          lVar6 = 0x28;
        }
        (**(code **)(*plVar5 + lVar6))();
        return plVar3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x30))();
      return plVar3;
    }
    func_0x00010756f508(acStack_d8,*puVar7);
    uVar2 = iStack_60 == 1;
    if (!(bool)uVar2) {
      param_3 = acStack_d8;
      func_0x00010756dd74();
      FUN_10756dd30();
LAB_10756e858:
      func_0x00010756f588();
      plVar5 = param_1;
      goto LAB_10756e85c;
    }
    pcVar4 = acStack_d8;
    func_0x00010727f7dc();
    if (*(int *)(pcVar4 + 0x68) == 1) {
      pcVar4 = acStack_d8;
      func_0x00010727f7dc();
      func_0x000107280568();
      uVar2 = *pcVar4 == '\x01';
      if ((bool)uVar2) {
        plVar5 = (long *)puVar7[2];
        func_0x00010756f508(param_1);
        param_1 = plVar5;
        goto LAB_10756e858;
      }
    }
    func_0x00010756f588();
    puVar7 = puVar7 + 4;
  } while( true );
}



/* Entry: 10756e8a4; end: 10756e99f;  */

long * FUN_10756e8a4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 4) {
    FUN_10745df58(param_2,*puVar5);
    FUN_10745df58(param_2,puVar5[2]);
  }
  plVar2 = *(long **)(param_2 + 0x18);
  if (plVar2 == (long *)0x0) {
    func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x60));
    plVar3 = (long *)plVar2[3];
    if (plVar3 == plVar2) {
      lVar4 = 0x20;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return plVar2;
      }
      lVar4 = 0x28;
    }
    (**(code **)(*plVar3 + lVar4))();
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 10756e9a0; end: 10756ea87;  */

void FUN_10756e9a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_58;
  long lStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *(long *)(param_2 + 0x50);
  for (lVar3 = *(long *)(param_2 + 0x48); lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
    (**(code **)(**(long **)(lVar3 + 0x10) + 0x20))(&lStack_58);
    lVar2 = lStack_50;
    for (lVar4 = lStack_58; lVar4 != lVar2; lVar4 = lVar4 + 0x78) {
      FUN_10756c12c(param_1,lVar4);
    }
    func_0x00010756f590();
  }
  (**(code **)(**(long **)(param_2 + 0x60) + 0x20))(&lStack_58);
  for (lVar3 = lStack_58; lVar3 != lStack_50; lVar3 = lVar3 + 0x78) {
    FUN_10756c12c(param_1,lVar3);
  }
  func_0x00010756f590();
  return;
}



/* Entry: 10756ea88; end: 10756ec33;  */

void FUN_10756ea88(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined3 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint5 *puVar15;
  ulong *puVar16;
  long *plVar17;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  long *plVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong auStack_328 [2];
  undefined1 auStack_318 [24];
  ulong uStack_300;
  undefined8 uStack_2f8;
  byte bStack_2f0;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [8];
  undefined4 uStack_2c0;
  undefined1 uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined1 auStack_298 [16];
  byte bStack_288;
  uint5 auStack_280 [3];
  undefined1 auStack_268 [24];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  ulong uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined1 auStack_1e8 [4];
  undefined1 uStack_1e4;
  undefined4 uStack_1e0;
  long lStack_1d8;
  uint5 auStack_1d0 [6];
  undefined1 auStack_130 [56];
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  long alStack_e8 [3];
  undefined8 *puStack_d0;
  int iStack_70;
  undefined8 uStack_68;
  
  plVar10 = param_2;
  plVar17 = param_3;
  func_0x00010756f538();
  uVar8 = (char)plVar17[0x32] == '\x01';
  uStack_68 = extraout_x8;
  if ((bool)uVar8) {
    puVar1 = (undefined8 *)param_1[10];
    for (puVar11 = (undefined8 *)param_1[9]; uVar8 = puVar11 == puVar1, !(bool)uVar8;
        puVar11 = puVar11 + 4) {
      func_0x00010756f4e4(*(undefined8 *)(*(long *)*puVar11 + 0x48));
      uVar19 = *puVar11;
      plVar10 = param_3;
      FUN_10756ec34();
      auStack_130[0] = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      plVar17 = (long *)auStack_130;
      func_0x000107753050(alStack_e8,uVar19,plVar10,auStack_130);
      func_0x00010724b3d8(auStack_130);
      if (iStack_70 == 1) {
        plVar12 = alStack_e8;
        func_0x00010727f7dc();
        if ((int)plVar12[0xd] == 1) {
          plVar12 = alStack_e8;
          func_0x00010727f7dc();
          func_0x000107280568();
          uVar8 = (char)*plVar12 == '\x01';
          if ((bool)uVar8) {
            plVar12 = (long *)puVar11[2];
            func_0x00010756f4e4(*(undefined8 *)(*plVar12 + 0x48));
            func_0x00010756f570();
            goto LAB_10756ebb0;
          }
        }
      }
      func_0x00010756f570();
    }
    plVar12 = (long *)param_1[0xc];
    func_0x00010756f4e4(*(undefined8 *)(*plVar12 + 0x48));
  }
  else {
    puVar11 = (undefined8 *)0x20;
    __Znwm();
    *puVar11 = &PTR_FUN_1109be340;
    puVar11[1] = param_2;
    puVar11[2] = param_3;
    puVar11[3] = param_4;
    plVar10 = alStack_e8;
    puStack_d0 = puVar11;
    (**(code **)(*param_1 + 0x10))(param_1);
    plVar12 = alStack_e8;
    FUN_10745df78();
  }
LAB_10756ebb0:
  func_0x00010756f4f4(uStack_68);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010756f570();
  __Unwind_Resume();
  if ((*(byte *)(plVar12 + 0x32) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  plVar13 = plVar12;
  func_0x00010756f538();
  plVar18 = plVar13 + 1;
  plVar14 = plVar18;
  auStack_1d0[3]._0_8_ = extraout_x8_01;
  (**(code **)(*plVar13 + 0x20))();
  uVar8 = plVar14 == (long *)0x3;
  if (plVar14 < (long *)0x4) {
    func_0x000107878fec(auStack_1d0,(long)plVar14 + -1);
    func_0x0001004c3cd0(&uStack_210,&UNK_10f417c08,auStack_1d0);
    func_0x00010048a6c8(auStack_268,&uStack_210,&DAT_10f62a9de);
    FUN_10756a668(plVar10,auStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_268);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
    puVar15 = auStack_1d0;
LAB_10756ef00:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15);
    *(undefined1 *)extraout_x8_00 = 0;
    *(undefined1 *)(extraout_x8_00 + 2) = 0;
  }
  else {
    if (((ulong)plVar14 & 1) != 0) {
      func_0x00010002b838(auStack_280,&UNK_10f417c3e);
      FUN_10756a668(plVar10,auStack_280);
      puVar15 = auStack_280;
      goto LAB_10756ef00;
    }
    auStack_298[0] = 0;
    bStack_288 = 0;
    func_0x00010756f560(&uStack_210);
    if ((char)uStack_200 == '\x01') {
      iVar9 = (int)auStack_1d0;
      func_0x00010756f560();
      uStack_1e0 = 6;
      FUN_1074d1ed0();
      func_0x00010756f530();
      func_0x0001072c9854(auStack_1d0);
      func_0x0001072c9854(&uStack_210);
      if (iVar9 != 0) {
        func_0x00010756f560();
        FUN_10756bb10(auStack_298,&uStack_210);
        goto LAB_10756ed64;
      }
    }
    else {
LAB_10756ed64:
      func_0x0001072c9854();
    }
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    if (0xffffffffffffffe < (long)plVar14 - 2U) goto LAB_10756f158;
    FUN_107543cd4();
    uVar20 = uStack_208 - (uStack_2a8 - uStack_2b0);
    _memcpy(uVar20);
    uVar4 = uStack_2a0;
    uStack_2a0 = uStack_1f8;
    uStack_2a8 = uStack_200;
    uStack_200 = uStack_2b0;
    uStack_1f8 = uVar4;
    uStack_210 = uStack_2b0;
    uStack_208 = uStack_2b0;
    uStack_2b0 = uVar20;
    FUN_107543d5c(&uStack_210);
    lVar21 = 1;
    while( true ) {
      plVar13 = (long *)(lVar21 + 1);
      uVar8 = plVar13 == plVar14;
      if (plVar14 <= plVar13) break;
      (**(code **)(*plVar12 + 0x28))(auStack_1d0,plVar18,lVar21);
      uStack_2c0 = 2;
      uStack_2b8 = 1;
      auStack_1e8[0] = 0;
      uStack_1e4 = 0;
      func_0x00010756f568(&uStack_210,plVar10,auStack_1d0,lVar21);
      func_0x0001072c9854(auStack_2c8);
      func_0x00010756f578();
      if ((uStack_200 & 1) == 0) {
        *(undefined1 *)extraout_x8_00 = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 0;
LAB_10756f068:
        puVar16 = &uStack_210;
        goto LAB_10756f114;
      }
      (**(code **)(*plVar12 + 0x28))(auStack_1d0,plVar18,plVar13);
      FUN_10756f360(auStack_2e0,auStack_298);
      auStack_1e8[0] = 0;
      uStack_1e4 = 0;
      func_0x00010756f568(extraout_x8_00,plVar10,auStack_1d0,plVar13);
      func_0x0001072c9854(auStack_2e0);
      func_0x00010756f578();
      if ((*(byte *)(extraout_x8_00 + 2) & 1) == 0) goto LAB_10756f068;
      if ((bStack_288 & 1) == 0) {
        FUN_10756f300(auStack_298,*extraout_x8_00 + 0x10);
      }
      FUN_1075426b0(&uStack_2b0,&uStack_210,extraout_x8_00);
      func_0x0001072c95d0(extraout_x8_00);
      func_0x0001072c95d0(&uStack_210);
      lVar21 = lVar21 + 2;
    }
    (**(code **)(*plVar12 + 0x28))(&uStack_210,plVar18,(long)plVar14 + -1);
    FUN_10756f360(auStack_318,auStack_298);
    uVar2 = SUB83((undefined8)auStack_1d0[0],5);
    uVar3 = (uint)(undefined8)auStack_1d0[0];
    auStack_1d0[0] = (uint5)(uVar3 & 0xffffff00);
    auStack_1d0[0]._0_8_ = CONCAT35(uVar2,auStack_1d0[0]);
    func_0x00010756f568(&uStack_300,plVar10,&uStack_210,(long)plVar14 + -1);
    func_0x0001072c9854(auStack_318);
    func_0x0001072f5f6c(&uStack_210);
    if ((bStack_2f0 & 1) == 0) {
      *(undefined1 *)extraout_x8_00 = 0;
      *(undefined1 *)(extraout_x8_00 + 2) = 0;
    }
    else {
      uVar8 = *(char *)((long)plVar10 + 0x51) == '\x01';
      if ((bool)uVar8) {
        FUN_107548858(auStack_1e8,1);
        lVar21 = lStack_1d8;
        func_0x00010756f548();
        func_0x0001072c9ff4(auStack_240,auStack_298);
        uVar6 = uStack_2a0;
        uVar5 = uStack_2a8;
        uVar20 = uStack_2b0;
        uVar19 = uStack_2f8;
        uVar4 = uStack_300;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        uStack_2b0 = 0;
        uStack_300 = 0;
        uStack_2f8 = 0;
        func_0x0001072ca12c(&uStack_220,auStack_240);
        uStack_208 = uVar5;
        uStack_210 = uVar20;
        uStack_200 = uVar6;
        auStack_1d0[1]._0_8_ = 0;
        auStack_1d0[2]._0_8_ = 0;
        auStack_1d0[0]._0_8_ = 0;
        uStack_228 = uVar19;
        uStack_230 = uVar4;
        uStack_250 = 0;
        uStack_248 = 0;
        FUN_107545708(lVar21 + 0x18,&uStack_220,&uStack_210,&uStack_230);
        func_0x0001072c9b9c(&uStack_230);
        func_0x00010756f528();
        func_0x0001072c9884(&uStack_220);
        func_0x0001002a8234(lVar21 + 0x40,plVar17 + 8);
        func_0x0001072c9b9c(&uStack_250);
        func_0x000107543dec(auStack_1d0);
        func_0x0001072c9884(auStack_240);
        lVar21 = lStack_1d8;
        lStack_1d8 = 0;
        func_0x0001075488c4(auStack_1e8);
        *extraout_x8_00 = lVar21 + 0x18;
        extraout_x8_00[1] = lVar21;
        auStack_328[0] = 0;
        auStack_328[1] = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 1;
        puVar16 = auStack_328;
      }
      else {
        FUN_107548858(auStack_1d0,1);
        uVar19 = (undefined8)auStack_1d0[2];
        func_0x00010756f548();
        func_0x0001072c9ff4(auStack_1e8,auStack_298);
        uStack_208 = uStack_2a8;
        uStack_210 = uStack_2b0;
        uStack_200 = uStack_2a0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        uStack_2b0 = 0;
        uStack_218 = uStack_2f8;
        uStack_220 = uStack_300;
        uStack_300 = 0;
        uStack_2f8 = 0;
        FUN_107545708(uVar19 + 0x18,auStack_1e8,&uStack_210,&uStack_220);
        func_0x0001072c9b9c(&uStack_220);
        func_0x00010756f528();
        func_0x00010756f530();
        uVar19 = (undefined8)auStack_1d0[2];
        auStack_1d0[2]._0_8_ = 0;
        func_0x0001075488c4(auStack_1d0);
        *extraout_x8_00 = uVar19 + 0x18;
        extraout_x8_00[1] = uVar19;
        uStack_230 = 0;
        uStack_228 = 0;
        *(undefined1 *)(extraout_x8_00 + 2) = 1;
        puVar16 = &uStack_230;
      }
      FUN_1075488d4(puVar16);
    }
    puVar16 = &uStack_300;
LAB_10756f114:
    func_0x0001072c95d0(puVar16);
    func_0x000107543dec(&uStack_2b0);
    func_0x0001072c9854(auStack_298);
  }
  func_0x00010756f4f4((undefined8)auStack_1d0[3]);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_10756f158:
  FUN_107543cc8();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10756f160);
  (*pcVar7)();
}



/* Entry: 10756ec34; end: 10756ec4b;  */

void FUN_10756ec34(long *param_1,long param_2,long param_3)

{
  undefined3 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint5 *puVar12;
  ulong *puVar13;
  long *extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  byte bStack_1c0;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [8];
  undefined4 uStack_190;
  undefined1 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined1 auStack_168 [16];
  byte bStack_158;
  uint5 auStack_150 [3];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_b8 [4];
  undefined1 uStack_b4;
  undefined4 uStack_b0;
  long lStack_a8;
  uint5 auStack_a0 [6];
  
  if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  plVar10 = param_1;
  func_0x00010756f538();
  plVar14 = plVar10 + 1;
  plVar11 = plVar14;
  auStack_a0[3]._0_8_ = extraout_x8_00;
  (**(code **)(*plVar10 + 0x20))();
  uVar8 = plVar11 == (long *)0x3;
  if (plVar11 < (long *)0x4) {
    func_0x000107878fec(auStack_a0,(long)plVar11 - 1);
    func_0x0001004c3cd0(&uStack_e0,&UNK_10f417c08,auStack_a0);
    func_0x00010048a6c8(auStack_138,&uStack_e0,&DAT_10f62a9de);
    FUN_10756a668(param_2,auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
    puVar12 = auStack_a0;
LAB_10756ef00:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 2) = 0;
  }
  else {
    if (((ulong)plVar11 & 1) != 0) {
      func_0x00010002b838(auStack_150,&UNK_10f417c3e);
      FUN_10756a668(param_2,auStack_150);
      puVar12 = auStack_150;
      goto LAB_10756ef00;
    }
    auStack_168[0] = 0;
    bStack_158 = 0;
    func_0x00010756f560(&uStack_e0);
    if ((char)uStack_d0 == '\x01') {
      iVar9 = (int)auStack_a0;
      func_0x00010756f560();
      uStack_b0 = 6;
      FUN_1074d1ed0();
      func_0x00010756f530();
      func_0x0001072c9854(auStack_a0);
      func_0x0001072c9854(&uStack_e0);
      if (iVar9 != 0) {
        func_0x00010756f560();
        FUN_10756bb10(auStack_168,&uStack_e0);
        goto LAB_10756ed64;
      }
    }
    else {
LAB_10756ed64:
      func_0x0001072c9854();
    }
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    if (0xffffffffffffffe < (long)plVar11 - 2U) goto LAB_10756f158;
    FUN_107543cd4();
    uVar15 = uStack_d8 - (uStack_178 - uStack_180);
    _memcpy(uVar15);
    uVar3 = uStack_170;
    uStack_170 = uStack_c8;
    uStack_178 = uStack_d0;
    uStack_d0 = uStack_180;
    uStack_c8 = uVar3;
    uStack_e0 = uStack_180;
    uStack_d8 = uStack_180;
    uStack_180 = uVar15;
    FUN_107543d5c(&uStack_e0);
    lVar16 = 1;
    while( true ) {
      plVar10 = (long *)(lVar16 + 1);
      uVar8 = plVar10 == plVar11;
      if (plVar11 <= plVar10) break;
      (**(code **)(*param_1 + 0x28))(auStack_a0,plVar14,lVar16);
      uStack_190 = 2;
      uStack_188 = 1;
      auStack_b8[0] = 0;
      uStack_b4 = 0;
      func_0x00010756f568(&uStack_e0,param_2,auStack_a0,lVar16);
      func_0x0001072c9854(auStack_198);
      func_0x00010756f578();
      if ((uStack_d0 & 1) == 0) {
        *(undefined1 *)extraout_x8 = 0;
        *(undefined1 *)(extraout_x8 + 2) = 0;
LAB_10756f068:
        puVar13 = &uStack_e0;
        goto LAB_10756f114;
      }
      (**(code **)(*param_1 + 0x28))(auStack_a0,plVar14,plVar10);
      FUN_10756f360(auStack_1b0,auStack_168);
      auStack_b8[0] = 0;
      uStack_b4 = 0;
      func_0x00010756f568(extraout_x8,param_2,auStack_a0,plVar10);
      func_0x0001072c9854(auStack_1b0);
      func_0x00010756f578();
      if ((*(byte *)(extraout_x8 + 2) & 1) == 0) goto LAB_10756f068;
      if ((bStack_158 & 1) == 0) {
        FUN_10756f300(auStack_168,*extraout_x8 + 0x10);
      }
      FUN_1075426b0(&uStack_180,&uStack_e0,extraout_x8);
      func_0x0001072c95d0(extraout_x8);
      func_0x0001072c95d0(&uStack_e0);
      lVar16 = lVar16 + 2;
    }
    (**(code **)(*param_1 + 0x28))(&uStack_e0,plVar14,(long)plVar11 - 1U);
    FUN_10756f360(auStack_1e8,auStack_168);
    uVar1 = SUB83((undefined8)auStack_a0[0],5);
    uVar2 = (uint)(undefined8)auStack_a0[0];
    auStack_a0[0] = (uint5)(uVar2 & 0xffffff00);
    auStack_a0[0]._0_8_ = CONCAT35(uVar1,auStack_a0[0]);
    func_0x00010756f568(&uStack_1d0,param_2,&uStack_e0,(long)plVar11 - 1U);
    func_0x0001072c9854(auStack_1e8);
    func_0x0001072f5f6c(&uStack_e0);
    if ((bStack_1c0 & 1) == 0) {
      *(undefined1 *)extraout_x8 = 0;
      *(undefined1 *)(extraout_x8 + 2) = 0;
    }
    else {
      uVar8 = *(char *)(param_2 + 0x51) == '\x01';
      if ((bool)uVar8) {
        FUN_107548858(auStack_b8,1);
        lVar16 = lStack_a8;
        func_0x00010756f548();
        func_0x0001072c9ff4(auStack_110,auStack_168);
        uVar6 = uStack_170;
        uVar5 = uStack_178;
        uVar15 = uStack_180;
        uVar4 = uStack_1c8;
        uVar3 = uStack_1d0;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_180 = 0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        func_0x0001072ca12c(&uStack_f0,auStack_110);
        uStack_d8 = uVar5;
        uStack_e0 = uVar15;
        uStack_d0 = uVar6;
        auStack_a0[1]._0_8_ = 0;
        auStack_a0[2]._0_8_ = 0;
        auStack_a0[0]._0_8_ = 0;
        uStack_f8 = uVar4;
        uStack_100 = uVar3;
        uStack_120 = 0;
        uStack_118 = 0;
        FUN_107545708(lVar16 + 0x18,&uStack_f0,&uStack_e0,&uStack_100);
        func_0x0001072c9b9c(&uStack_100);
        func_0x00010756f528();
        func_0x0001072c9884(&uStack_f0);
        func_0x0001002a8234(lVar16 + 0x40,param_3 + 0x40);
        func_0x0001072c9b9c(&uStack_120);
        func_0x000107543dec(auStack_a0);
        func_0x0001072c9884(auStack_110);
        lVar16 = lStack_a8;
        lStack_a8 = 0;
        func_0x0001075488c4(auStack_b8);
        *extraout_x8 = lVar16 + 0x18;
        extraout_x8[1] = lVar16;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
        *(undefined1 *)(extraout_x8 + 2) = 1;
        puVar13 = &uStack_1f8;
      }
      else {
        FUN_107548858(auStack_a0,1);
        uVar4 = (undefined8)auStack_a0[2];
        func_0x00010756f548();
        func_0x0001072c9ff4(auStack_b8,auStack_168);
        uStack_d8 = uStack_178;
        uStack_e0 = uStack_180;
        uStack_d0 = uStack_170;
        uStack_178 = 0;
        uStack_170 = 0;
        uStack_180 = 0;
        uStack_e8 = uStack_1c8;
        uStack_f0 = uStack_1d0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        FUN_107545708(uVar4 + 0x18,auStack_b8,&uStack_e0,&uStack_f0);
        func_0x0001072c9b9c(&uStack_f0);
        func_0x00010756f528();
        func_0x00010756f530();
        uVar4 = (undefined8)auStack_a0[2];
        auStack_a0[2]._0_8_ = 0;
        func_0x0001075488c4(auStack_a0);
        *extraout_x8 = uVar4 + 0x18;
        extraout_x8[1] = uVar4;
        uStack_100 = 0;
        uStack_f8 = 0;
        *(undefined1 *)(extraout_x8 + 2) = 1;
        puVar13 = &uStack_100;
      }
      FUN_1075488d4(puVar13);
    }
    puVar13 = &uStack_1d0;
LAB_10756f114:
    func_0x0001072c95d0(puVar13);
    func_0x000107543dec(&uStack_180);
    func_0x0001072c9854(auStack_168);
  }
  func_0x00010756f4f4((undefined8)auStack_a0[3]);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_10756f158:
  FUN_107543cc8();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10756f160);
  (*pcVar7)();
}



/* Entry: 10756ec4c; end: 10756f2ff;  */

void FUN_10756ec4c(long *param_1,long *param_2,long param_3,long param_4)

{
  undefined3 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint5 *puVar12;
  ulong *puVar13;
  undefined8 extraout_x8;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [24];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [8];
  undefined4 uStack_180;
  undefined1 uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 auStack_158 [16];
  byte bStack_148;
  uint5 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 auStack_a8 [4];
  undefined1 uStack_a4;
  undefined4 uStack_a0;
  long lStack_98;
  uint5 auStack_90 [6];
  
  plVar10 = param_2;
  func_0x00010756f538();
  plVar14 = plVar10 + 1;
  plVar11 = plVar14;
  auStack_90[3]._0_8_ = extraout_x8;
  (**(code **)(*plVar10 + 0x20))();
  uVar8 = plVar11 == (long *)0x3;
  if (plVar11 < (long *)0x4) {
    func_0x000107878fec(auStack_90,(long)plVar11 - 1);
    func_0x0001004c3cd0(&uStack_d0,&UNK_10f417c08,auStack_90);
    func_0x00010048a6c8(auStack_128,&uStack_d0,&DAT_10f62a9de);
    FUN_10756a668(param_3,auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d0);
    puVar12 = auStack_90;
LAB_10756ef00:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar12);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    if (((ulong)plVar11 & 1) != 0) {
      func_0x00010002b838(auStack_140,&UNK_10f417c3e);
      FUN_10756a668(param_3,auStack_140);
      puVar12 = auStack_140;
      goto LAB_10756ef00;
    }
    auStack_158[0] = 0;
    bStack_148 = 0;
    func_0x00010756f560(&uStack_d0);
    if ((char)uStack_c0 == '\x01') {
      iVar9 = (int)auStack_90;
      func_0x00010756f560();
      uStack_a0 = 6;
      FUN_1074d1ed0();
      func_0x00010756f530();
      func_0x0001072c9854(auStack_90);
      func_0x0001072c9854(&uStack_d0);
      if (iVar9 != 0) {
        func_0x00010756f560();
        FUN_10756bb10(auStack_158,&uStack_d0);
        goto LAB_10756ed64;
      }
    }
    else {
LAB_10756ed64:
      func_0x0001072c9854();
    }
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    if (0xffffffffffffffe < (long)plVar11 - 2U) goto LAB_10756f158;
    FUN_107543cd4();
    uVar15 = uStack_c8 - (uStack_168 - uStack_170);
    _memcpy(uVar15);
    uVar3 = uStack_160;
    uStack_160 = uStack_b8;
    uStack_168 = uStack_c0;
    uStack_c0 = uStack_170;
    uStack_b8 = uVar3;
    uStack_d0 = uStack_170;
    uStack_c8 = uStack_170;
    uStack_170 = uVar15;
    FUN_107543d5c(&uStack_d0);
    lVar16 = 1;
    while( true ) {
      plVar10 = (long *)(lVar16 + 1);
      uVar8 = plVar10 == plVar11;
      if (plVar11 <= plVar10) break;
      (**(code **)(*param_2 + 0x28))(auStack_90,plVar14,lVar16);
      uStack_180 = 2;
      uStack_178 = 1;
      auStack_a8[0] = 0;
      uStack_a4 = 0;
      func_0x00010756f568(&uStack_d0,param_3,auStack_90,lVar16);
      func_0x0001072c9854(auStack_188);
      func_0x00010756f578();
      if ((uStack_c0 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
LAB_10756f068:
        puVar13 = &uStack_d0;
        goto LAB_10756f114;
      }
      (**(code **)(*param_2 + 0x28))(auStack_90,plVar14,plVar10);
      FUN_10756f360(auStack_1a0,auStack_158);
      auStack_a8[0] = 0;
      uStack_a4 = 0;
      func_0x00010756f568(param_1,param_3,auStack_90,plVar10);
      func_0x0001072c9854(auStack_1a0);
      func_0x00010756f578();
      if ((*(byte *)(param_1 + 2) & 1) == 0) goto LAB_10756f068;
      if ((bStack_148 & 1) == 0) {
        FUN_10756f300(auStack_158,*param_1 + 0x10);
      }
      FUN_1075426b0(&uStack_170,&uStack_d0,param_1);
      func_0x0001072c95d0(param_1);
      func_0x0001072c95d0(&uStack_d0);
      lVar16 = lVar16 + 2;
    }
    (**(code **)(*param_2 + 0x28))(&uStack_d0,plVar14,(long)plVar11 - 1U);
    FUN_10756f360(auStack_1d8,auStack_158);
    uVar1 = SUB83((undefined8)auStack_90[0],5);
    uVar2 = (uint)(undefined8)auStack_90[0];
    auStack_90[0] = (uint5)(uVar2 & 0xffffff00);
    auStack_90[0]._0_8_ = CONCAT35(uVar1,auStack_90[0]);
    func_0x00010756f568(&uStack_1c0,param_3,&uStack_d0,(long)plVar11 - 1U);
    func_0x0001072c9854(auStack_1d8);
    func_0x0001072f5f6c(&uStack_d0);
    if ((bStack_1b0 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      uVar8 = *(char *)(param_3 + 0x51) == '\x01';
      if ((bool)uVar8) {
        FUN_107548858(auStack_a8,1);
        lVar16 = lStack_98;
        func_0x00010756f548();
        func_0x0001072c9ff4(auStack_100,auStack_158);
        uVar6 = uStack_160;
        uVar5 = uStack_168;
        uVar15 = uStack_170;
        uVar4 = uStack_1b8;
        uVar3 = uStack_1c0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_170 = 0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        func_0x0001072ca12c(&uStack_e0,auStack_100);
        uStack_c8 = uVar5;
        uStack_d0 = uVar15;
        uStack_c0 = uVar6;
        auStack_90[1]._0_8_ = 0;
        auStack_90[2]._0_8_ = 0;
        auStack_90[0]._0_8_ = 0;
        uStack_e8 = uVar4;
        uStack_f0 = uVar3;
        uStack_110 = 0;
        uStack_108 = 0;
        FUN_107545708(lVar16 + 0x18,&uStack_e0,&uStack_d0,&uStack_f0);
        func_0x0001072c9b9c(&uStack_f0);
        func_0x00010756f528();
        func_0x0001072c9884(&uStack_e0);
        func_0x0001002a8234(lVar16 + 0x40,param_4 + 0x40);
        func_0x0001072c9b9c(&uStack_110);
        func_0x000107543dec(auStack_90);
        func_0x0001072c9884(auStack_100);
        lVar16 = lStack_98;
        lStack_98 = 0;
        func_0x0001075488c4(auStack_a8);
        *param_1 = lVar16 + 0x18;
        param_1[1] = lVar16;
        uStack_1e8 = 0;
        uStack_1e0 = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        puVar13 = &uStack_1e8;
      }
      else {
        FUN_107548858(auStack_90,1);
        uVar4 = (undefined8)auStack_90[2];
        func_0x00010756f548();
        func_0x0001072c9ff4(auStack_a8,auStack_158);
        uStack_c8 = uStack_168;
        uStack_d0 = uStack_170;
        uStack_c0 = uStack_160;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_170 = 0;
        uStack_d8 = uStack_1b8;
        uStack_e0 = uStack_1c0;
        uStack_1c0 = 0;
        uStack_1b8 = 0;
        FUN_107545708(uVar4 + 0x18,auStack_a8,&uStack_d0,&uStack_e0);
        func_0x0001072c9b9c(&uStack_e0);
        func_0x00010756f528();
        func_0x00010756f530();
        uVar4 = (undefined8)auStack_90[2];
        auStack_90[2]._0_8_ = 0;
        func_0x0001075488c4(auStack_90);
        *param_1 = uVar4 + 0x18;
        param_1[1] = uVar4;
        uStack_f0 = 0;
        uStack_e8 = 0;
        *(undefined1 *)(param_1 + 2) = 1;
        puVar13 = &uStack_f0;
      }
      FUN_1075488d4(puVar13);
    }
    puVar13 = &uStack_1c0;
LAB_10756f114:
    func_0x0001072c95d0(puVar13);
    func_0x000107543dec(&uStack_170);
    func_0x0001072c9854(auStack_158);
  }
  func_0x00010756f4f4((undefined8)auStack_90[3]);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_10756f158:
  FUN_107543cc8();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10756f160);
  (*pcVar7)();
}



/* Entry: 10756f300; end: 10756f333;  */

long FUN_10756f300(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10756cb60();
  }
  else {
    FUN_10756f3ac();
  }
  return param_1;
}



/* Entry: 10756f334; end: 10756f337;  */

undefined8 * FUN_10756f334(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be2b8;
  func_0x0001072c9b9c(param_1 + 0xc);
  func_0x000107543dec(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10756f338; end: 10756f34b;  */

void FUN_10756f338(void)

{
  FUN_10756f3c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756f34c; end: 10756f35f;  */

ulong FUN_10756f34c(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 10756f360; end: 10756f397;  */

undefined1 * FUN_10756f360(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  FUN_10756f398();
  return param_1;
}



/* Entry: 10756f398; end: 10756f3ab;  */

void FUN_10756f398(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x0001072c9ff4();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 10756f3ac; end: 10756f3c7;  */

void FUN_10756f3ac(long param_1)

{
  func_0x0001072c9ff4();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10756f3c8; end: 10756f407;  */

undefined8 * FUN_10756f3c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be2b8;
  func_0x0001072c9b9c(param_1 + 0xc);
  func_0x000107543dec(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10756f408; end: 10756f40f;  */

void FUN_10756f408(void)

{
  return;
}



/* Entry: 10756f410; end: 10756f44b;  */

void FUN_10756f410(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1109be340;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10756f44c; end: 10756f49f;  */

void FUN_10756f44c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109be340;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10756f4a0; end: 10756f4d7;  */

long FUN_10756f4a0(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109be3a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10756f4d8; end: 10756f597;  */

undefined ** FUN_10756f4d8(void)

{
  return &PTR_DAT_1109be3a0;
}



/* Entry: 10756f598; end: 10756f723;  */

void FUN_10756f598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10756a788(auStack_70,param_2);
  func_0x00010724ef84(auStack_108,auStack_70);
  func_0x0001004c3cd0(auStack_f0,&UNK_10f417c67,auStack_108);
  func_0x00010048a6c8(auStack_d8,auStack_f0,&UNK_10f417c71);
  FUN_10756a788(auStack_a8,param_3);
  func_0x00010724ef84(auStack_120,auStack_a8);
  func_0x00010533a9c0(auStack_c0,auStack_d8,auStack_120);
  func_0x00010048a6c8(param_1,auStack_c0,&UNK_10f417b93);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000104c2f714(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puVar1 = auStack_70;
  func_0x000104c2f714(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000104c2f714(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    func_0x000104c2f714(auStack_70);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10756f724; end: 10756f9eb;  */

void FUN_10756f724(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  char cStack_48;
  
  iVar3 = *(int *)(param_3 + 8);
  if (iVar3 != 10) {
    iVar2 = *(int *)(param_2 + 1);
    if ((((iVar2 == 0) || (iVar2 == 2)) || (iVar2 == 1)) || ((iVar2 == 4 || (iVar2 == 3)))) {
LAB_10756f7a0:
      FUN_1074d1ed0(param_2,param_3);
      bVar1 = (int)param_2 == 0;
      if (bVar1) {
        *(undefined1 *)param_1 = 0;
      }
      else {
        FUN_10756f9ec(auStack_60);
        func_0x00010756f9f8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
      }
      *(bool *)(param_1 + 3) = !bVar1;
      return;
    }
    if (iVar2 == 6) {
      if (iVar3 != 6) {
        if ((bRam00000001136cba98 & 1) == 0) {
          iVar3 = 0x136cba98;
          ___cxa_guard_acquire();
          if (iVar3 != 0) {
            uRam00000001136cbaa8 = 0;
            uRam00000001136cbab8 = 2;
            uRam00000001136cbac8 = 1;
            uRam00000001136cbad8 = 3;
            uRam00000001136cbae8 = 5;
            uRam00000001136cbaf8 = 4;
            uRam00000001136cbb08 = 9;
            uRam00000001136cbb18 = 0xb;
            uStack_70 = CONCAT44(uStack_70._4_4_,6);
            func_0x0001072f5dec(auStack_60,&uStack_78);
            func_0x0001072f6ad4(0x1136cbb20,auStack_60);
            func_0x00010756fa1c();
            func_0x0001072c9884(&uStack_78);
            ___cxa_guard_release(0x1136cba98);
          }
        }
        lVar4 = 0x1136cbaa0;
        lVar6 = 0x90;
        do {
          FUN_10756f724(auStack_60,lVar4,param_3);
          if (cStack_48 != '\x01') {
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 3) = 0;
            goto LAB_10756f938;
          }
          func_0x00010756fa14();
          lVar4 = lVar4 + 0x10;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
LAB_10756f910:
        FUN_10756f9ec(auStack_60);
        func_0x00010756f9f8();
        *(undefined1 *)(param_1 + 3) = 1;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
        return;
      }
    }
    else {
      if ((iVar2 == 5) || (iVar2 != 7)) goto LAB_10756f7a0;
      uVar5 = *param_2;
      if (iVar3 == 7) {
        FUN_10756aea8();
        if ((*(char *)(param_3 + 0x18) == '\x01') && (*(long *)(param_3 + 0x10) == 0)) {
          uStack_58 = 6;
          lVar4 = param_3;
          FUN_1074d1ed0(param_3,auStack_60);
          func_0x00010756fa1c();
          if ((int)lVar4 == 0) goto LAB_10756f74c;
        }
        FUN_10756f724(auStack_60,uVar5,param_3);
        if (cStack_48 == '\x01') {
          FUN_10756f9ec(&uStack_78);
          param_1[1] = uStack_70;
          *param_1 = uStack_78;
          param_1[2] = uStack_68;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_78 = 0;
          *(undefined1 *)(param_1 + 3) = 1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
LAB_10756f938:
          func_0x00010756fa14();
          return;
        }
        func_0x00010756fa14();
      }
      else {
        FUN_10745de74(param_3,uVar5);
        if ((int)param_3 == 0) goto LAB_10756f910;
      }
    }
  }
LAB_10756f74c:
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10756f9ec; end: 10756fa23;  */

void FUN_10756f9ec(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10756a788(auStack_70);
  func_0x00010724ef84(auStack_108,auStack_70);
  func_0x0001004c3cd0(auStack_f0,&UNK_10f417c67,auStack_108);
  func_0x00010048a6c8(auStack_d8,auStack_f0,&UNK_10f417c71);
  FUN_10756a788(auStack_a8);
  func_0x00010724ef84(auStack_120,auStack_a8);
  func_0x00010533a9c0(auStack_c0,auStack_d8,auStack_120);
  func_0x00010048a6c8(param_1,auStack_c0,&UNK_10f417b93);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000104c2f714(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puVar1 = auStack_70;
  func_0x000104c2f714(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000104c2f714(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    func_0x000104c2f714(auStack_70);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 10756fa24; end: 10756fc83;  */

void FUN_10756fa24(void)

{
  byte bVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  ulong unaff_x19;
  ulong uVar6;
  long unaff_x22;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined4 auStack_230 [14];
  byte bStack_1f8;
  byte bStack_1d0;
  undefined4 auStack_1c8 [2];
  undefined4 auStack_1c0 [24];
  undefined4 uStack_160;
  undefined1 auStack_148 [96];
  byte bStack_e8;
  undefined4 auStack_e0 [2];
  undefined1 auStack_d8 [104];
  undefined8 uStack_70;
  
  func_0x0001075704c8();
  auStack_e0[0] = 7;
  uStack_70 = extraout_x8;
  func_0x0001077765a4(auStack_1c8,auStack_e0,auStack_148);
  puVar4 = auStack_1c8;
  FUN_1074b0ce4();
  func_0x00010726af18(auStack_1c0);
  func_0x000104c3323c(auStack_e0);
  uVar5 = *(ulong *)(unaff_x22 + 0x48) >> 1;
  auStack_148[0] = 0;
  bStack_e8 = 0;
  plVar8 = (long *)(unaff_x22 + 0x50);
  if ((*(ulong *)(unaff_x22 + 0x48) & 1) != 0) {
    plVar8 = (long *)*plVar8;
  }
  for (lVar9 = uVar5 << 4; lVar9 != 0; lVar9 = lVar9 + -0x10) {
    uVar5 = uVar5 - 1;
    func_0x000107753050(auStack_1c8,*plVar8);
    func_0x0001075704f8();
    func_0x0001075704f0();
    auStack_1c0[0] = 0xb;
    lVar2 = unaff_x22 + 0x10;
    puVar4 = auStack_1c8;
    FUN_10745de74(lVar2,puVar4);
    if ((int)lVar2 == 0) {
      func_0x000107570518();
LAB_10756fb28:
      in_ZR = *(int *)(unaff_x19 + 0x78) == 1;
      if (!(bool)in_ZR) break;
      uVar6 = unaff_x19;
      FUN_1073405dc();
      uStack_160 = 0;
      puVar4 = auStack_1c8;
      FUN_10745fc40();
      func_0x00010726af18(auStack_1c0);
      if ((uVar6 & 1) != 0) break;
    }
    else {
      iVar7 = *(int *)(unaff_x19 + 0x78);
      func_0x000107570518();
      if (iVar7 != 1) goto LAB_10756fb28;
      FUN_1073405dc();
      puVar4 = auStack_1c8;
      func_0x000107777548(auStack_230);
      bVar1 = bStack_1d0 ^ 1 | bStack_1f8;
      if ((bVar1 & 1) == 0) {
        if ((bStack_e8 & 1) == 0) {
          puVar4 = auStack_230;
          func_0x000107278ab0(auStack_148,auStack_230);
        }
        if (uVar5 == 0) {
          func_0x000107348ecc(auStack_d8,auStack_148);
          puVar4 = auStack_e0;
          FUN_1074b0ce4(auStack_1c8,puVar4);
          func_0x00010726af18(auStack_d8);
          func_0x0001075704f8();
          func_0x0001075704f0();
        }
        iVar7 = 3;
      }
      else {
        iVar7 = 0;
      }
      func_0x00010726b144(auStack_230);
      if ((bVar1 & 1) != 0) goto LAB_10756fb28;
      in_ZR = iVar7 == 3;
      if ((!(bool)in_ZR) && (iVar7 != 0)) break;
    }
    plVar8 = plVar8 + 2;
  }
  puVar3 = auStack_148;
  func_0x00010726b144();
  func_0x00010757052c(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001075704f0();
    func_0x00010726b144(auStack_230);
    func_0x00010726b144(auStack_148);
    func_0x00010727f7f8(unaff_x19 + 8);
    __Unwind_Resume();
    plVar8 = (long *)(puVar3 + 0x50);
    if ((*(ulong *)(puVar3 + 0x48) & 1) != 0) {
      plVar8 = (long *)*plVar8;
    }
    uVar5 = *(ulong *)(puVar3 + 0x48) & 0x1ffffffffffffffe;
    uVar6 = uVar5 << 3;
    while (uVar5 != 0) {
      FUN_10745df58(puVar4,*plVar8);
      uVar6 = uVar6 - 0x10;
      plVar8 = plVar8 + 2;
      uVar5 = uVar6;
    }
    return;
  }
  return;
}



/* Entry: 10756fc84; end: 10756fccf;  */

void FUN_10756fc84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)(param_1 + 0x50);
  if ((*(ulong *)(param_1 + 0x48) & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
  uVar3 = uVar1 << 3;
  while (uVar1 != 0) {
    FUN_10745df58(param_2,*plVar2);
    uVar3 = uVar3 - 0x10;
    plVar2 = plVar2 + 2;
    uVar1 = uVar3;
  }
  return;
}



/* Entry: 10756fcd0; end: 10756fceb;  */

undefined1 FUN_10756fcd0(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_2 + 8) != 0) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((*(ulong *)(param_2 + 0x48) ^ uVar2) < 2) {
    plVar5 = (long *)(param_1 + 0x50);
    plVar3 = (long *)*plVar5;
    plVar6 = plVar5;
    if ((uVar2 & 1) != 0) {
      plVar6 = plVar3;
    }
    puVar7 = (undefined8 *)(param_2 + 0x50);
    if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
      puVar7 = *(undefined8 **)(param_2 + 0x50);
    }
    while( true ) {
      plVar1 = plVar5;
      if ((uVar2 & 1) != 0) {
        plVar1 = plVar3;
      }
      uVar4 = 1;
      if (plVar6 == plVar1 + (uVar2 & 0xfffffffffffffffe)) break;
      plVar3 = (long *)*plVar6;
      (**(code **)(*plVar3 + 0x18))(plVar3,*puVar7);
      if ((int)plVar3 == 0) {
        return 0;
      }
      uVar2 = *(ulong *)(param_1 + 0x48);
      plVar3 = *(long **)(param_1 + 0x50);
      plVar6 = plVar6 + 2;
      puVar7 = puVar7 + 2;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10756fcec; end: 10756fdaf;  */

void FUN_10756fcec(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_58;
  long lStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = (undefined8 *)(param_2 + 0x50);
  if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
    puVar4 = (undefined8 *)*puVar4;
  }
  puVar1 = puVar4 + (*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffe);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    (**(code **)(*(long *)*puVar4 + 0x20))(&lStack_58);
    lVar2 = lStack_50;
    for (lVar3 = lStack_58; lVar3 != lVar2; lVar3 = lVar3 + 0x78) {
      FUN_10756c12c(param_1,lVar3);
    }
    func_0x00010756c400(&lStack_58);
  }
  return;
}



/* Entry: 10756fdb0; end: 10756fe1f;  */

void FUN_10756fdb0(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (*(ulong *)(param_2 + 0x48) >> 1 <= uVar2) {
      *param_1 = 0;
      param_1[0x38] = 0;
      return;
    }
    puVar1 = (undefined8 *)(param_2 + 0x48);
    FUN_1075703dc(puVar1,uVar2);
    (**(code **)(*(long *)*puVar1 + 0x50))(param_1);
    if ((param_1[0x38] & 1) != 0) break;
    func_0x00010756c434(param_1);
    uVar2 = uVar2 + 1;
  }
  return;
}



/* Entry: 10756fe20; end: 107570257;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10756fe20(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *******ppppppplVar7;
  long lVar8;
  long *plVar9;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [16];
  byte bStack_178;
  undefined8 auStack_170 [2];
  byte bStack_160;
  undefined8 auStack_158 [3];
  ulong uStack_140;
  long *******appppppplStack_138 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_b0;
  undefined4 uStack_a8;
  byte bStack_a0;
  byte bStack_98;
  undefined8 uStack_68;
  
  puVar6 = &uStack_1c0;
  func_0x0001075704c8();
  plVar3 = param_1 + 1;
  uStack_68 = extraout_x8;
  (**(code **)(*param_1 + 0x20))();
  uVar2 = (long)plVar3 - 1U == 0;
  if (plVar3 == (long *)0x0 || (bool)uVar2) {
    func_0x00010002b838(auStack_158,&UNK_10f417abc);
    FUN_10756a668();
    puVar6 = auStack_158;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 0;
    goto LAB_107570128;
  }
  auStack_170[0]._0_1_ = 0;
  bStack_160 = 0;
  FUN_10756f360(auStack_188,unaff_x21 + 0x18);
  if (bStack_178 == 1) {
    uStack_a8 = 6;
    puVar4 = auStack_188;
    FUN_1074d1ed0(puVar4,&lStack_b0);
    func_0x0001072c9884(&lStack_b0);
    if ((int)puVar4 != 0) {
      FUN_107570410(auStack_170,auStack_188);
    }
  }
  uStack_140 = 0;
  FUN_107539a30(&uStack_140,(long)plVar3 - 1U);
  for (plVar9 = (long *)0x1; uVar2 = plVar9 == plVar3, plVar9 < plVar3;
      plVar9 = (long *)((long)plVar9 + 1)) {
    (**(code **)(*unaff_x22 + 0x28))(&uStack_f8,param_1 + 1,plVar9);
    FUN_10756f360(auStack_1a0,auStack_170);
    uStack_1b0 = CONCAT35(uStack_1b0._5_3_,0x100000002);
    func_0x00010777067c(&lStack_b0);
    func_0x0001072c9854(auStack_1a0);
    func_0x0001072f5f6c(&uStack_f8);
    bVar1 = bStack_a0;
    if ((bStack_a0 == 1) && ((bStack_160 & 1) == 0)) {
      FUN_10756f300(auStack_170,lStack_b0 + 0x10);
      bVar1 = bStack_a0 & 1;
    }
    if (bVar1 != 0) {
      func_0x0001072c995c(&uStack_140,&lStack_b0);
    }
    func_0x0001072c95d0(&lStack_b0);
  }
  if ((bStack_178 & 1) == 0) {
LAB_10757001c:
    if ((*(byte *)(unaff_x21 + 0x51) & 1) != 0) {
      func_0x0001072c9ff4(&uStack_1c0,auStack_170);
      goto LAB_107570030;
    }
    func_0x0001072c9ff4(&uStack_1b0,auStack_170);
LAB_1075700bc:
    lVar5 = 0xa8;
    __Znwm();
    lVar8 = lVar5;
    func_0x000107570540();
    func_0x0001072c9bc0(&lStack_b0,&uStack_140);
    func_0x0001072c9e10(lVar8 + 0x18,&uStack_1b0,&lStack_b0);
    func_0x0001075704e8();
    *unaff_x19 = lVar8 + 0x18;
    unaff_x19[1] = lVar5;
    uStack_f8 = 0;
    uStack_f0 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 1;
    func_0x0001075704a0(&uStack_f8);
    puVar6 = &uStack_1b0;
  }
  else {
    uVar2 = (uStack_140 & 1) == 0;
    ppppppplVar7 = (long *******)appppppplStack_138;
    if (!(bool)uVar2) {
      ppppppplVar7 = appppppplStack_138[0];
    }
    lVar8 = (uStack_140 & 0x1ffffffffffffffe) << 3;
    do {
      if (lVar8 == 0) goto LAB_10757001c;
      FUN_10756f724(&lStack_b0,auStack_188,*ppppppplVar7 + 2);
      bVar1 = bStack_98;
      func_0x0001001148fc(&lStack_b0);
      lVar8 = lVar8 + -0x10;
      ppppppplVar7 = ppppppplVar7 + 2;
    } while ((bVar1 & 1) == 0);
    if ((*(byte *)(unaff_x21 + 0x51) & 1) == 0) {
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,6);
      goto LAB_1075700bc;
    }
    uStack_1b8 = 6;
LAB_107570030:
    lVar5 = 0xa8;
    __Znwm();
    lVar8 = lVar5;
    func_0x000107570540();
    func_0x0001072c9bc0(&uStack_f8,&uStack_140);
    func_0x0001072c9bc0(&lStack_b0,&uStack_f8);
    func_0x0001072c9e10(lVar8 + 0x18,&uStack_1c0,&lStack_b0);
    func_0x0001075704e8();
    func_0x0001002a8234(lVar5 + 0x40,unaff_x20 + 0x40);
    func_0x0001072c9c34(&uStack_f8);
    *unaff_x19 = lVar8 + 0x18;
    unaff_x19[1] = lVar5;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    *(undefined1 *)(unaff_x19 + 2) = 1;
    func_0x0001075704a0(&uStack_1b0);
  }
  func_0x0001072c9884(puVar6);
  func_0x0001072c9c34(&uStack_140);
  func_0x0001072c9854(auStack_188);
  puVar6 = auStack_170;
  func_0x0001072c9854();
LAB_107570128:
  func_0x00010757052c(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001072c9854(auStack_188);
    func_0x0001072c9854(auStack_170);
    __Unwind_Resume();
    *puVar6 = &PTR_FUN_1109be438;
    func_0x0001072c9c34(puVar6 + 9);
    *puVar6 = &PTR_DAT_1109d4888;
    func_0x0001001148fc(puVar6 + 5);
    func_0x0001072c9884(puVar6 + 2);
    return puVar6;
  }
  return puVar6;
}



/* Entry: 107570258; end: 10757025b;  */

undefined8 * FUN_107570258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be438;
  func_0x0001072c9c34(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10757025c; end: 10757026f;  */

void FUN_10757025c(void)

{
  FUN_107570438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107570270; end: 107570283;  */

ulong FUN_107570270(long *param_1)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  undefined ***pppuStack_78;
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ****ppppuStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  plVar1 = param_1;
  func_0x0001074d3a84();
  (**(code **)(*plVar1 + 0x40))(&ppuStack_70);
  pppuVar2 = &ppuStack_70;
  FUN_1074d25b4();
  func_0x000104c2f714(&ppuStack_70);
  lStack_80 = 0;
  ppuStack_70 = &PTR_FUN_1109b53e8;
  ppppuStack_60 = &pppuStack_78;
  pppuStack_78 = pppuVar2;
  puStack_68 = (undefined1 *)&lStack_80;
  pppuStack_58 = &ppuStack_70;
  func_0x0001074d4398(*(undefined8 *)(*param_1 + 0x10));
  pppuVar3 = &ppuStack_70;
  FUN_10745df78(pppuVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    uVar4 = (long)pppuVar2 * 0x1000 + ((ulong)pppuVar2 >> 4) + lStack_80 + -0x61c8864680b583eb ^
            (ulong)pppuVar2;
    return (long)pppuStack_78 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb ^ uVar4;
  }
  ___stack_chk_fail();
  func_0x0001074d4ca8();
  FUN_10745df78();
  func_0x0001074d3bc4();
  pcStack_88 = FUN_1074d25b4;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,pppuVar3);
  return uStack_98;
}



/* Entry: 107570284; end: 1075702df;  */

void FUN_107570284(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x70);
  if (*(int *)(param_1 + 0x70) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x70) != 0xffffffff) {
        func_0x000107285594((&PTR_DAT_110996f18)[*(uint *)(param_1 + 0x70)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1109be3c8)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 1075702e0; end: 1075702ef;  */

void FUN_1075702e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x70) != 0) {
    FUN_107570328(&stack0xffffffffffffffe0);
    return;
  }
  func_0x000104c342bc(param_2,param_3);
  func_0x000104c2f698();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 1075702f0; end: 107570327;  */

void FUN_1075702f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_107570328(&stack0xffffffffffffffe0);
    return;
  }
  func_0x000104c342bc(param_2,param_3);
  func_0x000104c2f698();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 107570328; end: 107570333;  */

void FUN_107570328(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107570520(*param_1,param_1[1]);
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x70) = 0;
  return;
}



/* Entry: 107570334; end: 10757035b;  */

void FUN_107570334(void)

{
  long unaff_x20;
  
  func_0x000107570520();
  func_0x000104c318bc();
  *(undefined4 *)(unaff_x20 + 0x70) = 0;
  return;
}



/* Entry: 10757035c; end: 107570363;  */

undefined1 * FUN_10757035c(long *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  
  if (*(int *)(*param_1 + 0x70) == 1) {
    func_0x00010726cdc4((undefined1 *)(param_2 + 8),param_3 + 8);
    return (undefined1 *)(param_2 + 8);
  }
  puVar1 = &stack0xffffffffffffffe0;
  FUN_1075703a0(&stack0xffffffffffffffe0);
  return puVar1;
}



/* Entry: 107570364; end: 10757039f;  */

undefined1 * FUN_107570364(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x70) == 1) {
    func_0x00010726cdc4((undefined1 *)(param_2 + 8),param_3 + 8);
    return (undefined1 *)(param_2 + 8);
  }
  puVar1 = &stack0xffffffffffffffe0;
  FUN_1075703a0(&stack0xffffffffffffffe0);
  return puVar1;
}



/* Entry: 1075703a0; end: 1075703ab;  */

void FUN_1075703a0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107570520(*param_1,param_1[1]);
  func_0x00010726cc04(unaff_x20 + 8,unaff_x19 + 8);
  *(undefined4 *)(unaff_x20 + 0x70) = 1;
  return;
}



/* Entry: 1075703ac; end: 1075703db;  */

void FUN_1075703ac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107570520();
  func_0x00010726cc04(unaff_x20 + 8,unaff_x19 + 8);
  *(undefined4 *)(unaff_x20 + 0x70) = 1;
  return;
}



/* Entry: 1075703dc; end: 10757040f;  */

/* WARNING: Possible PIC construction at 0x00010756bb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010756bb58) */

ulong * FUN_1075703dc(ulong *param_1,ulong param_2)

{
  char cVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  undefined1 **ppuVar5;
  code *pcVar6;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 < *param_1 >> 1) {
    puVar4 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    return puVar4 + param_2 * 2;
  }
  puVar2 = &stack0xfffffffffffffff0;
  ppuVar5 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (ulong *)&UNK_10f417c7d;
  pcVar6 = FUN_107570410;
  func_0x00010ae87d60();
  cVar1 = (char)puVar4[2];
  if (cVar1 == *(char *)(param_2 + 0x10)) {
    if (cVar1 == '\0') {
      return puVar4;
    }
    if ((int)puVar4[1] != -1 || *(int *)(param_2 + 8) != -1) {
      if (*(int *)(param_2 + 8) == -1) goto code_r0x0001072c9884;
      pcStack_18 = FUN_107570410;
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00010756d3d0();
    }
    return puVar4;
  }
  if (cVar1 == '\0') {
    pcStack_18 = FUN_107570410;
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x0001072c9ff4();
    *(undefined1 *)(puVar4 + 2) = 1;
    return puVar4;
  }
  if ((char)puVar4[2] != '\x01') {
    return puVar4;
  }
  puVar2 = &stack0xffffffffffffffd0;
  pcStack_18 = FUN_107570410;
  ppuVar5 = &puStack_20;
  pcVar6 = (code *)0x10756bb58;
  unaff_x19 = puVar4;
  puStack_20 = &stack0xfffffffffffffff0;
code_r0x0001072c9884:
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(ulong **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar5;
  *(code **)(puVar2 + -8) = pcVar6;
  puVar3 = puVar4;
  if ((uint)puVar4[1] != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_DAT_11099acf0)[(uint)puVar4[1]]);
  }
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  return puVar3;
}



/* Entry: 107570410; end: 107570437;  */

/* WARNING: Possible PIC construction at 0x00010756bb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010756bb58) */

void FUN_107570410(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != *(char *)(param_2 + 0x10)) {
    if (cVar1 == '\0') {
      func_0x0001072c9ff4();
      *(undefined1 *)(param_1 + 0x10) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x10) != '\x01') {
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x10756bb58;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    lVar2 = param_2;
    param_2 = param_3;
    unaff_x19 = param_1;
code_r0x0001072c9884:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (*(uint *)(param_1 + 8) != 0xffffffff) {
      func_0x0001072ce6fc((&PTR_DAT_11099acf0)[*(uint *)(param_1 + 8)],param_1,lVar2,param_2);
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 8) != -1 || *(int *)(param_2 + 8) != -1) {
    lVar2 = param_1;
    if (*(int *)(param_2 + 8) == -1) goto code_r0x0001072c9884;
    func_0x00010756d3d0();
  }
  return;
}



/* Entry: 107570438; end: 107570467;  */

undefined8 * FUN_107570438(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be438;
  func_0x0001072c9c34(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107570468; end: 10757046b;  */

void FUN_107570468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109be3e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


