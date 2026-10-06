/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10867393c; end: 108673973;  */

undefined8 FUN_10867393c(undefined8 param_1)

{
  func_0x000108675d34();
  FUN_108673b8c();
  return param_1;
}



/* Entry: 108673974; end: 108673997;  */

void FUN_108673974(long param_1,undefined8 param_2)

{
  func_0x000108675e6c(param_2,param_1 + 8);
  FUN_1086736bc();
  return;
}



/* Entry: 108673998; end: 108673b53;  */

void FUN_108673998(long param_1,long param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined **extraout_x8;
  long *plVar6;
  undefined4 *puVar7;
  undefined2 uStack_ca;
  undefined1 auStack_c8 [4];
  undefined1 uStack_c4;
  undefined1 auStack_c0 [40];
  uint5 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  bVar2 = *(byte *)(param_2 + 4);
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  for (puVar7 = *(undefined4 **)(param_1 + 0x28); puVar7 != puVar1; puVar7 = puVar7 + 0x36) {
    plVar6 = *(long **)(param_1 + 8);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_110a609a8;
    uStack_70 = 0x222;
    pppuVar5 = &ppuStack_90;
    func_0x0001086759d0(pppuVar5);
    FUN_108671688();
    _uStack_98 = *(long *)(param_1 + 0x40) * 1000;
    (**(code **)(*plVar6 + 0x18))(plVar6,pppuVar5,&uStack_98);
    func_0x000108675738();
    plVar6 = *(long **)(param_1 + 8);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x000108675818();
    uStack_70 = 0x222;
    pppuVar5 = &ppuStack_90;
    ppuStack_90 = extraout_x8;
    func_0x0001086759d0(pppuVar5);
    FUN_108671688();
    func_0x000107c2884c(auStack_c0,pppuVar5);
    (**(code **)(*plVar6 + 0x50))(plVar6,auStack_c0);
    func_0x000107c2882c(auStack_c0);
    func_0x000108675738();
    uVar4 = (ulong)ppuStack_90 >> 0x28;
    uVar3 = (uint)ppuStack_90;
    ppuStack_90._0_5_ = (uint5)(uVar3 & 0xffffff00);
    ppuStack_90 = (undefined **)CONCAT35((int3)uVar4,(uint5)ppuStack_90);
    uVar4 = (ulong)_uStack_98 >> 0x28;
    uVar3 = (uint)_uStack_98;
    uStack_98 = (uint5)(uVar3 & 0xffffff00);
    _uStack_98 = CONCAT35((int3)uVar4,uStack_98);
    auStack_c8[0] = 0;
    uStack_c4 = 0;
    uStack_ca = 0;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))
              (*(long **)(param_1 + 0x18),5,bVar2 ^ 1,param_1 + 0x48,(long)*(int *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x40),*puVar7,puVar7 + 2,puVar7 + 10,&ppuStack_90,
               puVar7 + 0x14,puVar7 + 0xe,&uStack_98,auStack_c8,puVar7 + 0x1a,&uStack_ca);
  }
  return;
}



/* Entry: 108673b54; end: 108673b7f;  */

void FUN_108673b54(undefined8 param_1,undefined8 param_2)

{
  func_0x000108675d50(param_2,param_1,&PTR_DAT_110a61868);
  func_0x000108675aa8();
  return;
}



/* Entry: 108673b80; end: 108673b8b;  */

undefined ** FUN_108673b80(void)

{
  return &PTR_DAT_110a61868;
}



/* Entry: 108673b8c; end: 108673bab;  */

void FUN_108673b8c(void)

{
  func_0x000108675e6c();
  FUN_1086736bc();
  return;
}



/* Entry: 108673bac; end: 108673c53;  */

void FUN_108673bac(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000108675850();
  if (extraout_x8 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c27994(unaff_x19 + 0x28,param_2 + 0x28);
  func_0x00010731e2b0(unaff_x19 + 0x40,param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(unaff_x19 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
  return;
}



/* Entry: 108673c54; end: 108673c73;  */

void FUN_108673c54(void)

{
  func_0x000108675e58();
  FUN_1086723b4();
  return;
}



/* Entry: 108673c74; end: 108673c87;  */

void FUN_108673c74(void)

{
  FUN_108673c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108673c88; end: 108673cc3;  */

undefined8 FUN_108673c88(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm(0x78);
  FUN_108673fc8();
  return uVar1;
}



/* Entry: 108673cc4; end: 108673ce7;  */

void FUN_108673cc4(long param_1,undefined8 param_2)

{
  func_0x000108675e58(param_2,param_1 + 8);
  FUN_108673bac();
  return;
}



/* Entry: 108673ce8; end: 108673f8f;  */

void FUN_108673ce8(long param_1,long param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined2 uStack_16a;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [4];
  undefined1 uStack_14c;
  undefined1 auStack_148 [4];
  undefined1 uStack_144;
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [4];
  undefined1 uStack_10c;
  undefined1 auStack_108 [24];
  undefined1 uStack_f0;
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [48];
  
  uVar4 = 0x30011;
  if (*(char *)(param_2 + 4) != '\0') {
    uVar4 = 0x30012;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_FUN_110a609a8;
  uStack_b0 = 0;
  uStack_98 = 0x21f;
  pppuVar5 = &ppuStack_b8;
  FUN_108659af8(pppuVar5,uVar4);
  FUN_1086722fc();
  func_0x000107c2884c(auStack_90,pppuVar5);
  func_0x000107c2882c(&ppuStack_b8);
  uStack_d0 = 0;
  uStack_c8 = 0;
  ppuStack_e0 = &PTR_FUN_110a609a8;
  uStack_d8 = 0;
  uStack_c0 = 0x21f;
  pppuVar5 = &ppuStack_e0;
  FUN_108659af8(pppuVar5,uVar4);
  FUN_1086722fc();
  func_0x000107c2884c(&ppuStack_b8,pppuVar5);
  func_0x000108675c80();
  lStack_e8 = *(long *)(param_1 + 0x28) * 1000;
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),auStack_90,&lStack_e8);
  plVar6 = *(long **)(param_1 + 8);
  func_0x000107c2884c(&ppuStack_e0,&ppuStack_b8);
  (**(code **)(*plVar6 + 0x50))(plVar6,&ppuStack_e0);
  func_0x000108675c80();
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = *(undefined4 **)(param_1 + 0x50);
    for (puVar8 = *(undefined4 **)(param_1 + 0x48); puVar8 != puVar1; puVar8 = puVar8 + 1) {
      uVar4 = *puVar8;
      plVar6 = *(long **)(param_1 + 0x18);
      bVar2 = *(byte *)(param_2 + 4);
      iVar3 = *(int *)(param_1 + 0x60);
      auStack_108[0] = 0;
      uStack_f0 = 0;
      auStack_110[0] = 0;
      uStack_10c = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x000107c278b8(auStack_140,"");
      auStack_148[0] = 0;
      uStack_144 = 0;
      auStack_150[0] = 0;
      uStack_14c = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_16a = 0;
      (**(code **)(*plVar6 + 0x10))
                (plVar6,4,bVar2 ^ 1,param_1 + 0x30,(long)iVar3,uVar7,uVar4,auStack_108,
                 param_1 + 0x68,auStack_110,&uStack_128,auStack_140,auStack_148,auStack_150,
                 &uStack_168,&uStack_16a);
      func_0x000107c27a04(&uStack_168);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
      func_0x000107c27a04(&uStack_128);
      func_0x000107c279c4(auStack_108);
    }
  }
  func_0x000107c2882c(&ppuStack_b8);
  func_0x000107c2882c(auStack_90);
  return;
}



/* Entry: 108673f90; end: 108673fbb;  */

void FUN_108673f90(undefined8 param_1,undefined8 param_2)

{
  func_0x000108675d50(param_2,param_1,&PTR_DAT_110a618e8);
  func_0x000108675aa8();
  return;
}



/* Entry: 108673fbc; end: 108673fc7;  */

undefined ** FUN_108673fbc(void)

{
  return &PTR_DAT_110a618e8;
}



/* Entry: 108673fc8; end: 108673fe7;  */

void FUN_108673fc8(void)

{
  func_0x000108675e58();
  FUN_108673bac();
  return;
}



/* Entry: 108673fe8; end: 10867403b;  */

long * FUN_108673fe8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10867403c(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10867403c; end: 108674063;  */

long FUN_10867403c(long param_1)

{
  long lStack_28;
  
  func_0x00010731e26c(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 108674064; end: 10867407b;  */

void FUN_108674064(long *param_1,long param_2)

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



/* Entry: 10867407c; end: 1086740bf;  */

long * FUN_10867407c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10867403c(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1086740c0; end: 10867446f;  */

void FUN_1086740c0(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined1 in_ZR;
  long *plVar3;
  uint extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar4;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long *plVar5;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar9 = param_1;
  func_0x0001086755b8();
  plVar1 = (long *)(lVar9 + 600);
  plVar5 = (long *)(lVar9 + 0x2b8);
  plVar7 = (long *)(lVar9 + 0x2e8);
  if ((*(byte *)(lVar9 + 0x318) & 1) == 0) {
    param_2 = plVar1;
    FUN_10866b034();
    plVar3 = (long *)(param_1 + 0x1f8);
    FUN_10866e480(plVar3);
    func_0x000108675740();
    func_0x000108675ba0();
    if ((*(byte *)(param_1 + 0x250) & 1) == 0) {
      func_0x000108675598();
      goto LAB_1086742dc;
    }
    func_0x000107c2825c(param_1 + 0x2d0);
    func_0x000108675918();
    uVar4 = extraout_x8_00;
    if (extraout_x9 != 0) {
      do {
        func_0x0001086757cc();
        uVar4 = extraout_x8_01;
      } while (extraout_w11 != 0);
    }
    *(undefined8 *)(param_1 + 0x298) = uVar4;
    func_0x000107c27994(param_1 + 0x2a0,*(undefined8 *)(param_1 + 0x310));
    FUN_1086708f8(plVar7);
    func_0x0001086758c4(plVar5);
    puVar10 = *(undefined8 **)(param_1 + 0x2c8);
    puVar10[2] = 0;
    func_0x0001086756f4();
    *puVar10 = extraout_x8_02;
    puVar10[1] = 0;
    if (*(long *)(param_1 + 0x2f0) != 0) {
      do {
        func_0x00010867548c();
      } while (extraout_w10 != 0);
    }
    plVar3 = plVar1;
    FUN_108673434(plVar1,param_1 + 0x288);
    func_0x000108675c24();
    func_0x000108675d8c();
    *plVar3 = extraout_x8_03;
    lVar8 = *plVar1;
    plVar3[2] = *(long *)(lVar9 + 0x260);
    plVar3[1] = lVar8;
    *plVar1 = 0;
    *(undefined8 *)(lVar9 + 0x260) = 0;
    plVar3[3] = *(long *)(param_1 + 0x268);
    func_0x000108675c18();
    func_0x000108675c0c(puVar10 + 3);
    lVar11 = *(long *)(param_1 + 0x308);
    func_0x000108675998();
    FUN_108670918(plVar1);
    func_0x000108675990();
    lVar8 = *(long *)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(long *)(param_1 + 0x2f8) = lVar8 + 0x18;
    *(long *)(param_1 + 0x300) = lVar8;
    func_0x00010865f950(plVar5);
    plVar3 = *(long **)(lVar11 + 0x20);
    if (lVar8 != 0) {
      do {
        func_0x00010867548c();
      } while (extraout_w10_00 != 0);
    }
    param_2 = *(long **)(param_1 + 0x310);
    func_0x000108675bbc(*(undefined8 *)(*plVar3 + 0x300));
    func_0x0001086759a0();
    *plVar5 = *(long *)(*plVar7 + 8);
    do {
      func_0x00010867549c();
    } while (extraout_w10_01 != 0);
    *plVar1 = *plVar5;
    do {
      func_0x00010867549c();
    } while (extraout_w10_02 != 0);
    func_0x00010867571c(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(lVar9 + 0x318) = 1;
      lVar9 = *plVar1;
      func_0x000108675440();
      lVar8 = *plVar3;
      if (lVar8 == 0) {
        func_0x000107c3a5c0();
        lVar8 = *plVar3;
      }
      plVar5 = (long *)(lVar9 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001086755a8();
          plVar5 = extraout_x8_05;
          uVar2 = extraout_w10_04;
          uVar6 = extraout_w11_01;
        }
        else {
          func_0x000108675864();
          plVar5 = extraout_x8_04;
          uVar2 = extraout_w10_03;
          uVar6 = extraout_w11_00;
        }
        if ((uVar6 & 1) != 0) {
          plVar7 = *(long **)(lVar9 + 0x90);
          func_0x000108675514();
          if ((bool)in_ZR) {
            func_0x0001086754ac();
            func_0x00010867547c();
            func_0x000108675408();
            *(long **)(lVar9 + 0x90) = plVar3;
          }
          func_0x000108675504();
          *(long *)(extraout_x8_06 + 0x20) = lVar8;
          func_0x0001086754d4(*(undefined8 *)(lVar9 + 0x90));
          *(undefined8 *)(lVar9 + 0x10) = 0;
          goto LAB_1086742ec;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28a1c(plVar1);
  func_0x000108675740();
  func_0x000108675ba8();
  func_0x000108675598();
  func_0x0001086758b4();
  plVar3 = plVar7;
  FUN_10867340c(plVar7);
  func_0x000108675b98();
LAB_1086742dc:
  func_0x0001086758e8();
  func_0x0001086755d0();
  while( true ) {
    func_0x000108675590();
    func_0x0001086755c8();
LAB_1086742ec:
    func_0x0001086754e4(extraout_x8);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)param_2 != 0) goto LAB_108674364;
    do {
      __Unwind_Resume(plVar3);
LAB_108674364:
      func_0x000104bd46a0();
    } while ((int)param_2 == 0);
    func_0x0001086759a0();
    func_0x0001086758b4();
    FUN_10867340c(plVar7);
    func_0x000108675b98();
    func_0x0001086758e8();
    func_0x0001086755d0();
    ___cxa_begin_catch();
    func_0x0001086755d8();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 108674470; end: 1086744cf;  */

void FUN_108674470(long param_1)

{
  if (*(char *)(param_1 + 0x318) == '\x01') {
    func_0x000107c27f9c(param_1 + 600);
    func_0x000107c27f9c(param_1 + 0x2b8);
    func_0x0001086758b4();
    FUN_10867340c(param_1 + 0x2e8);
    func_0x000108675b98();
    func_0x0001086758e8();
  }
  else {
    func_0x000107c27f9c(param_1 + 600);
    func_0x000108675ba0();
  }
  func_0x0001086755d0();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086744d0; end: 108674f63;  */

void FUN_1086744d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  char cVar10;
  code *pcVar11;
  undefined1 in_ZR;
  bool bVar12;
  bool bVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puVar18;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined8 *extraout_x8_11;
  uint extraout_w9;
  uint uVar19;
  long *extraout_x9;
  ulong uVar20;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  ulong extraout_x10;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  
  plVar14 = param_1;
  func_0x0001086755b8();
  plVar21 = plVar14 + 0x3f;
  plVar1 = plVar14 + 0x5a;
  plVar2 = plVar14 + 0x72;
  plVar3 = plVar14 + 0x7e;
  plVar4 = plVar14 + 0x86;
  plVar5 = plVar14 + 0x96;
  if ((*(byte *)((long)plVar14 + 0x50e) & 1) == 0) {
    plVar17 = param_1 + 0x40;
    plVar23 = param_1 + 0x6d;
    plVar15 = plVar14;
    func_0x000108675440();
    func_0x000108675818();
    do {
      plVar16 = plVar3;
      FUN_10866b034(plVar3);
      FUN_10866e480(plVar2,plVar16);
      func_0x000108675ba8();
      func_0x0001086758f0();
      if ((*(byte *)(param_1 + 0x7d) & 1) == 0) {
        func_0x000107c2825c(param_1 + 0x93);
        func_0x000108675764();
        (**(code **)(extraout_x8_01 + 0x28))(plVar3);
        plVar16 = *(long **)(param_1[0x99] + 0x30);
        func_0x000108675e38(plVar17);
        func_0x000108675840(extraout_x8_00);
        func_0x00010867565c(plVar21);
        FUN_108671688();
        func_0x000108675b28();
        (**(code **)(*plVar16 + 0x18))(plVar16);
        func_0x0001086757f0();
        *plVar17 = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        func_0x000108675818();
        func_0x000108675840();
        func_0x00010867565c();
        FUN_108671688();
        func_0x000107c2884c(param_1 + 0x8b,plVar16);
        func_0x000108675894();
        func_0x000108675748();
        lVar22 = param_1[0x99];
        func_0x000108675a58();
        func_0x0001086757f0();
        plVar16 = *(long **)(lVar22 + 0x50);
        func_0x000108675dfc();
        *(undefined1 *)((long)param_1 + 0x4ec) = extraout_w8;
        plVar14[0x40] = 0;
        plVar14[0x41] = 0;
        *plVar21 = 0;
        func_0x000108675ca4(plVar4);
        func_0x000108675870();
        (**(code **)(*plVar16 + 0x10))(plVar16,5,0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(plVar4);
        func_0x000108675a40();
        func_0x000107c279c4(plVar3);
      }
      else {
        FUN_108679724(plVar3,plVar2);
        func_0x000108675b64();
        plVar16 = param_1 + 0x77;
        if (!(bool)in_ZR) {
          plVar16 = extraout_x9;
        }
        plVar7 = plVar16 + (int)param_1[0x78];
        for (; plVar16 != plVar7; plVar16 = plVar16 + 1) {
          puVar18 = (ulong *)(*plVar16 + 0x18);
          uVar20 = *puVar18;
          if ((uVar20 & 1) != 0) {
            puVar18 = (ulong *)(uVar20 + 7);
          }
          for (lVar22 = (long)*(int *)(*plVar16 + 0x20) << 3; lVar22 != 0; lVar22 = lVar22 + -8) {
            ppuVar8 = &PTR_PTR_11326cb58;
            if (*(undefined ***)(*puVar18 + 0x30) != (undefined **)0x0) {
              ppuVar8 = *(undefined ***)(*puVar18 + 0x30);
            }
            func_0x000100696384(plVar21,ppuVar8);
            func_0x000108675d3c();
            func_0x000108675a38();
            puVar18 = puVar18 + 1;
          }
        }
        *(int *)(param_1 + 0x3f) = (int)param_1[0xa1];
        func_0x000104be0ccc(plVar17,param_1 + 0x5e);
        param_1[0x44] = *plVar3;
        *(char *)(param_1 + 0x45) = (char)plVar14[0x7f];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (param_1 + 0x46,param_1 + 0x80);
        func_0x0001086759e8();
        func_0x000107c279ac(param_1 + 0x4c,plVar23);
        plVar16 = plVar2;
        FUN_10866ebe4(param_1 + 0x4f);
        uVar20 = param_1[0x97];
        if (uVar20 < (ulong)param_1[0x98]) {
          func_0x000108675a80(uVar20);
          lVar22 = uVar20 + 0xd8;
        }
        else {
          lVar22 = uVar20 - *plVar5;
          uVar20 = lVar22 / 0xd8 + 1;
          if (0x12f684bda12f684 < uVar20) {
            FUN_108672ba4();
            goto LAB_108674ce8;
          }
          bVar13 = uVar20 <= (ulong)(((param_1[0x98] - *plVar5) / 0xd8) * 2);
          func_0x000108675b10();
          lVar25 = extraout_x9_00;
          if (bVar13) {
            lVar25 = 0x12f684bda12f684;
          }
          param_1[0x8a] = (long)(param_1 + 0x98);
          if (lVar25 == 0) {
            plVar16 = (long *)0x0;
          }
          else {
            func_0x000108672c88();
          }
          param_1[0x86] = lVar25;
          lVar22 = lVar25 + lVar22;
          param_1[0x87] = lVar22;
          param_1[0x89] = lVar25 + (long)plVar16 * 0xd8;
          func_0x000108675a80(lVar22);
          param_1[0x88] = lVar22 + 0xd8;
          FUN_108672bb0(plVar5,plVar4);
          func_0x000108675bc8();
        }
        param_1[0x97] = lVar22;
        func_0x000108675a28();
        func_0x000108675a90();
        FUN_10866e508(plVar3);
      }
      func_0x00010866e4e8(plVar2);
      do {
        func_0x000108675c50();
        puVar6 = (undefined4 *)(param_1[0x9c] + 4);
        param_1[0x9c] = (long)puVar6;
        if (puVar6 == (undefined4 *)param_1[0x9b]) {
          in_ZR = param_1[0x96] == param_1[0x97];
          if ((bool)in_ZR) {
            func_0x000108675598();
            goto LAB_108674c40;
          }
          func_0x000107c2825c();
          func_0x000108675974();
          plVar14[0x7f] = 0;
          plVar14[0x80] = 0;
          *plVar3 = 0;
          plVar21 = plVar4;
          if ((long)plVar23 - (long)plVar4 != 0) {
            if (&PTR_PTR_11326cb58 < (undefined **)(((long)plVar23 - (long)plVar4) / 0xd8))
            goto LAB_108674cdc;
            func_0x0001086759c0();
            func_0x00010867563c();
            func_0x0001086759b0();
            plVar21 = (long *)param_1[0x96];
            plVar23 = (long *)param_1[0x97];
          }
          func_0x000108675a04();
          goto LAB_1086749d4;
        }
        uVar9 = *puVar6;
        *(undefined4 *)(param_1 + 0xa1) = uVar9;
        plVar16 = *(long **)param_1[0x99];
        FUN_10886db5c(plVar1,plVar16,param_1[0x9a],uVar9);
      } while (((((char)param_1[0x71] != '\x01') || ((*(byte *)(param_1 + 0x70) & 1) == 0)) ||
               (in_ZR = param_1[0x6d] == param_1[0x6e], (bool)in_ZR)) ||
              ((*(byte *)(param_1 + 0x61) & 1) == 0));
      func_0x000108675764();
      (**(code **)(extraout_x8_02 + 0x30))(plVar21);
      *plVar3 = *plVar21;
      do {
        func_0x00010867549c();
      } while (extraout_w10 != 0);
      func_0x00010867571c(*plVar3);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0x50e) = 0;
        lVar22 = *plVar3;
        lVar25 = *plVar15;
        if (lVar25 == 0) {
          func_0x000107c3a5c0();
          lVar25 = *plVar16;
        }
        plVar16 = (long *)(lVar22 + 0x10);
        do {
          if (*plVar16 == 0) {
            cVar10 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar13) {
              *plVar16 = 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
            in_ZR = cVar10 == '\0';
            uVar19 = 0;
            if ((bool)in_ZR) goto LAB_108674ca4;
          }
          else {
            func_0x000108675958();
            plVar16 = extraout_x8_03;
            uVar19 = extraout_w9;
            if ((extraout_x10 & 1) != 0) {
LAB_108674ca4:
              func_0x0001086757f8();
              if ((bool)in_ZR) {
                func_0x0001086754ac();
                func_0x0001086755f8();
                func_0x000108675550();
              }
              func_0x000108675a98();
              *(long *)(extraout_x8_10 + 0x20) = lVar25;
              goto LAB_108674cc4;
            }
          }
        } while ((uVar19 >> 1 & 1) == 0);
      }
    } while( true );
  }
  goto LAB_108674c10;
LAB_1086749d4:
  in_ZR = plVar21 == plVar23;
  if ((bool)in_ZR) goto LAB_108674a3c;
  uVar20 = param_1[0x7f];
  bVar12 = (ulong)param_1[0x80] <= uVar20;
  bVar13 = uVar20 == param_1[0x80];
  if (bVar12) {
    func_0x000108675ac8();
    if (bVar12 && !bVar13) {
      FUN_108672d94();
      goto LAB_108674ce8;
    }
    func_0x0001086756dc();
    func_0x000108675bf4();
    func_0x000108675964();
    func_0x00010867563c();
    lVar22 = param_1[0x7f];
    func_0x0001086759b0();
  }
  else {
    func_0x000108675964();
    lVar22 = uVar20 + 0x58;
  }
  param_1[0x7f] = lVar22;
  plVar21 = plVar21 + 0x1b;
  goto LAB_1086749d4;
LAB_108674a3c:
  func_0x000108675d6c();
  if (extraout_x9_01 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000108675e80();
  if (extraout_x8_04 != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10_01 != 0);
  }
  func_0x000108675ae0();
  func_0x000108675e38(plVar5);
  param_1[0x46] = extraout_x11;
  func_0x000107c27994(param_1 + 0x47);
  lVar22 = NEON_rev64(param_1[0xa0],4);
  param_1[0x4a] = lVar22;
  FUN_1086708f8(plVar14 + 0x90);
  plVar21 = plVar2;
  func_0x0001086758c4();
  puVar24 = (undefined8 *)param_1[0x74];
  puVar24[2] = 0;
  func_0x0001086756f4();
  *puVar24 = extraout_x8_05;
  puVar24[1] = 0;
  if (param_1[0x91] != 0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10_02 != 0);
  }
  func_0x000108675c44();
  func_0x000108675d34();
  lVar22 = param_1[0x5a];
  lVar25 = param_1[0x5c];
  plVar21[2] = param_1[0x5b];
  plVar21[1] = lVar22;
  *plVar21 = (long)&PTR_SUB_110a61808;
  plVar14[0x5b] = 0;
  *plVar1 = 0;
  func_0x0001086758f8(0,lVar25);
  func_0x000108675d98();
  func_0x000108675cc4();
  plVar21[0xc] = param_1[0x65];
  func_0x000108675cb8(puVar24 + 3);
  lVar22 = param_1[0x99];
  func_0x0001086759a8();
  func_0x00010867175c(plVar1);
  func_0x000108675a60();
  func_0x000108675b4c();
  func_0x00010865f950(plVar2);
  plVar17 = *(long **)(lVar22 + 0x20);
  if (plVar21 + 1 != (long *)0x0) {
    do {
      func_0x00010867548c();
    } while (extraout_w10_03 != 0);
  }
  (**(code **)(*plVar17 + 0x310))();
  func_0x0001086759b8();
  *plVar2 = *(long *)(plVar14[0x90] + 8);
  do {
    func_0x00010867549c();
  } while (extraout_w10_04 != 0);
  *plVar1 = *plVar2;
  do {
    func_0x00010867549c();
  } while (extraout_w10_05 != 0);
  func_0x00010867571c(*plVar1);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x50e) = 1;
    lVar22 = *plVar15;
    if (lVar22 == 0) {
      func_0x000107c3a5c0();
      lVar22 = *plVar17;
    }
    func_0x000108675b40();
    plVar21 = extraout_x8_06;
    do {
      if (*plVar21 == 0) {
        func_0x0001086755a8();
        plVar21 = extraout_x8_08;
        uVar19 = extraout_w10_07;
        uVar20 = extraout_x11_01;
      }
      else {
        func_0x000108675864();
        plVar21 = extraout_x8_07;
        uVar19 = extraout_w10_06;
        uVar20 = extraout_x11_00;
      }
      if ((uVar20 & 1) != 0) {
        func_0x0001086757f8();
        if ((bool)in_ZR) {
          func_0x0001086754ac();
          func_0x0001086755f8();
          func_0x000108675550();
        }
        func_0x000108675a98();
        *(long *)(extraout_x8_09 + 0x20) = lVar22;
LAB_108674cc4:
        func_0x0001086754bc();
        *extraout_x8_11 = 0;
        goto LAB_108674c54;
      }
    } while ((uVar19 >> 1 & 1) == 0);
  }
LAB_108674c10:
  func_0x000107c28a1c(plVar1);
  func_0x000108675740();
  func_0x000107c27f9c(plVar2);
  func_0x000108675598();
  FUN_10865f960(plVar4);
  func_0x000108675a88();
  func_0x000108675a30();
  FUN_108672ffc(plVar3);
LAB_108674c40:
  func_0x000108671730(plVar5);
  func_0x0001086755d0();
  func_0x000108675590();
  func_0x0001086755c8();
LAB_108674c54:
  func_0x0001086754e4(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_108674cdc:
  FUN_108672d94();
LAB_108674ce8:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x108674cec);
  (*pcVar11)();
}



/* Entry: 108674f64; end: 108674fe3;  */

void FUN_108674f64(long param_1)

{
  if (*(char *)(param_1 + 0x50e) == '\x01') {
    func_0x000107c27f9c(param_1 + 0x2d0);
    func_0x000107c27f9c(param_1 + 0x390);
    FUN_10865f960(param_1 + 0x430);
    FUN_10867340c(param_1 + 0x480);
    func_0x00010867175c(param_1 + 0x1f8);
    FUN_108672ffc(param_1 + 0x3f0);
  }
  else {
    func_0x000107c27f9c(param_1 + 0x3f0);
    func_0x000108675c90();
    FUN_108669930(param_1 + 0x2d0);
  }
  func_0x000108671730(param_1 + 0x4b0);
  func_0x0001086755d0();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108674fe4; end: 10867503b;  */

void FUN_108674fe4(long param_1)

{
  func_0x000107c28834(param_1 + 0x38);
  func_0x000108675750();
  func_0x000108675714();
  func_0x0001086756c4();
  func_0x000108675598();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867503c; end: 108675063;  */

void FUN_10867503c(void)

{
  func_0x000108675d28();
  func_0x000108675714();
  func_0x0001086756c4();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108675064; end: 1086750df;  */

void FUN_108675064(long param_1)

{
  func_0x000107c28a1c(param_1 + 0x1f8);
  func_0x000108675c90();
  func_0x000108675c78();
  func_0x000108675598();
  func_0x0001086758cc();
  func_0x000108675c70();
  func_0x000108675b7c();
  func_0x000108675d58();
  func_0x0001086755d0();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086750e0; end: 10867511f;  */

void FUN_1086750e0(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x1f8);
  func_0x000108675c78();
  func_0x0001086758cc();
  func_0x000108675c70();
  func_0x000108675b7c();
  func_0x000108675d58();
  func_0x0001086755d0();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108675120; end: 108675177;  */

void FUN_108675120(long param_1)

{
  func_0x000107c28834(param_1 + 0x38);
  func_0x000108675750();
  func_0x000108675714();
  func_0x0001086756c4();
  func_0x000108675598();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108675178; end: 10867519f;  */

void FUN_108675178(void)

{
  func_0x000108675d28();
  func_0x000108675714();
  func_0x0001086756c4();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086751a0; end: 1086752a7;  */

void FUN_1086751a0(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar4;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000108675440();
  func_0x000108675d60();
  do {
    do {
      func_0x00010867596c();
      func_0x000108675618();
      func_0x0001086756bc();
      func_0x000108675d80();
      if (extraout_x9 == 0) {
        func_0x000108675598();
        func_0x0001086756d4();
        func_0x0001086756cc();
        func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        return;
      }
      plVar2 = *(long **)(param_1 + 0x128);
      func_0x000108675794();
      func_0x000108675bb0();
      func_0x000108675784();
      do {
        func_0x00010867549c();
      } while (extraout_w10 != 0);
      func_0x00010867571c(*(undefined8 *)(param_1 + 0x118));
    } while ((extraout_w8 >> 1 & 1) != 0);
    func_0x000108675774();
    if (unaff_x23 == 0) {
      func_0x000107c3a5c0();
      unaff_x23 = *plVar2;
    }
    plVar3 = (long *)(unaff_x22 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x0001086756ac();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w9_00;
        uVar4 = extraout_w10_01;
      }
      else {
        func_0x000108675958();
        plVar3 = extraout_x8;
        uVar1 = extraout_w9;
        uVar4 = extraout_w10_00;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108675514();
        if ((bool)in_ZR) {
          func_0x0001086754ac();
          func_0x00010867547c();
          func_0x000108675408();
          *(long **)(unaff_x22 + 0x90) = plVar2;
        }
        func_0x000108675450();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  } while( true );
}



/* Entry: 1086752a8; end: 1086752d3;  */

void FUN_1086752a8(void)

{
  func_0x000108675d1c();
  func_0x0001086756bc();
  func_0x0001086756d4();
  func_0x0001086756cc();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086752d4; end: 1086753db;  */

void FUN_1086752d4(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *plVar3;
  long *extraout_x8;
  long *extraout_x8_00;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar4;
  long unaff_x22;
  long unaff_x23;
  
  func_0x000108675440();
  func_0x000108675d60();
  do {
    do {
      func_0x00010867596c();
      func_0x000108675618();
      func_0x0001086756bc();
      func_0x000108675d80();
      if (extraout_x9 == 0) {
        func_0x000108675598();
        func_0x0001086756d4();
        func_0x0001086756cc();
        func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(param_1);
        return;
      }
      plVar2 = *(long **)(param_1 + 0x128);
      func_0x000108675794();
      func_0x000108675c64();
      func_0x000108675784();
      do {
        func_0x00010867549c();
      } while (extraout_w10 != 0);
      func_0x00010867571c(*(undefined8 *)(param_1 + 0x118));
    } while ((extraout_w8 >> 1 & 1) != 0);
    func_0x000108675774();
    if (unaff_x23 == 0) {
      func_0x000107c3a5c0();
      unaff_x23 = *plVar2;
    }
    plVar3 = (long *)(unaff_x22 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x0001086756ac();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w9_00;
        uVar4 = extraout_w10_01;
      }
      else {
        func_0x000108675958();
        plVar3 = extraout_x8;
        uVar1 = extraout_w9;
        uVar4 = extraout_w10_00;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000108675514();
        if ((bool)in_ZR) {
          func_0x0001086754ac();
          func_0x00010867547c();
          func_0x000108675408();
          *(long **)(unaff_x22 + 0x90) = plVar2;
        }
        func_0x000108675450();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  } while( true );
}



/* Entry: 1086753dc; end: 108675407;  */

void FUN_1086753dc(void)

{
  func_0x000108675d1c();
  func_0x0001086756bc();
  func_0x0001086756d4();
  func_0x0001086756cc();
  func_0x000108675590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108675408; end: 108675e93;  */

void FUN_108675408(undefined1 *param_1)

{
  long unaff_x20;
  undefined1 unaff_w21;
  
  *param_1 = unaff_w21;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 **)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 108675e94; end: 108675eef;  */

void FUN_108675e94(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 in_ZR;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x19;
  
  func_0x0001086786c4();
  func_0x000108678890();
  func_0x0001086786dc();
  func_0x000108678738();
  func_0x0001086787f8();
  func_0x000108678808();
  func_0x0001086786ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108678744();
  func_0x000108678808();
  func_0x000108678820();
  func_0x000107c31fe0();
  iVar9 = (int)*(undefined8 *)(param_1 + 0x48) + 0x10;
  func_0x000107c314e8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(unaff_x19 + 0x48) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar11 = *(long *)(unaff_x19 + 0x48);
    if (*(char *)(lVar11 + 0xb8) == '\x01') {
      func_0x000107c314e4(lVar11 + 0x10);
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_1086772d8();
      ___cxa_throw(uVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x108675fdc);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar11 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar12 = *(ulong *)(lVar11 + 0xa0);
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar2 / uVar12;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar2 - uVar7 * uVar12;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    FUN_108676580(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar4);
    *pbVar1 = 0;
    func_0x000107c314e4(*(long *)(unaff_x19 + 0x48) + 0x58);
  }
  return;
}



/* Entry: 108675ef0; end: 108676027;  */

void FUN_108675ef0(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x19;
  
  func_0x000107c31fe0();
  iVar9 = (int)*(undefined8 *)(param_1 + 0x48) + 0x10;
  func_0x000107c314e8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(unaff_x19 + 0x48) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar11 = *(long *)(unaff_x19 + 0x48);
    if (*(char *)(lVar11 + 0xb8) == '\x01') {
      func_0x000107c314e4(lVar11 + 0x10);
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_1086772d8();
      ___cxa_throw(uVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x108675fdc);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar11 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar12 = *(ulong *)(lVar11 + 0xa0);
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar2 / uVar12;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar2 - uVar7 * uVar12;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    FUN_108676580(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar4);
    *pbVar1 = 0;
    func_0x000107c314e4(*(long *)(unaff_x19 + 0x48) + 0x58);
  }
  return;
}



/* Entry: 108676028; end: 10867602f;  */

void FUN_108676028(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 in_ZR;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x19;
  
  param_1 = param_1 + -8;
  func_0x0001086786c4();
  func_0x000108678890();
  func_0x0001086786dc();
  func_0x000108678738();
  func_0x0001086787f8();
  func_0x000108678808();
  func_0x0001086786ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108678744();
  func_0x000108678808();
  func_0x000108678820();
  func_0x000107c31fe0();
  iVar9 = (int)*(undefined8 *)(param_1 + 0x48) + 0x10;
  func_0x000107c314e8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(unaff_x19 + 0x48) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar11 = *(long *)(unaff_x19 + 0x48);
    if (*(char *)(lVar11 + 0xb8) == '\x01') {
      func_0x000107c314e4(lVar11 + 0x10);
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      FUN_1086772d8();
      ___cxa_throw(uVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x108675fdc);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar11 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar12 = *(ulong *)(lVar11 + 0xa0);
    uVar7 = 0;
    if (uVar12 != 0) {
      uVar7 = uVar2 / uVar12;
    }
    *(ulong *)(lVar11 + 0xe0) = uVar2 - uVar7 * uVar12;
    *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
    FUN_108676580(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar4);
    *pbVar1 = 0;
    func_0x000107c314e4(*(long *)(unaff_x19 + 0x48) + 0x58);
  }
  return;
}



/* Entry: 108676030; end: 10867609b;  */

void FUN_108676030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = uVar1;
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    *(int *)((long)register0x00000008 + -0x58) = (int)uVar1;
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(int *)((long)register0x00000008 + -0x38) = (int)uVar1;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 1;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_10867609c;
    func_0x000108678820();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x20 = uVar1;
  }
  return;
}



/* Entry: 10867609c; end: 1086760a3;  */

void FUN_10867609c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_3;
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = uVar1;
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    *(int *)((long)register0x00000008 + -0x58) = (int)uVar1;
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(int *)((long)register0x00000008 + -0x38) = (int)uVar1;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 1;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_10867609c;
    func_0x000108678820();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x20 = uVar1;
  }
  return;
}



/* Entry: 1086760a4; end: 10867610f;  */

void FUN_1086760a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = uVar1;
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    *(int *)((long)register0x00000008 + -0x58) = (int)uVar1;
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(int *)((long)register0x00000008 + -0x38) = (int)uVar1;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 2;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_108676110;
    func_0x000108678820();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x20 = uVar1;
  }
  return;
}



/* Entry: 108676110; end: 108676117;  */

void FUN_108676110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar1 = param_3;
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_3 = uVar1;
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    *(int *)((long)register0x00000008 + -0x58) = (int)uVar1;
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(int *)((long)register0x00000008 + -0x38) = (int)uVar1;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 2;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_108676110;
    func_0x000108678820();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
    unaff_x20 = uVar1;
  }
  return;
}



/* Entry: 108676118; end: 108676177;  */

void FUN_108676118(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 3;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_108676178;
    func_0x000108678820();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 108676178; end: 10867617f;  */

void FUN_108676178(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 3;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_108676178;
    func_0x000108678820();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 108676180; end: 1086761df;  */

void FUN_108676180(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 4;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_1086761e0;
    func_0x000108678820();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 1086761e0; end: 1086761e7;  */

void FUN_1086761e0(long param_1)

{
  undefined1 in_ZR;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001086786c4(param_1);
    func_0x000108678890();
    func_0x0001086786dc();
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x30) = 4;
    func_0x000108678738();
    func_0x0001086787f8();
    func_0x000108678808();
    func_0x0001086786ac();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x000108678744();
    func_0x000108678808();
    unaff_x30 = FUN_1086761e0;
    func_0x000108678820();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  return;
}



/* Entry: 1086761e8; end: 1086762f3;  */

void FUN_1086761e8(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x20;
  
  func_0x000107c31f58();
  func_0x000107c31fa0(FUN_1086777b0);
  func_0x000107c31f4c();
  func_0x00010bcd3614(*(undefined8 *)(unaff_x20 + 0x48));
  plVar2 = *(long **)(unaff_x20 + 0x10);
  FUN_108659ed0(param_1 + 0x28);
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086762f4; end: 108676467;  */

void FUN_1086762f4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar6;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0x68;
  __Znwm();
  *puVar4 = FUN_108677a50;
  puVar4[1] = FUN_108677aa8;
  FUN_108676580(puVar4 + 4,param_2);
  func_0x000107c27f94(puVar4 + 2);
  func_0x000107c31f7c();
  puStack_48 = puVar4 + 0xb;
  *puStack_48 = param_1;
  uVar3 = *(uint *)(puVar4 + 8) == 0xffffffff;
  if ((bool)uVar3) {
    func_0x00010563ab98();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108676430);
    (*pcVar2)();
  }
  ppuVar5 = &puStack_48;
  (*(code *)(&PTR_FUN_110a61a48)[*(uint *)(puVar4 + 8)])(puVar4 + 10,ppuVar5,puVar4 + 4);
  puVar4[9] = puVar4[10];
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f90(puVar4[9]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xc) = 0;
    func_0x000107c31f28();
    if (*ppuVar5 == (undefined8 *)0x0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x000107c31f40();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)uVar3) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(puVar4 + 9);
  func_0x000108678828();
  func_0x000108678800();
  func_0x000108678728();
  func_0x000108678700();
  func_0x000108678810();
  func_0x00010867875c();
  return;
}



/* Entry: 108676468; end: 10867646b;  */

undefined8 * FUN_108676468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61908;
  param_1[1] = &PTR_FUN_110a61960;
  func_0x000107c28a38(param_1 + 9);
  func_0x000107c28a3c(param_1 + 8);
  func_0x000107c288a4(param_1 + 6);
  func_0x000107c28a4c(param_1 + 4);
  FUN_108676bf0(param_1 + 2);
  return param_1;
}



/* Entry: 10867646c; end: 10867647f;  */

void FUN_10867646c(void)

{
  FUN_108676b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108676480; end: 10867648f;  */

undefined8 * FUN_108676480(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110a61908;
  *param_1 = &PTR_FUN_110a61960;
  func_0x000107c28a38(param_1 + 8);
  func_0x000107c28a3c(param_1 + 7);
  func_0x000107c288a4(param_1 + 5);
  func_0x000107c28a4c(param_1 + 3);
  FUN_108676bf0(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 108676490; end: 10867650f;  */

void FUN_108676490(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar4 >> 0x21 == 1) {
    (**(code **)(*param_2 + 0x10))(param_2,1,param_1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108676504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 108676510; end: 108676563;  */

void FUN_108676510(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a619f8)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 108676564; end: 10867657f;  */

undefined8 FUN_108676564(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x000100100fd4(&uStack_28);
  return param_2;
}



/* Entry: 108676580; end: 1086765eb;  */

void FUN_108676580(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c31fe0();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_108676510();
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a61a20)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 1086765ec; end: 108676607;  */

void FUN_1086765ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
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
  return;
}



/* Entry: 108676608; end: 108676637;  */

long FUN_108676608(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_108676510(param_1);
  }
  return param_1;
}



/* Entry: 108676638; end: 10867665f;  */

void FUN_108676638(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  long *plVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long unaff_x22;
  
  uVar2 = *param_1;
  func_0x000108678664(uVar2);
  func_0x000107c31fa0(FUN_1086779e0);
  func_0x000107c31f4c();
  plVar3 = *(long **)(unaff_x22 + 0x20);
  func_0x0001086788fc();
  FUN_1086703e8();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c31f40();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar2);
  return;
}



/* Entry: 108676660; end: 10867675f;  */

void FUN_108676660(undefined8 param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x22;
  
  func_0x000108678664();
  func_0x000107c31fa0(FUN_1086779e0);
  func_0x000107c31f4c();
  plVar2 = *(long **)(unaff_x22 + 0x20);
  func_0x0001086788fc();
  FUN_1086703e8();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676760; end: 108676863;  */

void FUN_108676760(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000108678664();
  func_0x000107c31fa0(FUN_108677970);
  func_0x000107c31f4c();
  plVar2 = *(long **)(unaff_x22 + 0x20);
  func_0x0001086788fc(plVar2,param_2,*(undefined4 *)(unaff_x20 + 0x18));
  FUN_10867093c();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676864; end: 108676967;  */

void FUN_108676864(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x20;
  long unaff_x22;
  
  func_0x000108678664();
  func_0x000107c31fa0(FUN_108677900);
  func_0x000107c31f4c();
  plVar2 = *(long **)(unaff_x22 + 0x20);
  func_0x0001086788fc(plVar2,param_2,*(undefined4 *)(unaff_x20 + 0x18));
  FUN_108671790();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676968; end: 108676a67;  */

void FUN_108676968(undefined8 param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x22;
  
  func_0x000108678664();
  func_0x000107c31fa0(FUN_108677890);
  func_0x000107c31f4c();
  plVar2 = *(long **)(unaff_x22 + 0x20);
  func_0x0001086788fc();
  func_0x0001086723e8();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676a68; end: 108676b67;  */

void FUN_108676a68(undefined8 param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x22;
  
  func_0x000108678664();
  func_0x000107c31fa0(FUN_108677820);
  func_0x000107c31f4c();
  plVar2 = *(long **)(unaff_x22 + 0x20);
  func_0x0001086788fc();
  func_0x000108672418();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676b68; end: 108676bb7;  */

undefined8 * FUN_108676b68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61908;
  param_1[1] = &PTR_FUN_110a61960;
  func_0x000107c28a38(param_1 + 9);
  func_0x000107c28a3c(param_1 + 8);
  func_0x000107c288a4(param_1 + 6);
  func_0x000107c28a4c(param_1 + 4);
  FUN_108676bf0(param_1 + 2);
  return param_1;
}



/* Entry: 108676bb8; end: 108676bbb;  */

void FUN_108676bb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a61a80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108676bbc; end: 108676bcf;  */

void FUN_108676bbc(void)

{
  func_0x000108676bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108676bd0; end: 108676bef;  */

void FUN_108676bd0(long param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_108659ed0(auStack_28);
  func_0x00010bcd32f8(auStack_28);
  func_0x000107c31d74();
  FUN_10865a9b8(param_1 + 0x60);
  FUN_10865a9b8(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  func_0x000107c28868(param_1 + 0x28);
  func_0x000107c27c20(param_1 + 0x18);
  return;
}



/* Entry: 108676bf0; end: 108676c17;  */

long FUN_108676bf0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108676c18; end: 108676c1b;  */

void FUN_108676c18(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a619f8)[*(uint *)(param_1 + 0x20)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 108676c1c; end: 108676c87;  */

void FUN_108676c1c(void)

{
  func_0x000107c31fd0();
  func_0x000107c32018();
  func_0x000107c31f5c(FUN_1086781a4);
  func_0x000107c31f7c();
  func_0x000107c31fb4();
  func_0x000107c31f78();
  return;
}



/* Entry: 108676c88; end: 108676d83;  */

void FUN_108676c88(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000107c31f58();
  plVar2 = param_1;
  func_0x000107c31fa0(FUN_108678134);
  func_0x000107c31f4c();
  func_0x000107c32044();
  FUN_108676d84();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676d84; end: 108676f77;  */

void FUN_108676d84(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar3;
  long *extraout_x8_03;
  long *extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x21;
  
  func_0x0001086788a0();
  *param_1 = (long)FUN_108677fe8;
  param_1[1] = (long)FUN_108678110;
  param_1[6] = unaff_x21;
  plVar2 = param_1;
  func_0x000107c31fc8();
  func_0x000107c31fb0();
  func_0x0001086789c8(*(undefined4 *)(unaff_x21 + 0x54));
  func_0x000107c28838(param_1 + 5);
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x0001086786f0();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31ff4();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c31f40();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000107c31f98();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x000108678628();
          func_0x000108678854();
        }
        func_0x000107c31f94();
        goto code_r0x0001005550b8;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x0001086789bc();
  FUN_108672448(param_1 + 5);
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10_02 != 0);
  func_0x000107c31f50();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    func_0x000107c32010();
    func_0x0001086786f0();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31ff4();
    plVar3 = extraout_x8_02;
    do {
      if (*plVar3 == 0) {
        func_0x000107c31f40();
        plVar3 = extraout_x8_04;
        uVar1 = extraout_w10_04;
        uVar4 = extraout_w11_02;
      }
      else {
        func_0x00010867877c();
        plVar3 = extraout_x8_03;
        uVar1 = extraout_w10_03;
        uVar4 = extraout_w11_01;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001086789a8();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785d8();
          *(long **)(unaff_x21 + 0x90) = plVar2;
        }
        func_0x000108678994();
code_r0x0001005550b8:
        func_0x000107c31f44(*(undefined8 *)(unaff_x21 + 0x90));
        func_0x000107c32040();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108676f78; end: 108676fe3;  */

void FUN_108676f78(void)

{
  func_0x000107c31fd0();
  func_0x000107c32018();
  func_0x000107c31f5c(FUN_10867848c);
  func_0x000107c31f7c();
  func_0x000107c31fb4();
  func_0x000107c31f78();
  return;
}



/* Entry: 108676fe4; end: 1086770df;  */

void FUN_108676fe4(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000107c31f58();
  plVar2 = param_1;
  func_0x000107c31fa0(FUN_10867841c);
  func_0x000107c31f4c();
  func_0x000107c32044();
  FUN_1086770e0();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086770e0; end: 1086772d3;  */

void FUN_1086770e0(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *plVar3;
  long *extraout_x8_03;
  long *extraout_x8_04;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long unaff_x21;
  
  func_0x0001086788a0();
  *param_1 = (long)FUN_1086782d0;
  param_1[1] = (long)FUN_1086783f8;
  param_1[6] = unaff_x21;
  plVar2 = param_1;
  func_0x000107c31fc8();
  func_0x000107c31fb0();
  func_0x0001086789c8(*(undefined4 *)(unaff_x21 + 0x58));
  func_0x000107c28838(param_1 + 5);
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x0001086786f0();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31ff4();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x000107c31f40();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000107c31f98();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x000108678628();
          func_0x000108678854();
        }
        func_0x000107c31f94();
        goto code_r0x0001005550b8;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x0001086789bc();
  FUN_1086729d4(param_1 + 5);
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10_02 != 0);
  func_0x000107c31f50();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    func_0x000107c32010();
    func_0x0001086786f0();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31ff4();
    plVar3 = extraout_x8_02;
    do {
      if (*plVar3 == 0) {
        func_0x000107c31f40();
        plVar3 = extraout_x8_04;
        uVar1 = extraout_w10_04;
        uVar4 = extraout_w11_02;
      }
      else {
        func_0x00010867877c();
        plVar3 = extraout_x8_03;
        uVar1 = extraout_w10_03;
        uVar4 = extraout_w11_01;
      }
      if ((uVar4 & 1) != 0) {
        func_0x0001086789a8();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785d8();
          *(long **)(unaff_x21 + 0x90) = plVar2;
        }
        func_0x000108678994();
code_r0x0001005550b8:
        func_0x000107c31f44(*(undefined8 *)(unaff_x21 + 0x90));
        func_0x000107c32040();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086772d4; end: 1086772d7;  */

void FUN_1086772d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1086772d8; end: 10867730f;  */

void FUN_1086772d8(undefined8 *param_1)

{
  func_0x00010533b57c();
  *param_1 = &PTR_FUN_110a61ad0;
  return;
}



/* Entry: 108677310; end: 108677327;  */

void FUN_108677310(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    *(undefined1 *)*param_1 = 0;
  }
  return;
}



/* Entry: 108677328; end: 10867737b;  */

undefined8 * FUN_108677328(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_108676580(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10867737c; end: 108677417;  */

void FUN_10867737c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *puVar1 = FUN_108677bc4;
  puVar1[1] = FUN_108677ccc;
  FUN_108677418(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000107c31f4c();
  puVar1[0xb] = param_2;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  func_0x000107c31f78(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108677418; end: 10867743f;  */

void FUN_108677418(long param_1,long param_2)

{
  FUN_108677328();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 108677440; end: 10867753b;  */

void FUN_108677440(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  func_0x000107c31f58();
  plVar2 = param_1;
  func_0x000107c31fa0(FUN_108677b54);
  func_0x000107c31f4c();
  func_0x000107c32044();
  FUN_10867753c();
  func_0x000107c31f54();
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f50();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x000107c31f18();
    if (*plVar2 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31fa8();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x000107c31f40();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x000107c31f30();
        if ((bool)in_ZR) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x0001086785b8();
        }
        func_0x000107c31f10();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010867876c();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867753c; end: 1086776cb;  */

void FUN_10867753c(undefined8 *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puStack_48;
  
  plVar6 = (long *)*param_1;
  lVar3 = 0x60;
  __Znwm();
  func_0x000107c31fa0(FUN_108677ad0);
  func_0x000107c31fb0();
  puVar5 = (undefined1 *)(lVar3 + 0x20);
  *puVar5 = 0;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  func_0x000108678938();
  uVar1 = *(uint *)(param_1 + 5);
  uVar2 = uVar1 == 0xffffffff;
  if (!(bool)uVar2) {
    puStack_48 = puVar5;
    (*(code *)(&PTR_FUN_110a61ae8)[uVar1])(&puStack_48,param_1 + 1);
    *(uint *)(lVar3 + 0x40) = uVar1;
  }
  FUN_1086762f4(lVar3 + 0x50,plVar6,puVar5);
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x50);
  do {
    func_0x000107c31f38();
  } while (extraout_w10 != 0);
  func_0x000107c31f90(*(undefined8 *)(lVar3 + 0x48));
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x58) = 0;
    lVar7 = *(long *)(lVar3 + 0x48);
    func_0x000107c31f28();
    if (*plVar6 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x000107c31ff4();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x000107c31f40();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010867877c();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x000107c31f98();
        if ((bool)uVar2) {
          func_0x000108678648();
          func_0x000108678618();
          func_0x000108678628();
          func_0x000108678854();
        }
        func_0x000107c31f94();
        func_0x000107c31f44(*(undefined8 *)(lVar7 + 0x90));
        func_0x000107c32040();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c28834(lVar3 + 0x48);
  func_0x000108678828();
  func_0x000108678800();
  func_0x000108678938();
  func_0x000108678728();
  func_0x000108678700();
  func_0x00010867875c();
  return;
}



/* Entry: 1086776cc; end: 1086776cf;  */

void FUN_1086776cc(undefined8 *param_1)

{
  func_0x00010054f8c8(*param_1);
  func_0x000100292164();
  return;
}



/* Entry: 1086776d0; end: 10867770f;  */

void FUN_1086776d0(long param_1)

{
  long unaff_x19;
  
  func_0x00010867895c();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 108677710; end: 108677717;  */

void FUN_108677710(undefined8 *param_1)

{
  func_0x00010054f8c8(*param_1);
  func_0x000100292164();
  return;
}



/* Entry: 108677718; end: 10867775b;  */

void FUN_108677718(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867775c; end: 1086777af;  */

void FUN_10867775c(void)

{
  func_0x000108678678();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086777b0; end: 1086777fb;  */

void FUN_1086777b0(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086777fc; end: 10867781f;  */

void FUN_1086777fc(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677820; end: 10867786b;  */

void FUN_108677820(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867786c; end: 10867788f;  */

void FUN_10867786c(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677890; end: 1086778db;  */

void FUN_108677890(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086778dc; end: 1086778ff;  */

void FUN_1086778dc(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677900; end: 10867794b;  */

void FUN_108677900(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10867794c; end: 10867796f;  */

void FUN_10867794c(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677970; end: 1086779bb;  */

void FUN_108677970(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1086779bc; end: 1086779df;  */

void FUN_1086779bc(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086779e0; end: 108677a2b;  */

void FUN_1086779e0(undefined8 param_1)

{
  func_0x0001086787bc();
  func_0x000108678710();
  func_0x000108678708();
  func_0x000108678728();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108677a2c; end: 108677a4f;  */

void FUN_108677a2c(void)

{
  func_0x000108678678();
  func_0x000108678708();
  func_0x000108678700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108677a50; end: 108677aa7;  */

void FUN_108677a50(long param_1)

{
  func_0x000107c28834(param_1 + 0x48);
  func_0x000108678828();
  func_0x000108678800();
  func_0x000108678728();
  func_0x000108678700();
  func_0x000108678810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}


